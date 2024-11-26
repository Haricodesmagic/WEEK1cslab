/*Write a program to multiply two floating point numbers and print the output in both int and floating point representations*/

#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c;
printf("Enter the value of the two numbers in order \n");
scanf("%f%f", &a,&b);
c=a*b;
printf("In integer format the answer is %d and in floating point format the answer is %f",(int)(c),c);
return 0;
}
