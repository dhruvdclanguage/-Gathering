#include<stdio.h>

int sum(int a[]){
	
	int i,sum=0;
	
	for (i=0;i<=4;i++){
		
		sum+=a[i];
	}
	
	return sum;
}

int main(){
	
	int a[] = {1,2,3,4,5};
	
	printf("%d",sum(a));
	
	return 0;
}

