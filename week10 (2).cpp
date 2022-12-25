#include <iostream>
 using namespace std;
 int pow(int a , int b){
 	if (b==0){
 		return 1;
 	}
 	else if (b>0){
 		return a*pow(a,b-1);
 	}
 	
 	
 }
 int main(){
 	int x,y ;
 	cout<<"Please enter first number:";
 	cin >> x;
 	cout << "Please enter second number:";
 	cin >> y;
 	 cout << "tavan is:" << pow(x,y);
 }