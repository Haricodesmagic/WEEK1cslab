/*Write a program to swap two numbers without using a third variable*/

#include <stdio.h>
#include <math.h>

int main()
{
float a,b;
printf("Enter value of the two numbers in order \n");
scanf("%f%f", &a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The values of a and b have been swapped \n");
printf("The value of a is now %f \n", a);
printf("The value of b is now %f \n", b);
return 0;
}
