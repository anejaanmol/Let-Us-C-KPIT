// Given a point (x, y), write a program 
// to find out if it lies on X-axis, Yaxis or origin
#include <stdio.h>

int main(){
    int x_coordinates,y_coordinates;
    printf("enter the coordinates: ");
    scanf("%d %d",&x_coordinates,&y_coordinates);

    if(x_coordinates==0){
        printf("coordinate is on y axis");
    }else if(y_coordinates==0){
        printf("coordinate is on x axis");
    }else{
        printf("point is on origin");
    }
    return 0;
}