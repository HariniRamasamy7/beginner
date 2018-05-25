#include<iostream>
using namespace std;
int main()
{ 
  char a[10];
  int i;
  for( i=0;i<=2;i++)
  { cin>>a[i];
   if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
   { cout<<"no";
     break;
   }
   else{
        cout<<"yes";
        break;
   }
  }	  
   return 0;
  }
