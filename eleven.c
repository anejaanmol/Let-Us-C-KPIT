// If ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three. 

#include <stdio.h>

int main(){
    int ram,shyam,ajay;
    prinf("age of ram %d");
    scanf("%d",&ram);
    prinf("age of shyam %d");
    scanf("%d",&shyam);
    prinf("age of ajay %d");
    scanf("%d",&ajay);

    if(ram<shyam && ram<ajay){
        printf("ram is youngest");
    }else if(shyam<ram && shyam<ajay){
        printf("shyam is youngest");
    }else{
        printf("ajay is youngest");
    }
    return 0;
}
