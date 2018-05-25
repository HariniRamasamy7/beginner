#include <iostream>
 
using namespace std;
int n,median;

void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
	if(n%2==0)
	{ 
		median=(a[mid]+a[mid+1])/2;
		cout<<median;
	}
	else
	{
		median=a[mid+0]/1;
		cout<<median;
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
               	Merge(a, low, high, mid);
	}
}
 
int main()
{
	int i;
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
	  cin>>arr[i];
	}
 
	MergeSort(arr, 0, n-1);
 
	for (i = 0; i < n; i++)
          cout<<<arr[i];
        
 
	return 0;
}
