
#include <iostream> 
 
using namespace std; 
int pow(int x,int y){ 
if (y>1){ 
 return (x*pow(x,y-1)); 
} 
else { 
    return x; 
} 
} 
int fact(int k){ 
if(k==0){ 
 return 1; 
} 
else { 
    return k*fact(k-1); 
} 
 
} 
 
 int main() 
 { 
float sin,cos,v; 
cout<<"plese enter a number:"; 
cin>>v; 
sin=v-(pow(v,3))/(fact(3))+(pow(v,5))/(fact(5))-(pow(v,7))/(fact(7)); 
cos=1-(pow(v,2))/(fact(2))+(pow(v,4))/(fact(4))-(pow(v,6))/(fact(6)); 
cout<<"tan of"<<v<<"is"<<sin/cos; 
}