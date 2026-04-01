#include<iostream>
using namespace std;
int main()
{
    int arr[18],i;
    for(i=0;i<18;i++)
    {
        cin>>arr[i];
    }
    int sum=0,avg;
    for(i=0;i<18;i++)
    {
        sum=sum+arr[i];
    }
    avg=(sum)/18;
    cout<<avg;
}
