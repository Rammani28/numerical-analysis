#include<stdio.h>
float f(float x){
	return 1 + (x*x*x);
}

int main(){
	float a, I, b, i,sum=0, h;
	int n;
	printf("enter the lower and upper limit a and b and n : ");
	scanf("%f%f%d", &a, &b, &n);
	
	h = (b-a)/2;
	
	I= (h/3)* (f(a)+ 4*f((a+b)/2) +f(b));
	printf("the value of I is %f ", I);
	
	return 0;
}
