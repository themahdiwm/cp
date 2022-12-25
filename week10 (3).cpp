#include <iostream>
 using namespace std;
  int gcd(int a , int b){
  	if (a%b==0){
  		return b;
  	}
  	else if (a%b!=0){
  		return gcd(b,a%b);
  	}
  }
  int main (){
  	int x,y;
  	cout << "Please enter first value:";
  	cin >> x;
  	cout << "Please enter second value:";
  	cin >> y;
  	cout << gcd(x,y);
  }