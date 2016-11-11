#include <stdlib.h>
int main(void){
    int n,i,p;
    p=0;
    printf("Vvedite Razmer massiva\n");
    scanf("%d",&n);
    int m[n];
    printf("Vvodite massiv \n");
    scanf("%d",&m[0]);
    for (i=1;!(i==n);i++){
        scanf("%d",&m[i]);
        if (m[i-1]>m[i])
            p=1;
    }
    if (p==1) printf("Ne vozr");
        else printf("Vozr");
}
