//  In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow- Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:
// refer book for formula or will be written in the code below
#include <stdio.h>

int main(){
    float red,green,blue,cyan,magenta,yellow,black,white,red_f,green_f,blue_f,max;

    printf("enter value for red from 0-255: ");
    scanf("%f",&red);

    printf("enter value for green from 0-255: ");
    scanf("%f",&green);

    printf("enter value for blue from 0-255: ");
    scanf("%f",&blue);

    red_f=red/255;
    green_f=green/255;
    blue_f=blue/255;

    max=red_f;
    if(max<blue_f){
        max=blue_f;
    }
    if(max<green_f){
        max=green_f;
    }

    black=1-white;
    magenta=(((white-green)/255))/white;
    yellow=(((white-blue)/255))/white;
    
    printf("VALUE OF WHITE IS: %f\n",white);
    printf("value of black is : %f\n",black);
    printf("value of magenta is: %f\n",magenta);
    printf("The value of yellow is : %f\n", yellow);
    return 0;
}