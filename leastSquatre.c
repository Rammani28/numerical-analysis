#include<stdio.h>
#include<math.h>

int main(){
	float x[10], y[10], sumx=0, sumxx=0, sumy=0, sumxy=0, a, b, o=0;
	int n, i=0;
	o++;
	printf("%f", o);
	printf("enter the no. of points(n): ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("enter x and f(x) or y: ");
		scanf("%f%f", &x[i], &y[i]);
	}
	for (i=0;i<n;i++){
		sumxx= sumxx + x[i]*x[i];
		sumx = sumx + x[i];
		sumxy = sumxy + x[i]*y[i];
		sumy = sumy + y[i];
	}
	b=(n*sumxy - sumx*sumy)/(n*sumxx-sumx*sumx);
	a = (sumy - b*sumx)/n;
	printf("a=%f\nb=%f ", a, b);
	
	
	return 0;
}

