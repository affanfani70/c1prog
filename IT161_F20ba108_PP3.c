#include<stdio.h>
int main ()
{
    char x;
    printf("Enter the character %c\n");
    scanf("%c",&x);
    printf("The character is %c\n",x);
    if(x>='a')
    {
        if(x<='z');
        printf("The letter is small\n");
    }
    else if(x>='A')
    {
       if(x<='Z');
       printf(" The letter is large\n");
    }
    else if(x>='0')
    {
        if(x<='9');
        printf("It is a Numerical digit");
    }
    return 0;
}
