/*Write a C program to convert Kilometer to Meter Centimeter and Millimeter*/

#include <stdio.h>
#include <math.h>

int main()
{
float a;
printf("Enter the magnitude of length in kilometres \n");
scanf("%f", &a);
printf("The value the %f km in meters is %f m, In centimeters is %f cm, In millimeters is %f mm", a,1000*a,100000*a,1000000*a);
return 0;
}
