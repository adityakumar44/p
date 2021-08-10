#include <stdio.h>
struct student {
    char firstName[100];
    int roll,age;
    float marks;
} s[10];

int main() {
    int i;
    printf("            -----| Enter information of students |-----\n");

    for (i = 0; i < 1; ++i) 
	{
        
		printf("\nEnter Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Enter Name: ");
        scanf("%s", &s[i].firstName);
       
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        
		printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    
	    printf("\nSatisfy Student Information:\n\n");

    for (i = 0; i < 10; ++i)
	 {
    	if (s[i].age>=18 && s[i].age<=25)
  	   {
		 if (s[i].marks<=30 && s[i].marks>=0)
		   {
		       if (s[i].marks<=30 && s[i].marks>=0)
			   {
			   	 if(s[i].roll>0)
			   	   {
			   	 	   printf("\nRoll number: %d",s[i].roll);
                       printf("\nName: %s",s[i].firstName);
                       printf("\nEnter age: %d",s[i].age);
                       printf("\nMarks: %.1f", s[i].marks);
                       printf("\n");
				   }
			      
               }    
             
			}
        }
    }
    return 0;
}