#include <iostream>
#include<stdio.h>
#include<math.h>
double F(double x){
	return (0.7-x+0.3*sin(x));
}
double dF(double x){
	return (-1+0.3*cos(x));
}
double X(double x){
	return (x-(F(x)/dF(x)));
}
double abs(double x){
	if(x < 0) {
    	x = x * -1;
	}
	return x;
}
int main(int argc, char** argv) {
	double xk, xkp1, diff, eps;
	xk=1;
	xkp1=X(xk);
	diff = abs(xk-xkp1);
	eps=0.0001;
	printf("Xk		Xk+1		|Xk-Xk+1|<eps\n\n");
	printf("%.4f		%.4f		%.4f\n",xk,xkp1,diff);
	while(diff>eps){
		xk=xkp1;
		xkp1= X(xk);
		diff = abs(xk-xkp1);
		printf("%.4f		%.4f		%.4f\n",xk,xkp1,diff);
	}
	return 0;
}
