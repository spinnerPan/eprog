#include<stdio.h>
int main(){
	int i,j,count=0,bin[5];
	for(i=0 ;i<5; i++){
		printf("number %d:",i+1);
		scanf("%d",&bin[i]);
	}
	for(i=0 ;i<5; i++){
		if(bin[i]==1){
			count++;
		}
		
	}
	printf("Ones = %d\n",count);
	printf("Zeroes = %d",5-count);
}
