#include <stdio.h>
#include <stdlib.h>
#define Nm 1000
 int main (void)
 {
     int n,i,j;
     float S, m [Nm];
     j=0;
     printf("Vvedite kol-vo chisel v massive \n");
     scanf("%d", &n);
     printf("Vvodite chisla \n");
     for (i=0;!(i==n);i++)
     {
     scanf("%f",&m[i]);
     if (m[i]>0)
     {
        S=S+m[i];
        j=j+1;
     }
     }
      printf("Srednee znachenie polojitel'nih chisel = %f", S/j)  ;
     return 0;
 }
