// composite trapezoidal
float f(float x){
	return 1 + (x*x*x);
}

int main(){
	float a, I, b, i,sum=0, h;
	int n;
	printf("enter the lower and upper limit a and b and n : ");
	scanf("%f%f%d", &a, &b, &n);
	
	h = (b-a)/n;
	for(i=1; i<n-1;i++){
		sum+=f(a+i*h);
	}
	I= (h/2)* (f(a)+f(b)+2*sum);
	printf("the value of I is %f ", I);
	
	return 0;
}
