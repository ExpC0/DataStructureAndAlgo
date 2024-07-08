#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;

}

void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
}

//Bubble Sort

void bubbleSort(int arr[], int n) {


    for (int i = 0; i < n - 1; i++) //Number of iteration is n-1
    {

        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

        }

    }
}






//selection sort

void selection(int arr[], int n) {

    for (int i = 0; i < n - 1; i++) { //Number of iteration is n-1
        for (int j = i + 1; j < n; j++) {

            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);

        }

    }
}

void insert_in_array(int arr[], int n) {

    int data, position;
    cout << "at which index position you want to insert: ";
    cin>>position;
    cout << "Enter data to insert: ";
    cin>>data;
    for (int i = n - 1; i >= position; i--) {

        arr[i + 1] = arr[i];
    }
    arr[position] = data;

}

void delete_item(int *arr, int n) {


    int data;
    cout << "which element you want to delete: ";
    cin>>data;
    for (int i = 0; i < n; i++) {

        if (arr[i] == data) {

            for (int j = i; j < n; j++) {

                arr[j] = arr[j + 1];
            }
            break;

        }
    }
}

void insertionSort(int *arr, int n) {

    for (int i = 1; i < n; i++) {

        int value = arr[i], indx = i; //indx in sorted list to insert value

        for (int j = i - 1; j >= 0; j--) {

            if (value < arr[j]) {
                arr[j + 1] = arr[j];
                indx--;
            }
        }
        arr[indx] = value;
    }
}

void insertionSort2(int *arr, int n) {


    for (int i = 1; i < n; i++) {
        int value = arr[i], index = i, j = i - 1;
        while (j >= 0 && arr[j] > value) {
            arr[j + 1] = arr[j];
            index--;
            j--;
        }

        arr[index] = value;
    }
}

int main() {

    int arr[50], n;

    cout << "How many data you want to input: ";
    cin>>n;
    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    //bubbleSort(arr, n);
    //traverse(arr,n);
    //selection(arr,n);
    //traverse(arr,n);
    insertionSort2(arr, n);
    traverse(arr, n);

    //insert_in_array(arr, n);
    //traverse(arr,n+1);
    //delete_item(arr,n);
    //traverse(arr, n-1);
    return 0;



}
