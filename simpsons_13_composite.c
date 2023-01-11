#include<stdio.h>
float f(float x){
	return (1 + (x*x*x));
}
int main(){
	float a, I, b,sumOdd=0, sumEven=0, h;
	int n, i;
	printf("enter the lower and upper limit a and b and n : ");
	scanf("%f%f%d", &a, &b, &n);
	
	h = (b-a)/n;
	for (i=1;i<n-1;i++){
		(i%2==0)?(sumEven+=f(a+i*h)):(sumOdd+=f(a+i*h));
	}
	I = h/3 * (f(a)+4*sumOdd+2*sumEven+f(b));
	printf("the value of I is %f ", I);
	
	return 0;
}
