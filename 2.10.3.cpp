#include <stdlib.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <cmath>
int main(void){
   float x,y;
scanf("%f", &x);
y=log(fabs(pow(x,3)-exp(x)))/log(5)-pow((2*x/cos(x+1.23*M_PI)),(1.0/3.0));
printf("%f",y);

}
