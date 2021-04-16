#include<iostream>
using namespace std;
//function for swapping
int ReverseArray(int arr[],int num)
{
   int start=0,end=num-1,temp;
   while (start<=end)
   {
       temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
   }
   
}
//function for print array
int PrintFunction(int arr[],int num)
{
    for(int i=0; i<num; i++)
    {
        cout<<" "<< arr[i];
    }
}

int main()
{
    int arr[30],num;
    cout<<" Enter the size of array --> ";
    cin>>num;
    
    for(int i=0; i<num; i++)
    {
        cout<<" Enter the index " << i <<  " valeue of array --> ";
        cin>>arr[i];
        
        
    }

   cout<<" \n Orignal Array is --> ";
   PrintFunction(arr,num); //orignal array print

   cout<<endl;ReverseArray(arr,num); //swapping function call

   cout<<" Reverse Array is --> ";
   PrintFunction(arr,num); //array after print
}