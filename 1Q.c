#include<stdio.h>
float aoc(float);
int main(){
    float r;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    printf("the area of circle is %.2f",aoc(r));
    return 0;
}
float aoc(float r){
    float pi=3.14;
    return pi*r*r;
}
