#include<stdio.h>
int main ()
{
    // int age;
    // printf("Enter the age");
    // scanf("%d",&age);
    // if (age>=18)
    // {
    //     printf("your age is %d you can drive",age);
    // }
    // else
    // {
    //     printf("your age is %d you cannot drive",age);
    // } 
    // int age;
    // int vippass=12;
    // printf("Enter your age\n");
    // scanf("%d",&age);
    // if ((age>=18 && age <70) || (vippass==12))
    // {
    //     printf("your age %d is between 18 to 70, so you can drive",age);
    // }
    // else
    // {
    //     printf(" your age %d is not between 18 to 70, so you cannot drive", age);
    // }
    // int a;
    // printf("Enter the a\n");
    // scanf("%d",&a);
    // if (a>5)
    // {
    //     printf("The number %d is less then 5",a);
    // }
    // else if (a<5)
    // {
    //     printf("The number %d is is grater then 5",a);
    // }
    // else if(a=5)
    // {
    //     printf("the number %d is equal to 5",a);
    // }
    // int a;
    // printf("Enter the a\n");
    // scanf("%d",&a);
    // (a<5)?  printf("a=%d is less then 5",a): printf("a=%d is greater then 5",a); // one liner code

    // return 0;
    int marks;
    printf("Enter the marks\n");
    scanf("%d",marks);
    switch (marks)
    {
    case 1:
        printf("As your marks %d is between 90-100, so your grade is A",marks);
        break;
    case 2:
        printf("As your marks %d is between 80-90, so your grade is B",marks);

    

    
   case 3:
    printf(" yor not able to proceed");
        break;
    }
    
}