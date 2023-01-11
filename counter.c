//simple trapezoidal

#include<stdio.h>

float f(float x){
	return 1 + (x*x*x);
}

int main(){
	float a, b, i, h;
	printf("enter the lower and upper limit a and b: ");
	scanf("%f%f", &a, &b);
	
	h = b-a;
	i = (h/2)*(f(a)+f(b));
	printf("the value of I is %f ", i);
	
	return 0;
}
