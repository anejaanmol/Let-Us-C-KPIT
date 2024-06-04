#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    // METHOD 1 
    // float n;
    // scanf("%f",&n);
    // n=abs(n);

    // METHOD 2
    int num=n;
    if(num<0){
        num=(-1)*num;
    }

    printf("%d",num);

    return 0;
}