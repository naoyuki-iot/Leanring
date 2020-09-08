int N = 1024;
float fs = 16000;
float f = 440;
float T0 = 1 / f;
int t;
float A = 50.0;
float[] y = new float[N];
int M = 100;

for(int n=1; n<M; n+=4){
  for(t=0; t<N; t++){
      y[t] -= A/(n*n) * sin(2 * PI * t / ((T0/n) * fs));
      y[t] += A/(n*n) * sin(2 * PI * t / ((T0/n+2) * fs));
  }
}

size(512, 300);
background(0);
stroke(0, 255, 0);
for(int i=1; i<N; i++){
  line(map(i-1, 0, N, 0, width*6), height/2-y[i-1], map(i, 0, N, 0, width*6), height/2-y[i]);
}
