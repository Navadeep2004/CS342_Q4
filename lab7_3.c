#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double distance(double x1,double y1,double x2,double y2){
	double r;
	r=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	r=sqrt(r);
	return r;
	}
int main()
{
int c;
c=distance(1,2,3,4);
printf("%lf",c);	
}
