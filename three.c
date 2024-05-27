#include <stdio.h>
// Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
// shorter sides. Thus, paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8. 

int main(){
    int a=1189;
    int b=841;
    int temp=0;
    printf("Size of A0 is:- %d mm X %d mm\n",a,b);
   for(int i=0;i<9;i++){
       printf("Size of A  is:- %d mm X %d mm\n",a,b);
       int b = a / 2;
        a = b;
        b = a;
   }
    return 0;
}