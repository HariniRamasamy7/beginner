#include<iostream>
using namespace std;
int main()
{ 
  int hrs1,hrs2,mins1,mins2,d,d2;
  cin>>hrs1>>mins1;
  cin>>hrs2>>mins2;
  d=abs(hrs1)-abs(hrs2);
  d2=abs(mins1)-abs(mins2);
  cout<<abs(d)<<" "<<abs(d2);
  return 0;
}
