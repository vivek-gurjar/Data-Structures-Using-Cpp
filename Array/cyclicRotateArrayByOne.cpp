#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, arr[20];
    cout<<" Enter the size of array --> ";
    cin>>num;
    
    for(int i=0; i<num; i++)
    {
        cout<<" Enter the value of "<< i <<" index --> ";
        cin>>arr[i]; 
    }
    
    int temp = arr[num-1];
    for(int i=num-1; i>0; i--)
        arr[i]=arr[i-1];
    arr[0]=temp;

    cout<<" Result is --> ";
    for(int i=0; i<num; i++)
        cout<<" "<<arr[i];
    
}