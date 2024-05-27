// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not. 

#include <stdio.h>

int main(){
    int res;
    printf("enter the 5 digit number: ");
    scanf("%d",&res);

    int reversed_number;
    int temp=res;
    while(temp){
        int fac=temp%10;
        reversed_number=reversed_number*10+fac;
        temp=temp/10; 
    }
    printf("REVERSED NUMBER IS: %d \n",reversed_number);
    if(reversed_number==res){
        printf("NUMBERS ARE EQUAL");
    }else{
        printf("numbers are not equal");
    }

    return 0;
}