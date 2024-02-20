//Program to Sort Array Using Bubble Sort

#include<iostream>
using namespace std;

//function used to swap elements of array
void swap(int *var1, int *var2){
    int temp = *var1;
    *var1  = *var2;
    *var2 = temp;
    
}

//bubble sort programs
void bubblesort(int arr[], int n){
    for(int i = 0; i< n-1; i++){
        for(int j = 0; j< n-i-1;j++){
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//function to display contents of an array
void display(int arr[], int size){
    
    for(int i = 0; i <= size-1; i++){
        cout<<arr[i]<<"\t";
    }
    
    
}

int main(){
    
    int arr[5] = {10,34,1,3,5};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The Value Present in array before Sorting array are "<<endl;
    display(arr, size);
    
    bubblesort(arr, size);
    cout<<endl;
    cout<<"The Soretd array After Sorting the array using Bubble Sort Technique"<<endl;
    display(arr,size);
    
    
}