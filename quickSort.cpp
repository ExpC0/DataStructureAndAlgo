#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
   
}
int partition(int *arr,int start,int end){
    
    int pivot = arr[end];
     int index = start;
    
    for(int i=start;i<=end-1;i++){
       
        
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[index]);
            index++;
        }
    }
    
    swap(arr[index],arr[end]);
    return index;
}

void quickSort(int *arr,int start,int end){
    
    if(start<end){
    
    
    int piv_index = partition(arr,start,end);
    
    quickSort(arr,start,piv_index-1);
    quickSort(arr,piv_index+1,end);
}
}

int main(){
    
    int arr[10]={2,5,3,7,0,1,6,9,2,7};
    quickSort(arr,0,9);
    for(int i=0;i<=9;i++)
        cout<<arr[i]<<" ";
           
}
