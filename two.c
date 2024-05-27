// The length and breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the area
// and perimeter of the rectangle, and the area and circumference of
// the circle
#include <stdio.h>
#define PI 3.14159  
int main() {
    int len,bre,radius;
    scanf("%d %d %d",&len,&bre,&radius);
    int perimeter_rectangle= 2*(len+bre);
    int area_reactangle=len*bre;
    int circum= 2*PI*radius;
    printf("The perimeter of rectangle is: %d \n",len);
    printf("The area of rectangle is: %d \n",bre);
    printf("The circumfram of circle is: %d ",radius);

    return 0;
}