//  If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an isosceles, an equilateral, a scalene or a right-angled triangle.


#include <stdio.h>
#include <math.h>
int main(){
    int len1,len2,len3;
    printf("enter the length of Triangle: ");
    scanf("%d %d %d",&len1,&len2,&len3);

    if(len1==len2 & len2==len3){
        printf("it is an equilateral triangle");
    }else if( (len1==len2) || (len2==len3) || (len3==len1)){
        if( (pow(len1,2)+pow(len2,2)==pow(len3,2) ) || (pow(len1,2)+pow(len3,2)==pow(len2,2) ) || (pow(len3,2)+pow(len2,2)==pow(len1,2) )){
            printf("triangle is right angled");
        }else{
            printf("triangle is isoceles");
        }
    }else{
        printf("triangle is scalene");
    }
    

    return 0;
}