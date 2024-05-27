// Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees

#include <stdio.h>

int main(){
    float fah;
    scanf("%f",&fah);
    float centi;

    centi=(fah-32.0)*(5.0/9.0);
    printf("%f",centi);

    return 0;   
}