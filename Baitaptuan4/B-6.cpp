#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a[10000];
	 cout<<"nhap so n bat ky: ";
	 cin>>n;
	 for(int i=0;i<n;i++)
	 cin >> a[i];
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=i+1;j<n;j++)
	 	{
	 		{
	 			for(int k=j+1;k<n;k++)
	 		if(a[i]+a[j]+a[k]==0) 
			{cout<<"3 so co tong = 0 la: "<<a[i]<<endl<<a[j]<<endl<<a[k]<<endl;}
		 }
	 }
	 }
	 return 0;
	
