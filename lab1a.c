#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int b;
	int c;
	int ave;
	printf("Enter num1:");
	scanf("%d",&a);
	printf("Enter num2:");
	scanf("%d",&b);
	printf("Enter num3:");
	scanf("%d",&c);
	ave=(a+b+c)/3;
	printf("The average of the three numbers is %d",ave);
}
