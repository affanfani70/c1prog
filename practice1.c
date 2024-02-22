#include <stdio.h>
int main()
{
    /* int length, breath;
  
    printf("Enter the value of length");

    scanf("%d",&length);
    printf("Enter the value of breath");
    scanf("%d",&breath);
    printf("The area of rectangle is %d",length*breath);

    int r;
    float pi=3.14;
    printf("Enter the value of r");
    scanf("%d",&r);
    printf("Area of circle is %f",pi*r*r);
    */
    int principle, rate, time;
    int simpleInterest = (principle * rate * time)/100;
    printf("Enter the value of principle\n");
    scanf("%d", &principle);
    printf("Enter the value of rate\n");
    scanf("%d", &rate);
    printf("Enter the value of time\n");
    scanf("%d", &time);
    printf("the simple interest is %d\n",simpleInterest);
}
