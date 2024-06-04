// Write a program to check whether a triangle is valid or not, if three
// angles of the triangle are entered through the keyboard. A triangle
// is valid if the sum of all the three angles is equal to 180 degrees.
#include <stdio.h>
#define PI 3.14
int main(){
    float angle1,angle2,angle3;
    printf("ENTER ALL THE THREE ANGLES in Radian:");
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    int angle1d,angle2d,angle3d;
    angle1d= angle1* (180.0/PI);
    angle2d= angle2* (180.0/PI);
    angle3d= angle3* (180.0/PI);

    if(( angle1d+angle2d+angle3d ) == 180 ){
        printf("IT IS TRIANGLE");
    }else{
        printf("it is not a triangle");
    }
    return 0;
}