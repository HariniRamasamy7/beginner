#include<iostream>
using namespace std;
int main()
{ int a[100],temp,i,j,n=5;
  cout<<"enter the array elements";
  for(i=0;i<=n;i++)
  { 
  	 cin>>a[i];
  }
  for(i=0;i<=n;i++)
  {
  	for(j=0;j<=n;j++)
  	{ temp=a[j];
  	  a[j]=a[j+1];
  	  a[j+1]=temp;
  	}
  	   
  }
  for(j=0;j<=n;j++)
  { 
  	cout<<"\nelements after sorting"<<a[j];
  }
  return 0;
}
