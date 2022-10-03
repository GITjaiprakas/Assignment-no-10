#include<stdio.h>
int combi(int,int);
long double fact(int);
int main(){
	int n,r;
	printf("Enter the value of n and r : ");
	scanf("%d %d",&n,&r);
	if(n>=r){
		printf("%dC%d is %d",n,r,combi(n,r));
	}
	else{
		printf("Wrong Input");
	}
	return 0;
}
int combi(int n,int r){
	return(fact(n)/(fact(r)*fact(n-r)));
}
long double fact(int p){
	long double facts=1;
	for(int i=p;i>1;i--){
		facts=facts*i;
	}
	return(facts);
}
