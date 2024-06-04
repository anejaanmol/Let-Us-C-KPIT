// Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.
#include <stdio.h>

int main(){
    int length,breadth;
    printf("enter the length and breadth: ");
    scanf("%d %d",&length,&breadth);


    int area=length*breadth;
    int perimeter= 2*(length*breadth);

    if(area>perimeter){
        printf("AREA IS GREATER");
    }else if(perimeter>area){
        printf("PERIMETER IS GREATER");
    }else{
        printf("equal h bhai");
    }
    return 0;
}