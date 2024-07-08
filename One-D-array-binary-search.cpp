//binary_search_on_array

#include<bits/stdc++.h>
using namespace std;

void traverse(int *arr,int n){
    cout<<"You entered: ";
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int BinarySearch(int *arr,int n,int x){
    
    int start,end,mid;
    
    start= 0;
    end = n-1;
        
    while(start<=end){
        
        mid = (start+end)/2;
        
        if(arr[mid]==x){
            cout<<"Index: ";
            return mid;
        }
        else if(x<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
     
            
    }
    return -1;
}
int main(){
    
    
    int  n;
    cout<<"how many data you want to input: ";
    cin>>n;
            
    cout<<"Enter data: ";
    int arr[n];
    for(int i= 0;i<n;i++){
        
        cin>>arr[i];
    }
    traverse(arr,n);
    
    cout<<BinarySearch(arr,n,11);
}
