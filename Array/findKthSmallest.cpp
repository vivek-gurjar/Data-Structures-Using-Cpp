#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,num1,arr[30];
	cout<<" Enter the size of array --> ";
	cin>>num;
	
	cout<<" Enter the kth smallest element is --> ";
	cin>>num1;
	
	
	for(int i=0; i<num; i++)
	{
		cout<<" enter the value in array --> ";
		cin>>arr[i];
	}
	
	sort(arr,arr+num);
	
	cout<<num1<<"  smallest is --> "<<arr[num1-1]<<endl;
}