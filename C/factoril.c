#include<stdio.h>
int fact(int x);
int main()
{
    int n, result;
    printf("enter number");
    scanf("%d",&n);
    result= fact(n);
    printf("%d",result);
    return 0;
}