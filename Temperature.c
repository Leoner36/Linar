#include <stdio.h>
int main(void)
{
     int x;
     float C,F,K;
    printf("Vibirite shkalu:\n 1.C \n 2.F \n 3.K \n");
    scanf("%d", &x);
    printf("\nVvedite znachenie:\n");
    scanf("%f", &C);
    switch (x) {
case 1:
    F=1.8*C+32;
    K=C+273;
    printf("F=%f K=%f",F,K);
    break;
case 2:
    F = C;
    C=(F-32)*5/9;
    K=C+273;
    printf("C=%f K=%f",C, K);
    break;
case 3:
    K = C;
    C=K-273;
    F=C*1.8+32;
    printf("C=%f F=%f",C, F);
    break;
default:
    printf( "Error, ne pravil'no.\n" );
    }
    return 0;
}
