#include <iostream>
 
using namespace std;
 int getMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
 void countSortFun(int arr[], int n, int x)
{
	  int output[n], i, count[10] = {0};
 for (i = 0; i < n; i++)
		count[(arr[i] / x) % 10]++;
 for (i = 1; i < 10; i++)
		count[i] += count[i-1];
 for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / x) % 10] - 1] = arr[i];
		count[(arr[i] / x) % 10]--;
	}
 
for (i = 0; i < n; i++)
		arr[i] = output[i];
}
 void radixsortFun(int arr[], int n)
{
	int x, m;
	m = getMax(arr, n);
for (x = 1; m/x > 0; x *= 10)
		countSortFun(arr, n, x);
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number  element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	radixsortFun(arr, n);
  cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
		cout<<"->"<<arr[i];
	return 0;
}