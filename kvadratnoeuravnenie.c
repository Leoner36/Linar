//Квадратное уравнение
#include <stdio.h>
#include <math.h>
main(void)
{
 float a,b,c,D,x1,x2;
 printf("Vvedite a, b, c \n");
 scanf("%f %f %f",&a,&b,&c);
 D = b*b-4*a*c;
 printf("D=%f \n", D);
 if (D<0)
     printf("net korney");
 else
  {
      D = sqrtf(D);
x1 = (-b+D)/(a*2);
x2 = (-b-D)/(a*2);
printf("x1=%f x2=%f",x1, x2);
return(0);
  }
}
