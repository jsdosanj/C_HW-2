//b) Write a program that estimates the value of the mathematical constant e by using the formula
#include <stdio.h>
#include <stdlib.h>
	double compute_ex(float);
	int main() {
		float x;
    	printf(" enter the value of x \n");
    	scanf("%f",&x);
    	printf("%.2f",compute_ex(x));
    	return 0;
	}
		double compute_ex(float x)
	{
    	int i=1,m,k,n=1;
    	float result = 0.0, p = 1.0, term = 1.0;
		result += term;

    while(term>=0.0001)
	{
    	for(m=1;m<=i;m++);
    {
    	p*=x;
    }
		for(k=1;k<=i;k++)
	{
   		n*=k;
	}
		term=p/n;
		result+=term;
		i++;
		p=1.0;
		n=1;
	}
		return result;
}