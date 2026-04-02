#include<iostream>
using namespace std;
int main()
{
    int size,i,a;
    cout<<"Enter the size of the array: ";
    cin>> size;
    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>> arr[i];
    }
    int num,index;
    index= -1;
    cout<<"Enter the number: ";
    cin>>num;
    for(i=0;i<size;i++)
    {
        if(num == arr[i])
        {
            index=i;
            break;
        }
    }
    cout<< index;
}
