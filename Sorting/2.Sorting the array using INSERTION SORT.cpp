//Program to sort the given array using Insertion sort
#include<iostream>

using namespace std;

void display(int arr[], int size){
    
    int i;
    for(i = 0; i <= size-1; i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    
    int size;
    int arr[] = {10,20,30,40,50,34,25,67,89,76};
    size =  sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Insertion Sort"<<endl;
    display(arr, size);
    
    int i, key, j;
    for(i = 1; i<size;i++){
        key = arr[i];
        j = i -1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    cout<<endl<<"Sorted Array After Insertion Sort"<<endl;

    display(arr, size);
}