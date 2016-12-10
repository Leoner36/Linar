#include <stdio.h>
#include <stdlib.h>
int main(void){
int m,n, i, j, min, imin, jmin,k ,l;
imin=0;
jmin=0;
scanf("%d %d", &m, &n);
float a[m] [n], c;
srand ( time(NULL) );
for (i=0; i<m; i++) {
    printf("\n");
    for(j=0;j<n;j++){
        a[i] [j]=rand()%10;
        printf("%f\t", a[i][j]);
    }


}
for(j=0;j<n;j++){
        c=a[0][j];
        a[0][j]=a[m-1][n-j-1];
        a[m-1][n-1-j]=c;

}
min=a[0][0];
printf("\n");
printf("\n");
for (i=0; i<m; i++) {
    printf("\n");
    for(j=0;j<n;j++){
         if (a[i][j]<min){
        imin=i;
        jmin=j;
        min=a[i][j];
        }
        printf("%f\t", a[i][j]);
}
}
printf("\n");
printf("\n");
float b[m-1][n-1];
for (i=0; i<(m-1); i++) {
if (i<imin) k=0;
else k=1;
    printf("\n");
    for(j=0;j<(n-1);j++){
        if (j<jmin) l=0;
        else l=1;
        b[i][j]=a[i+k][j+l];
        printf("%f\t", b[i][j]);

}}

scanf("%d %d", &m, &n);
float q[m] [n];

}
