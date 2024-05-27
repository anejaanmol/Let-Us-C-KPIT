// Two numbers are input through the keyboard into two locations C and D. 
// Write a program to interchange the contents of C and D.
#include <stdio.h>

int main(){
    int c,d;
    printf("enter the two numbers: ");
    scanf("%d %d",&c,&d);
    printf("FIRST NUMBER IS %d and SECOND NUMBER IS %d \n\n",c,d);
    int temp=c;
    c=d;
    d=temp;

    printf("the first number now is %d and the second number is now %d", c,d);

    return 0;
}