//Program to calculate the sum of numbers at even places in array and also 
//finding sum is odd or even

#include <stdio.h>

int main()
{
    int len, sum = 0, i;
    printf("Enter the number of elements:");
    scanf("%d", &len);
    int number[len];
    printf("Enter the elements: ");
    for (i = 0; i < len; i++) 

    for (i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            sum += number[i];
        }
    }
    printf("Your sum of numbers at even places is = %d\n", sum);
    if (sum % 2 == 0)
    {
        printf("Your sum is even\n");
    }
    else
    {
        printf("Your sum is odd\n"); 
    }
    
    return 0;
}
