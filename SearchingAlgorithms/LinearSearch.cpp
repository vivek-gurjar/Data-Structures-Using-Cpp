#include<iostream>
using namespace std;
 
int LinearSearch(int arr[], int search, int num)
{
	for(int i=0; i<num; i++)
	{
		if(arr[i]==search)
		{
			return i ;
		}
	}
	return -1;

	/* using while loop
	
	int i;
	while(i<num)
	{
		if(arr[i]==search)
		{
			return i;
		}
		i++;
	}
	return -1;
	*/
} 

int main()
{
	int i,j,num,arr[100],search;
	cout<<"Enter the size of array --> ";
	cin>>num;
	
	cout<<"Enter the searching element --> ";
	cin>>search;
	
	for(i=0; i<num; i++)
	{
		cout<<" Enter the value of array " << i << " index value --> ";
		cin>>arr[i];
	}
	
	j=LinearSearch(arr,search,num);
	
	if( j == -1)
	  cout<<" Searching Element "<< search <<" not present in array :(";
	else
	  cout<<" Element "<<search<< " is found at position --> "<<j;  
}