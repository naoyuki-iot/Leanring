#coding:utf-8

"""""""""""""""インポートパッケージ"""""""""""""""
import numpy as np
import matplotlib.pyplot as plt
import wave
import soundfile as sf
import csv
import pyaudio
import datetime
import os
import struct
import math
from scipy import fromstring, int16
import time
import random

"""""""""""""""足音の録音"""""""""""""""
#録音設定
record_time=1.0 #録音時間
            #+1しないと59.・・・秒になるので注意
filename='tameshi3' #保存ファイル名
            #録音するごとに変更する！！
device_index=1 #録音デバイスのインデックス番
#コンデンサマイクの時は3で固定

#基本情報の設定
wformat=pyaudio.paInt16 #音声ファイルのフォーマット
wchannel=1 #1：モノラル、2:ステレオ
wrate=44100 #サンプリングレート
wchunk=2**8 #データ点数
audio=pyaudio.PyAudio()

stream=audio.open(format=wformat,channels=wchannel,rate=wrate,
input=True,input_device_index=device_index,
frames_per_buffer=wchunk)

date=datetime.datetime.now()

#録音開始
print('recording...')
frames=[]
for i in range(0,int(wrate/wchunk*record_time)):
    data=stream.read(wchunk)
    frames.append(data)
print('finished recording')

#録音終了
stream.stop_stream()
stream.close()
audio.terminate()

#wavファイル作成
waveFile=wave.open(filename + '.wav', 'wb') #ファイル生成
waveFile.setnchannels(wchannel) #チャンネル数
waveFile.setsampwidth(audio.get_sample_size(wformat)) #サンプル幅
waveFile.setframerate(wrate) #サンプリングレート
waveFile.writeframes(b''.join(frames)) #データ点数
waveFile.close()

#wavファイルパラメータ取得
waveFile=wave.open(filename + '.wav', 'rb')

numch=waveFile.getnchannels()
samplewidth=waveFile.getsampwidth()
samplerate=waveFile.getframerate()
numsamples=waveFile.getnframes()
record_time=float(numsamples/samplerate)+1.0

"""""""""""""""時間波形と周波数スペクトルのグラフ表示"""""""""""""""
plt.figure(figsize=(10,8))

#時間波形表示
time_wave, fs=sf.read(filename + '.wav')
time=np.arange(0.0,numsamples)/fs #時間軸設定

ax=plt.subplot(221)
plt.title("footsteps")
plt.xlabel('Time(s)')
plt.ylabel('Amplitude')
plt.plot(time,time_wave,color='red',label="time_wav")
plt.grid(True)
plt.legend() # 凡例を表示

with open('csvファイル作成.csv','w')as f:
    writer = csv.writer(f)
    writer.writerows(time)
    


#窓関数
#変数=np.窓関数名（numsamples）
#ハニング:np.hanning（）
#ハミング:np.hamming()
wind=np.hanning(numsamples) #ハニング窓

#FFT
#周波数スペクトル表示
fw1=np.abs(np.fft.fft(time_wave*wind)) #時間波形と窓関数の積を代入する
d=1.0/samplerate
freq1=np.fft.fftfreq(numsamples, d) #周波数軸設定

plt.subplot(222)
plt.title("footsteps")
plt.xlabel('Frequency(Hz)')
plt.ylabel('Spectrum')
plt.plot(np.abs(freq1), fw1, color='blue',label="FFT") #周波数スペクトルは左右対称
plt.legend() # 凡例を表示
#正の周波数のみ表示
plt.grid(True)

plt.show() #グラフ出力
