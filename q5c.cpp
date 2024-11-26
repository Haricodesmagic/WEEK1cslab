/*Write a program to swap two numbers*/

#include <stdio.h>
#include <math.h>

int main()
{
float a,b,t;
printf("Enter value of the two numbers in order \n");
scanf("%f%f", &a,&b);
t=a+b;
a=t-a;
b=t-b;
printf("The values of a and b have been swapped \n");
printf("The value of a is now %f \n", a);
printf("The value of b is now %f \n", b);
return 0;
}
