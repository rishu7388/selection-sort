#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,6,3,9,4};
    int small=0,pos;
    int temp=0;
    for(int i=0;i<5;i++)
    {
        small=arr[i];
        pos=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
    cout<<"array after sorting ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}