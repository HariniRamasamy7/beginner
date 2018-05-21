#include <iostream>
using namespace std;
 
int main() 
{
    int a[100],small,n,i,j;
    cin>>n;
   cout<<"enter inetegers";
    for ( i = 0 ; i<=n; i++ )
        cin>>a[i];
 
   small= a[0];
 
    for ( j = 0 ; j<=n; j++ ) 
    {
        if ( a[j] <= small ) 
        {
           small= a[j];
          
        }
    } 
 
   cout<<"the smallest number is"<<small;
    
}
