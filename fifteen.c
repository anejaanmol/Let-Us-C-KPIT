// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to
// check if the three points fall on one straight line
#include <stdio.h>
#include<stdbool.h>  

int co_linear(int x1, int y1, int x2, int y2, int x3, int y3){
    if(x1==x2==x3){
        return 1;
    }
    float slope=((float)(y2-y1)/(x2-x1));

    return (slope == ((float)(y3 - y2)) / (x3 - x2) && slope == ((float)(y3 - y1)) / (x3 - x1));

}

int main(){
  int x1, y1, x2, y2, x3, y3;

  printf("Enter x1, y1: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter x2, y2: ");
  scanf("%d %d", &x2, &y2);

  printf("Enter x3, y3: ");
  scanf("%d %d", &x3, &y3);

  if (is_collinear(x1, y1, x2, y2, x3, y3)) {
    printf("The three points are collinear.\n");
  } else {
    printf("The three points are not collinear.\n");
  }

    return 0;
}