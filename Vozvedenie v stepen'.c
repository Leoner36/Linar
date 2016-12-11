#include <stdio.h>
#include <math.h>
main()
{
 int a,b,i;
 printf("Vvedite chislo i stepen'\n");
  scanf("%d %d",&a, &b);
 for(i=0; i!= b-1;i++)
    a=a*a;
 printf("Otvet %d", a);
}
