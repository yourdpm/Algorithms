#include<stdio.h>

long long giaiThua(int n){
	int i;
	long long s=1;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
// tinh x^n
double mu(double x,double n){
	int i;
	double s=1;
	for(i=0;i<n;i++){
		s *= x;
	}
	return s;
}
void fen(double x, double y, int n){
	int i;
	double s=x,a,b,c,d;
	for(i=0;i<=n;i++){
		 s = s + mu(-1, i)* ((mu(x,2*i +2) * mu(y, 2*i + 1)) / giaiThua(2*i+1)) ;
	}
	printf("%lf",s);
}
int main()
{
	double x,y;
	int n;
	printf("Enter x: ");
	scanf("%lf",&x);
	printf("Ente y: ");
	scanf("%lf",&y);
	printf("Enter n: ");
	scanf("%d",&n);
	fen(x,y,n);

	return 0;
}

