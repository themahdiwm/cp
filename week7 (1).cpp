#include <iostream>

using namespace std;

 main() {
 	int m,n,tvan;
 	cout<<"Enter first number:";
 	cin>>m;
 	cout<<"Enter second number:";
 	cin>>n;
 	tvan=1;
 	while(n>0)  {
 		tvan=tvan*m;
 		n=n-1;
	 }
	 cout<<"tvan equal is:"<<tvan;

}