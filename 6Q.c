#include<stdio.h>
int cal(int);
int main(){
    int n,fact;
    printf("Enter a number to calculate its factorial : ");
    scanf("%d",&n);
    fact=cal(n);
    printf("the factorial of the number is %d",fact);
    return 0;
}
int cal(int n){
    int collect=1,i=n;
    while(i>1){
        collect=i*collect;
        i--;
    }
    return collect;
}
