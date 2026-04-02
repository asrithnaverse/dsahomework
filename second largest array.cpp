#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,i,secondlargest;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int num,index;
    num=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(arr[i]>num)
        {
            num=arr[i];
            index=i;
        }
    }
    secondlargest=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(arr[i]!=num && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;
}
