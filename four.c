// if a 5 digit number is input through keyboard, write a program 
// to calculate the sum of its digits.

#include <stdio.h>

int main(){
    int digit;
    printf("PLEASE INPUT THE 5 DIGIT NUMBER: ");
    scanf("%d",&digit);

    int sum=0;
    while(digit){
        int temp=digit%10;
        sum=sum+temp;
        digit=digit/10;
    }
    printf("THE SUM OF DIGITS IS : %d",sum);


    return 0;
}