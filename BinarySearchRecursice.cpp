#include<iostream>
using namespace std;

int RBinarySearch(int A[],int l,int h,int key){
    int mid;
    if (l==h) 
    {
        if (A[l]==key) 
            return 1;
        else
            return 0;        
    }
    else{
        mid=(l+h)/2;
        if (key<A[mid])
            return RBinarySearch(A,l,mid-1,key);
        else if(key>A[mid])
            return RBinarySearch(A,mid+1,h,key);
        else
            return mid; 
    }
    
}
int main(){
    int key,n;
    int A[]={1,2,3,4,5,6,7,8,9};
    n=sizeof(A)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    
    cout<<"\nenter the key to search for"<<endl;
    cin>>key;
    int index=RBinarySearch(A,0,n-1,key);
    if (index)
    {
        cout<<key<<" is present in array at index"<<index<<endl;
    }
    else
    {
        cout<<key<<" is not present in array"<<endl;
    }
    
    

}