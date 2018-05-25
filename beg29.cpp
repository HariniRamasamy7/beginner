#include<iostream>
using namespace std;
int main()
{ 
  int hrs,mins;
  cin>>mins;
  hrs=mins/60;
  mins=mins%60;
  cout<<hrs<<":"<<mins;
  return 0;
}
