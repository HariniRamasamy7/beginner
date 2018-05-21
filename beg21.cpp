#include <iostream>
using namespace std;
int main()
{
    int a, d, n, val, sum=0, i;
    cin>>n;
    cin>>a>>d;
    val=a;
    for(i = 0; i < n; i++) 
    {
        sum += val;
        val = val + d;
    }
 
    printf("\nSum of the AP series till %d n is %d\n", n, sum);

}
