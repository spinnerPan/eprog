#include<stdio.h>
int main(){
	
	int a,b;
		printf("\n The odd numbers between 1 and 100 are \n");
	for(b=1; b<=100; ++b){
		a=b%2;
	if(a!= 0)
		printf("\n %d",b);
    }
  return 0;
}
