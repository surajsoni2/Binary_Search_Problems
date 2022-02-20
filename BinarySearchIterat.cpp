#include<iostream>
using namespace std;

int IBS(int arr[],int n,int key){
    
    int s=0;
    int e=n-1;
    while(s<=e){
    int mid = (s+e)/2;
    
        if(key==arr[mid])
            return mid;
        else if(key>arr[mid])
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
    
}

int main(){
    int arr[] = {1};
    cout<<"enter elemnt from 1-15 tp be search";
    int key = 0;
    cin>>key;
    int x=IBS(arr,1,key);
    cout<<x;
}