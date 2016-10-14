//Возведение в степень
#include <stdio.h>
#include <math.h>
main()
{
 int a,b;
 printf("Vvedite chislo i stepen'\n");
 scanf("%d %d",&a, &b);
 a = pow(a,b);
printf("%d", a+1);
return(0);
}
