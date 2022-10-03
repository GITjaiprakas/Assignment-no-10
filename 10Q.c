#include<stdio.h>
void check(int);
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    check(n);
    return 0;
}
void check(int n){
    int i;
    for(i=2; n!=1; i++){
        while(n%i==0){
            n=n/i;
            printf("%d ",i);
        }
    }
}
