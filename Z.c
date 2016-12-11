
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(void){
int m,n, i, j, min, imin, jmin, k, l, z, z1, y;

//Sozdanie proizvol'nogo massiva mxn i BblBog ego
imin=0;
jmin=0;
srand ( time(NULL) );
m=rand() % 6 +4;
n=rand() % 5 +5;
printf("Proizvolnaya matrica:\n");
float a[m] [n], c;
for (i=0; i<m; i++) {
    printf("\n");
    for(j=0;j<n;j++){
        a[i] [j]=rand()%10;
        printf("%.2f\t", a[i][j]);
    }
}



//Zamena mestami pervoi i posledney cTPOK c razvorotom i nahojdenie raspolojeniya naimen'shego elementa

for(j=0;j<n;j++){
        c=a[0][j];
        a[0][j]=a[m-1][n-j-1];
        a[m-1][n-1-j]=c;

}
min=a[0][0];
printf("\n");
printf("\n");
printf("Matrica izmenennaya:\n");
for (i=0; i<m; i++) {
    printf("\n");
    for(j=0;j<n;j++){
         if (a[i][j]<min){
        imin=i;
        jmin=j;
        min=a[i][j];
        }
        printf("%0.2f\t", a[i][j]);
}
}
printf("\n");
printf("\n");



//Udalenie stroki i stolbca c pervim naimen;shim elementom


printf("Matrica c udalennoi strokoy i stolbcom, v koToPbIX 6bI/| HaiMeHbshii elelment:\n");
float b[m-1][n-1];
z=m-1;
z1=n-1;
for (i=0; i<(m-1); i++) {
if (i<imin) k=0;
else k=1;
    printf("\n");
    for(j=0;j<(n-1);j++){
        if (j<jmin) l=0;
        else l=1;
        b[i][j]=a[i+k][j+l];
        printf("%0.2f \t", b[i][j]);
}
}



//Sozdanie vtorogo massiva vruchnuyu
printf("\n \n Vvodite vtoroi massiv strogo po pravilam puncta 4 vo izbejanie oshibok \n");
m=1;
n=0;
y=0;
char d[MAX];
gets(d);
for(i=0;i<MAX;i++){
    if (d[i]==',') {
            m=m+1;
    }
    if(d[i]!=',' & d[i]!=' ')
        if(d[i+1]==' ' || d[i+1]==',' || d[i+1]=='.'){ n=n+1;
    }
}
n=n/m;
float q[m][n];
k=0;
l=0;
q[0][0]=0;
  printf("\n");
    printf("\n");
    printf("\n Vvedennaya vami matrica:\n");
for(i=0;i!=strlen(d);i++){
             if(d[i]!=',' & d[i]!=' '){
             y=y+1;
        if(d[i+1]==' ' || d[i+1]==',' || d[i+1]=='.'){
            for(y=y;y!=0;y=y-1)
            q[k][l]=q[k][l]+pow(10,y-1)*(d[i+1-y]-48);
            y=0;
            printf("%0.2f\t", q[k][l]);
            l++;
             q[k][l]=0;
                                                            }
}
if(d[i]==',') {
    printf("\n");
        k++;
 l=0;
 q[k][l]=0;}
 if(d[i]=='.')i=strlen(d)-1;
}



//Peremnojenie matric
printf("\nRezul'tat peremnojeniya:\n");
if (z1==m){
float S;
  printf("\n");
    printf("\n");
 for(i=0;!(i==z); i++)
    {

        for (j=0;!(j==n);j++)
         {   S=0;
             for(y=0;!(y==z1);y++)
             S=S+b[i][y]*q[y][j];
             printf("%0.2f\t", S);
         }
         printf("\n");
    }
    }
    else
         printf("\n \n Matrici nel'za umnojit'!!! \n \n");
    return 0;
}



