#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,difference;
    float c,d,sum1,difference1;
    scanf("%d %d\n",&a,&b);
    scanf("%f %f\n",&c,&d);
    
    sum=a+b;
    difference=a-b;
    sum1=c+d;
    difference1=c-d;
    printf("%d %d\n",sum,difference);
    printf("%.1f %.1f",sum1,difference1);
    
    return 0;
}
