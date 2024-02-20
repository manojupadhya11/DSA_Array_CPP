// Array Program to SWAP the elements Present in Array

#include<iostream>
using namespace std;
#define max 100
void arrayswap(int arr[], int size){
    for(int i = 0; i<=size-1; i= i+2){
        if(i+1<size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1]=temp;
        }
    }    
}
int main(){
    
    int arr[max];
    int i,size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    for(int i = 0; i <=size-1; i++){
        cout<<"Enter element for arr["<<i<<"] :"<<endl;
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Element Present in array before swapping"<<endl;
    for(int i = 0; i <=size-1; i++){
        cout<<"the element at arr["<<i<<"] is:"<<arr[i]<<endl;
    }
    
    //Swapping
    arrayswap(arr,size);
    
    //displaying swapped arra
    cout<<endl;
    cout<<"Element Present in array after Swapping"<<endl;
    for(int i = 0; i <=size-1; i++){
        cout<<"the element at arr["<<i<<"] is:"<<arr[i]<<endl;
    }
}
