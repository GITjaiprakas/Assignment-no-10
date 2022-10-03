#include<stdio.h>
void nat(int);
int main(){
    int n;
    printf("Enter the nth natural number : ");
    scanf("%d",&n); 
    nat(n);
    return 0;
}
void nat(int n){
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
}
