#include <iostream>
 using namespace std;
  const int n=10;
    main() {
  	 int a[n];
  	 int i,j,temp,m;
  	  for (i=0; i<n; i++)
	    {
  		cout << "Please enter value ["<<i<<"]:";
  		 cin >> a[i];
	    }
	    cout << "please enter another value:";
  		 cin >> m;
  		a[10]=m;
	  for(i=0; i<n;i++)
	  {
		for (j=0; j<(n-i); j++)
		{
			
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	  }
	cout <<"Array after sort:";
	for(i=0; i<n; i++)
	{
		cout << "  "<< a[i];
    	} 
}