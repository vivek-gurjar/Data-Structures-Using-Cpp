#include<iostream>
using namespace std;

int min(int arr[], int num)
{
    int min;
    min=arr[0];
    for(int i=0; i<num; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            
        }
      
    }

    return min;
}

int max(int arr[], int num)
{
    int max;
    max=arr[0];
    for(int i=0; i<num; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            
        }
        
    }
    return max;
}

int main()
{
    int i,arr[20],num;
    cout<<" Enter the size of array --> ";
    cin>>num;

    for(i=0; i<num; i++)
    {
        cout<<" Enter the index "<< i <<" value of array --> ";
        cin>>arr[i];
    }

    cout<<" Min Value in Array is --> "<<min(arr,num)<<endl;
    cout<<" Max Value in Array is --> "<<max(arr,num)<<endl;
    
}

//another approch
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int i,num,arr[20];
    cout<<" Enter the size of array --> ";
    cin>>num;

    for(i=0; i<num; i++)
    {
        cout<< " Enter the index " << i << " Value of array -->";
        cin>>arr[i]; 
    }

    sort(arr,arr+num);

    cout<< " min "<<arr[0];
    cout<< " max "<<arr[num-1];
}

*/