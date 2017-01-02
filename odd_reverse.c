#include<stdio.h>
int main(){
	
	int a,b;
		
	for(b=100; b>=1; --b){
		a=b%2;
	if(a!= 0)
		printf("\n %d",b);
		}
	return 0;
}
