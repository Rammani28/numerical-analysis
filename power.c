#include<stdio.h>
#include<math.h>

int main(){
	int n=3, i, j; 
	float e, A[5][5], X[5], Xnew[5], temp, lamda_old, lamda_new;
	printf("Enter order n and tolerable error e: ");
	scanf("%d%f", &n, &e);
		
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("enter element a[%d][%d]: ", i, j);
			scanf("%f", &A[i][j]);
		}
	}
	
	printf("Enter initial guess vector next: ");
	for(i=1;i<=n;i++){
		printf("enter an element: ");
		scanf("%f", &X[i]);
	}
	
	lamda_old = 1;
	
	step:
	for(i=1;i<=n;i++){
		temp=0;
		for (j=1;j<=n;j++){
			temp=temp+A[i][j]*X[j];
		}
		Xnew[i]=temp;
	}
	
	for(i=1;i<=n;i++){
		X[i]=Xnew[i];
	}
	
	lamda_new=fabs(X[1]);
	for(i=2;i<=n;i++){
		if(fabs(X[i])>lamda_new){
			lamda_new=fabs(X[i]);
		}
	}
	
	//normalize
	for(i=1;i<=n;i++){
		X[i]=X[i]/lamda_new;
		
	}
	printf("lamda_new = %f\n", lamda_new);
	for(i=1;i<=n;i++){
		printf("%f\n", X[i]);
	}
	
	if(fabs(lamda_new-lamda_old)>e){
		lamda_old = lamda_new;
		goto step;
	}
	
	
	
	
	return 0;
}

