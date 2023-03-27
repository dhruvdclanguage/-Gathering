#include<stdio.h>

int fact(int n) {
	
	if(n<=1){
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}

int main(){
	
	int y;
	
	printf("Enter Value :");
	scanf("%d",&y);
	
	printf("fact : %d",fact(y));
	
	return 0;
}
