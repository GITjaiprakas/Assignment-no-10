#include<stdio.h>
void odd(int);
int main(){
    int n;
    printf("Enter how many first odd natural numbers you want : ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n){
    int i=1;
    while(i<=n){
        printf("%d ",2*i-1);
        i++;
    }
}

