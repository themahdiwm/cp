#include <iostream>
using namespace std;
        
main() {
	
	float salary = 0;
	
	cout << "Enter the final salary: ";
	cin >> salary;
	
	if (salary<6000000)
		cout << "Your Tax is 0 Then your final salary:" << salary;
		
	if (salary>=6000000 && salary<8000000){

		salary = salary - salary*6/100;
		cout << "Your Tax is %5, So your final salary is:" << salary;		
	}
	
	if(salary>=8000000 && salary<10000000){
		
		salary = salary - salary*10/100;  
		cout << "You Tax is %10, so your final salary is: " << salary;
	}
	
	if(salary>=10000000 && salary<14000000){
		
		salary = salary - salary*15/100;
		cout << "Your Tax is %15, So your final salary is: " << salary;
	}
	if(salary>=14000000 && salary<18000000){
		salary = salary - salary*20/100;
		cout <<"Your Tax Is %20, So your final salary is: " << salary;
	}
	if(salary>=18000000 && salary<25000000){
		salary = salary - salary*25/100;
		cout <<"Your Tax Is %25, so your final salary is: " << salary;
	
	}
	if(salary>25000000) {
		salary = salary - salary*35/100;
		cout <<"Your Tax Is %35, so your final salary is:" << salary;
	}
} 