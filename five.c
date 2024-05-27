// WRITE A PROGRAM TO RECEIVE CARTESIAN CO-ORDINATIES 
// (X,Y) OF A POINT AND CONVERT THEM INTO POLAR
// CO-ORDINATES

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(){
    float x,y,r,theta;
    printf("ENTER CARTESIAN CO-ORDINATES: ");
    scanf("%f %f",&x,&y);

    r=sqrt(x*x+y*y);
    theta= atan2(x,y);
    theta=theta*(180.0/PI);

    printf("The Polar Co-ordinates are : (%f,%f))",r,theta);

    return 0;
}