#include <stdio.h>
#include <stdlib.h>
int main(){
char c [20];
gets(c);
if (strlen(c)<3) printf("Oshibka");
else {
if(c[0]=='0'){
    if(c[1]=='X' || c[1]=='x')
    printf("Chislo 16-chnoe");
else
    printf("Chislo ne 16-chnoe");

}
else
    printf("Chislo ne 16-chnoe");
}
}
