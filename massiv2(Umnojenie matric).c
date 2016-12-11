#include <stdio.h>
#define max 100
int main(void)
{
    int i,j,i1,i2,j1,j2,x,y;
    float S, m[max] [max], n[max] [max], r [max] [max];
    printf("Kolichestvo strok massiva 1 = ");
    scanf("%d", &i1);
    printf("\n Kolichestvo stolbcov massiva 1= ");
    scanf("%d", &j1);
      printf("\n Kolichestvo strok massiva 2 = ");
    scanf("%d", &i2);
    printf("\n Kolichestvo stolbcov massiva 2= ");
    scanf("%d", &j2);

    if(j1==i2)
    {
        printf("\n Vvodite massiv 1\n");
    for (i=0;!(i==i1);i++)
    {
        for (j=0;!(j==j1);j++)
        {
           scanf(" %f", &m[i] [j]);
           for (x=0;!(x==i1);x++)
              {
                  for (y=0;!(y==j1);y++)
                  printf("  %f", m[x] [y]);
                  printf("\n");
               }
        }
    }
    printf("\n Vvodite massiv 2\n");
    for (i=0;!(i==i2);i++)
    {
        for (j=0;!(j==j2);j++)
        {
           scanf(" %f", &n[i] [j]);
           for (x=0;!(x==i2);x++)
              {
                  for (y=0;!(y==j2);y++)
                  printf("  %f", n[x] [y]);
                  printf("\n");
               }
        }
    }

    printf("\n \n Rezul'tat umnojeniya: \n");
    for(i=0;!(i==i1); i++)
    {

        for (j=0;!(j==j2);j++)
         {   S=0;
             for(y=0;!(y==j1);y++)
             S= S + m[i] [y] * n [y] [j];
             r [i] [j]= S;
             printf("  %f", r[i] [j]);
         }
         printf("\n");
    }
    }
    else
         printf("\n \n Matrici nel'za umnojit'!!! \n \n");
    return 0;
}
