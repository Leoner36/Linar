#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
main(){
    int i,m,y;
char d[MAX];
printf("\n Vvodite chisla cherez probel(tochka - konec vvoda):\n");
gets(d);
int s[MAX/2];
s[0]=0;
y=0;
m=0;
    printf("\n Vvedennie vami chisla:\n");
for(i=0;i<strlen(d);i++){
             if(d[i]!='.' & d[i]!=' '){
             y=y+1;
        if(d[i+1]==' ' || d[i+1]=='.'){
            for(y=y;y!=0;y=y-1)
            s[m]=s[m]+pow(10,y-1)*(d[i+1-y]-48);
            y=0;
            printf("%d\t", s[m]);
            m++;
            s[m]=0;

}
}
if(d[i]=='.') i=strlen(d)-1;
}
}

