#include<iostream>
using namespace std;
int binary_search(int A[],int l,int h,int key){
    int mid,pos=-1;
   
    while(l<=h){
         mid=(l+h)/2;
    if(mid==key){
        pos=mid;
    return pos;}
 else if(A[mid]<key)
 l=mid+1;
 else
 h=mid-1;
 }
 }
int main(){
    int A[]={2,3,7,9,13,17};
    int key;
    cout<<"Enter the element you want to search:";
    cin>>key;
    int h;
    
    h=(sizeof(A))/sizeof(A[0]);
   cout<<"Element Found at position:"<<binary_search(A,0,h,key);
   if(binary_search(A,0,h,key)==-1)
   cout<<"Element is not found";
    

 
return 0;
}