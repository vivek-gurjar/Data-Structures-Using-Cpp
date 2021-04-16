#include<iostream>
using namespace std;

int avgFunction(int arr[],int num)
{ 
    int avg,sum=0;
    for(int i=0;i<num;i++)
    {
       sum=sum+arr[i];
    }
    avg=sum/num;
    return avg;

}

int main() 
{
  int arr[20],i,num;

  cout<<" Enter the size of array --> ";
  cin>>num;

  for(i=0;i<num;i++)
  {
      cout<<" Enter the Index " << i <<" value of array --> ";
      cin>>arr[i];
      
  }  

  cout<<" Average of array elements is --> " <<avgFunction(arr,num);
} 
