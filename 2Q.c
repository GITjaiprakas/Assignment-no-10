#include<stdio.h>
float cal(float, float, float);
int main(){
    float p,r,t,si; 
    printf("Enter the principal amount, rate of interest(per year), time : \n");
    scanf("%f %f %f",&p,&r,&t);
    si=cal(p,r,t);
    printf("the simple interest is %.2f",si);
    return 0;
}
float cal(float p, float r, float t){
    return p*r*t/100;
}
