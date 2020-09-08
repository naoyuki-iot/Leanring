import ddf.minim.*;
Minim minim;
AudioInput in;
int N = 1024;
float fs;
float[] y = new float[N];

void setup(){
  size(512, 300);
  background(0);
  
  minim = new Minim(this);
  in = minim.getLineIn(Minim.STEREO, N);
  fs = in.sampleRate();
}

void draw(){
  background(0);
  y = in.mix.toArray();
  stroke(0, 255, 0);
  for(int i=1; i<N; i++){
    line(map(i-1, 0, N, 0, width), height/2-y[i-1]*100, map(i, 0, N, 0, width), height/2-y[i]*100);
  }
}
