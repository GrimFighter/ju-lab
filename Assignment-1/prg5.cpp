#include<stdio.h>
#include <math.h>
#define PI 3.1416
#define MAX 180

void cos(){
    int angle;
   float x,y;
   angle = 0;
   printf("Angle cos(angle)\n");
   while(angle <= MAX) {
      x = (PI/MAX)*angle;
      y = cos(x);
      printf("%15d %13.4f\n", angle, y);
      angle = angle + 10;
   }
}

void sine(){
     int angle;
   float x,y;
   angle = 0;
   printf("Angle Sine(angle)\n");
   while(angle <= MAX) {
      x = (PI/MAX)*angle;
      y = sin(x);
      printf("%15d %13.4f\n", angle, y);
      angle = angle + 10;
   }
}


void log1(){
    printf("Log Series upto 100\n");

    int number=0;
    while(number<100){
        printf(" %d %0.2lf\n",number,log(number));
        number+=1;
    }
}
main ( ) {

    cos();
    sine();
    log1();
   
}