#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a[10000];
	 cout<<"nhap vao so n bat ky: ";
	 cin>>n;
	 for(int i=0;i<n;i++)
	 cin >> a[i];
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		if(a[i]+a[j]==0) 
			{cout<<"2 so co tong = 0 la:"<<a[i]<<endl<<a[j]<<endl;}
		 }
	 }
	 return 0; 
}
