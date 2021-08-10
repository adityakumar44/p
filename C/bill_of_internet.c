#include<stdio.h>

int main()
{
    float hour;
    printf ("Enter number of hour spent =");
    scanf("%f",&hour);
   if (hour==1)
   {
       
       printf("amount is 20 rs");
   }
   else if (hour==0.5)
   {
       printf("amount is 10 rs ");
   }
    else 
   {
       
       printf("amount is 90 rs");
   }
   
    return 0; 
}