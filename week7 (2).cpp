#include <iostream>
using namespace std;
 main() {
	int a,b,c,i,mod;
	cout<<"Enter first number:";
	cin>> a;
	cout<<"Enter second number:";
	
	cin >>b;
	c=0;
	i=0;
	while (a-c>=b){
		c=c+b;
		mod=a-c;
		i=i+1;
	}
	cout<<"remainder:"<<mod<<"\n";
	cout<<"quotient:"<<i;
}