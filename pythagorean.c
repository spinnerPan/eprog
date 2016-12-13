#include<stdio.h>
#include<math.h>

main(){
	int a;
	int b;
	int d;
	int e;
	double c;
	printf("Enter a value of a ");
	scanf("%d",&a);
	printf("Enter a value of b ");
	scanf("%d",&b);
	d=a*a;
	e=b*b;
	c=d+e;
	printf("%lf", sqrt(c));
}
