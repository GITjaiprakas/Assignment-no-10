#include<stdio.h>
int check(int);
int main(){
    int n=8920;
    if(check(n)==1){
        printf("the given number contains the given digit");
    }
    else{
        printf("the given number doesn't contain the given digit");
    }
    return 0;
}
int check(int n){
    int c;
    printf("Enter the number : ");
    scanf("%d",&c);
    while(n){
        if(c==n%10){
            return 1;
        }
        n=n/10;
    }
    return 0;
}
