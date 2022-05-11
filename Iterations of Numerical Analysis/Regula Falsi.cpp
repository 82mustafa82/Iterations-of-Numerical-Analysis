#include <iostream>
#include<stdio.h>
#include<math.h>
double F(double x){
	return (2*x*(x*x-1));
}
double C(double x, double y){
	return (((y*F(x))-(x*F(y)))/(F(x)-F(y)));
}
double abs(double x){
	if(x < 0) {
    	x = x * -1;
	}
	return x;
}
int main(int argc, char** argv) {
	double a, b, c, eps;
	a=0.5;
	b=1.5;
	c=C(a,b);
	eps=0.0001;
	printf("a	f(a)	b	f(b)	c	f(c)\n\n");
	printf("%.4f	%.4f	%.4f	%.4f	%.4f	%.4f\n",a,F(a),b,F(b),c,F(c));
	while(abs(F(c))>eps){
		if(F(c)<0){
			a=c;
		}
		else{
			b=c;
		}
		c=C(a,b);
		printf("%.4f	%.4f	%.4f	%.4f	%.4f	%.4f\n",a,F(a),b,F(b),c,F(c));
	}
	return 0;
}
