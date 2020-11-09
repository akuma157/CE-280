#include<iostream>
using namespace std;
main()
{
	int i=1, m, s;
	
	
	while (i<=10)
	{
		cout<<"enter the mark: " ;cin>>m;
		s=s+m;
		i=i+1;
	}
	cout<<"average is: "<<s/10;
	
	return 0;
}
