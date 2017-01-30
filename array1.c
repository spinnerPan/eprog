#include<stdio.h>
int main(){
	int i,sum,ave,grades[3];
	for(i=0 ;i<3; i++){
		printf("Enter your grade:");
		scanf("%d",&grades[i]);
	}	
	for(i=0 ;i<3; i++){
		sum += grades[i];
	}
	ave=sum/3;
	printf("the average is %d\n", ave);
	if(ave>=75)
		printf("You passed");
		else
			printf("You failed");
}
