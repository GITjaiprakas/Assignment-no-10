#include<stdio.h>
int check(int );
int main(){
    int n,res;
    printf("Enter any number : ");
    scanf("%d",&n);
    res=check(n);
    printf("%d",res);
    return 0;
}
int check(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
