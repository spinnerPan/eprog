#include<stdio.h>
int main(){
	
	int i=0,sum;
	for(i=0 ; i<23456789 ; i++){
		if(i%2==0)
			sum=sum+i;			
	}	
	printf("%d",sum);	
}
