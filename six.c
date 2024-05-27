// Write a program to receive values of latitude 
// (L1, L2) and longitude (G1, G2), in degrees,
//  of two places on the earth and output the distance
// (D) between them in nautical miles. The formula for distance in nautical miles is: 
// D = 3963 cos¹ (sin L1 sin L2 + cos L1 cos L2 * cos (G2-G1))
#include <stdio.h>
#include <math.h>
#define PI 3.14
double to_radian(double degrees){
    return degrees*(PI/180.0);
}
double calculate_distance(double L1,double L2,double G1,double G2){
    L1=to_radian(L1);
    L2=to_radian(L2);
    G2=to_radian(G2);
    G1=to_radian(G1);
    double distance =3963 *acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)* cos(G2-G1));
    return distance;
    
}
int main(){
    double L1,L2,G1,G2;
    prinf("ENTER CO-ORDINATES OF BOTH THE PLACES:");
    scanf("%lf %lf %lf %lf ",&L1,&L2,&G1,&G2);
    double result=calculate_distance(L1,L2,G1,G2);
    printf("THE DISTANCE BETWEEN THE TWO PLACES ARE=> %lf ",result);
    



    return 0;
}