#include<stdio.h>
int gcd(int m, int n);
int lcm(int a, int b);
int main(){
		
    int x=1, i;
    for(i=1; i<20; i++){
        x=lcm(x, i+1);
    }
    printf("The answer is:\t%d", x);
    return 0;
}

	int gcd(int m, int n){
    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else
        n=n-m;
    }
    return m;
}

	int lcm(int a, int b){
    return ((a*b)/gcd(a, b));
}
