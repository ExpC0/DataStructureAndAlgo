//selection sort
//time complexities O(n^2)


#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    
    
    int tmp;
    tmp = *a;
    *b = *a;
    *a = tmp;
}

void selectionSort(int *arr,int n){
    
    
    for(int i=0;i<n-1;i++){
        
        for(int j = i+1;j<=n-1;j++){
            
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
            
            
       
}


int main(){
    
    
    int arr[10]={3,4,5,1,0,10,5,11,6,9};
    selectionSort(arr,(sizeof(arr)/sizeof(arr[0])));
    
    for(int i =0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

//another pratise

/*
 #include<bits/stdc++.h>
using namespace std;


void SelectionSort(int A[],int n){

for (int i = 0; i<=n-2;i++)
for ( int j = i+1; j<=n-1; j++)
{
if ( A[i] > A[j])
swap (A[i],A[j]);
}
}

int main(){

int a[] = {23,3,354,32,2,1,12354};
SelectionSort(a,7);

for ( int i = 0; i<= 6; i++)
cout << a[i]<<endl;

}
*/


/* 
#include<bits/stdc++.h>
using namespace std;


void SelectionSort(int A[],int n){

int i,j,iMin;

for ( i=0;i<=n-2;i++)
{
iMin = i;
for ( j = i+1;j<=n-1;j++)
{
if ( A[j]<A[iMin])
{

iMin = j;

}
}
int temp = A[iMin];
A[iMin]= A[i];
A[i]=temp;


}
}

int main(){

int a[] = {23,3,354,32,2,1,12354};
SelectionSort(a,7);

for ( int i = 0; i<= 6; i++)
cout << a[i]<<endl;

}
*/


