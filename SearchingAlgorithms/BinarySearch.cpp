#include <bits/stdc++.h> //standard library for using sort() function in this array at line 47
using namespace std;

int BinarySearch(int arr[], int num, int search)
{
    int low=0,high=num-1, mid;

    while (low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==search)
        {
            return mid;    
        }

        else if (arr[mid] > search)
        {
           high=mid-1;
        }

        else
        {
            low=mid+1;
        }
        
    }
    return -1;
}

int main ()
{
int num,i,j,arr[20],search;

   cout<<" Enter the size of array --> ";
   cin>>num;

   cout<<" Enter the searching element --> ";
   cin>>search;

//for loop for takiing input in array
for(i=0; i<num; i++)
   {
       cout<<" Enter the index "<< i <<" value of array --> ";
       cin>>arr[i]; 
    } 

sort(arr,arr+num); //for sorting array

//for loop for print sorted array 
cout<<" your input digits agter sorting in array is --> ";
for(i=0; i<num; i++)
   {
       cout<<"  "<<arr[i]; 
    } 
cout<<"\n\n";

 j=BinarySearch(arr,num,search);

 if (j==-1)
 {
     cout<< search << " Not present in array ";
 }

 else
 {
     cout<< search << " Present in array at position --> "<< j;
 }
 
} 
