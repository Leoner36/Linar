#include <stdlib.h>
#include <stdio.h>
#define N 5
main(void)
{
    srand(time(NULL));
    int x,i,y;
    x=rand()%10;
    printf("Vvodite chisla \n");
for (i=0;i<N;i++)
{
    scanf("%d", &y);
    if (x == y)
    {
        printf("Vi ugadali");
        i=N;
    }
}
if (i==N) printf("Popitki zakonchilis'");
return 0;
}
