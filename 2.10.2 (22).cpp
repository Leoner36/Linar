#include <stdlib.h>
#include <stdio.h>
int main(){
int K,n;
printf("VVedite kol-vo dney \n");
scanf ("%d",&K);
n=(int) K /7;
K=K % 7;
printf("Proshlo nedel %d, dney %d", n, K);
return 0;

}
