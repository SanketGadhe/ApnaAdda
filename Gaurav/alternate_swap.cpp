#include<iostream>
using namespace std;
int alternate_swap(int arr[5],int size)
{
    int start=0;
    int end=start+1;
    int temp=0;
    while((start<size-1))
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start=end+1;
        end=start+1;
    }
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
        
}
int main()
{
    
    int arr[5]={1,4,3,5,3};
    alternate_swap(arr,5);
    return 0;
}