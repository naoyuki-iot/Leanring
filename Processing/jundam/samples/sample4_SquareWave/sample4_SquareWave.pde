int N = 1024;
float fs = 16000;
float f = 440;
float T0 = 1 / f;
int t;
float A = 50.0;
float[] y = new float[N];
int M = 10;

for(int n=1; n<M; n+=2){
  for(t=0; t<N; t++)
    y[t] += A/n * sin(2 * PI * t / ((T0/n) * fs));
}
for(int i=0; i<N; i++)
    y[i] = y[i] / M;

size(512, 300);
background(0);
stroke(0, 255, 0);
for(int i=1; i<N; i++){
  line(map(i-1, 0, N, 0, width), height/2-y[i-1], map(i, 0, N, 0, width), height/2-y[i]);
}
