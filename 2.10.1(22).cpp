#include <stdlib.h>
#include <stdio.h>
int main(){
int A, B, C, N;
printf("VVedite chisla \n");
scanf ("%d %d %d",&A,&B,&C);
N=A;
A=B;
B=C;
C=N;
printf("%d %d %d ", A, B,C);
return 0;

}
