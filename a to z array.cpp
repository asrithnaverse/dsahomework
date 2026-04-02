#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    char arr[size];
    char ch=97;
    for(i=0;i<size;i++)
    {
          arr[i]=ch;
          ch+=1;
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
