/*Write a program to calculate percentage of a student given the marks of 5 different subjects out of 100*/

#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c,d,e;
printf("Enter value of marks of each subject in order \n");
scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
printf("The percentage of the student is %f %%",(a+b+c+d+e)/5);
return 0;
}
