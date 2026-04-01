#include<iostream>
using namespace std;
int main()
{
    int arr[20], i;
    for(i=0;i<20;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<20;i++)
    {
        sum=sum+arr[i];
    }
    cout<< sum;
    
}
