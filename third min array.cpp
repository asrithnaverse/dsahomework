#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,i;
    cout<<"Enter the size of th array: ";
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int num,thirdmin,secondmin;
    num= INT_MAX;
    for(i=0;i<size;i++)
    {
        if(arr[i]< num)
        {
            num=arr[i];
        }
    }
    secondmin=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(arr[i]!=num && arr[i]<secondmin)
        {
            secondmin=arr[i];
        }
    }
    thirdmin=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(arr[i]!=num && arr[i]!=secondmin && arr[i]< thirdmin)
        {
            thirdmin=arr[i];
        }
    }
    cout<<thirdmin;
}
