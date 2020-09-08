int N = 1024;
float fs = 16000;
float f = 440;
float T0 = 1 / f;
int t;
float A = 100.0;
float[] y = new float[N];

for(t=0; t<N; t++)
  y[t] = A * sin(2 * PI * t / (T0 * fs)) + A * cos(2 * PI * t / (T0 * fs));
  
size(512, 300);
background(0);
stroke(0, 255, 0);
for(int i=1; i<N; i++){
  line(map(i-1, 0, N, 0, width*10), height/2-y[i-1], map(i, 0, N, 0, width*10), height/2-y[i]);
}
