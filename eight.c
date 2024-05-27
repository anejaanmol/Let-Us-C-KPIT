//  If value of an angle is input through the keyboard, 
// write a program to print all its Trigonometric ratios.

#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
   float angle;
   printf("ANGLE IN Radian: ");
   scanf("%f",&angle);
   double degree=angle* (PI/180.0);
    double tann=tan(degree);
    double sinn=sin(degree); 
    double coss=cos(degree);
   printf("VALUE OF tan(%f)=>  ",tann);
   printf("VALUE OF sin(%f)=>  ",sinn);
   printf("VALUE OF cos(%f)=>  ",coss);

    return 0;
}