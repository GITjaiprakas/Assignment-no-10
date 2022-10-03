#include<stdio.h>
long double fact(int);
int arr(int,int);
int main(){
    int n,r; 
    printf("Enter the value of n and r : ");
    scanf("%d %d",&n,&r);
    printf("%dP%d is %d",n,r,arr(n,r));
    return 0;
}
int arr(int n,int r){
    return(fact(n)/fact(n-r));
}
long double fact(int p){
    long double facts=1;
    for(int i=p;i>1;i--){
        facts=facts*i;
    }
    return(facts);
} 
