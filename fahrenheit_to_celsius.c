#include<stdio.h>
#include<math.h>
int main(){

int a,b,c,d;

printf("Good Morning/n");
printf("Enter a number in Celsius: ");
scanf("%d",&a);
b=(9/5*a)+32;
printf("The value of %d celsius in fahrenheit is %d",&a,&b);

printf("Enter a number in Fahrenheit: ");
scanf("%d",&c);
d=(c-32)*5/9;
printf("The value of %d fahrenheit in celsius is %d",&c,&d);

return 0;
}
