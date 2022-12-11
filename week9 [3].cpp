#include <iostream>
 using namespace std;
 main() {
 	int a[10];
 	a[0]=0;
 	a[1]=1;
 	int i;
 	for (i=2; i<10; i++){
 		a[i]=a[i-1]+a[i-2];
	 }
	for (i=0; i<10; i++){
		cout << "Fibonatchi seroius:"<<a[i] << "\n";
	} 
}