#include<stdio.h>
int main(){
	int i,sum,grades[3];
	float ave;
	for(i=0 ;i<3; i++){
		printf("Enter your grade:");
		scanf("%d",&grades[i]);
	}	
	for(i=0 ;i<3; i++){
		sum += grades[i];
	}
	ave=sum/3;
	printf("The average is %.2f\n", ave);
	if(ave>=75)
		printf("Pass");
	else
		printf("Fail");
}
