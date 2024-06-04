// Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions) 

#include <stdio.h>
#include <math.h>
int main(){
    float center_x,center_y,radius,point_x,point_y,distance;

    printf("enter the co-ordinates (x,y): ");
    scanf("%f %f",&center_x,&center_y);


    printf("enter the radius: ");
    scanf("%f",&radius);

    printf("enter the coordinates you need to check: ");
    scanf("%f %f", &point_x,&point_y);


    distance= sqrt(pow(point_x-center_x,2)+pow(point_y-center_y,2));

    if(distance>radius){
        printf("point is outside the circle");
    }else if(distance<radius){
        printf("point is inside the circle");
    }else{
        printf("point is on the circle");
    }
}