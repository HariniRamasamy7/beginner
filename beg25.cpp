#include <iostream>
using namespace std;

int main() {
	int a[100],n,middle,median;
	cin>>n;
	middle=n/2;
	for(int i=0;i<n;i++)
	{ cin>>a[i];
	}
	if(n%2==0)
	{ 
		median=(a[middle]+a[middle+1])/2;
		cout<<median;
	}
	else
	{
		median=a[middle+0]/1;
		cout<<median;
	}
	
		return 0;
}
