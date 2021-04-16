#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,arr[20];
    cout<<" Enter the size of array --> ";
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cout<<" Enter the value in array --> ";
        cin>>arr[i];
    }
    int i=-1,pivot=0;
    for(int j=0; j<num; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    cout<<" negitive moved to one side --> ";
    for(int i=0; i<num; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}