/*** sine_wave's parameters ***/
int N = 1024;      //sampling number
float fs = 16000;  //sampling rate
float f = 440;     //fundamental freaquency
float T0 = 1 / f;  //Basic cycle
int t;             //time
float A = 100.0;   //amplitute
float[] y = new float[N];

/*** create sine_wave ***/
for(t=0; t<N; t++)
  y[t] = A * sin(2 * PI * t / (T0 * fs));

/***  plot wave ***/
size(512, 300);    // set window size
background(255);   // background color
color(0);
for(int i=1; i<N; i++){
  point(map(i, 0, N, 0, width), height/2-y[i]);
}
