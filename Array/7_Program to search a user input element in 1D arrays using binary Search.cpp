//Program to search a given element in the 1d array USing Binary Search Algorithm

#include<iostream>

using namespace std;
#define max 100
int binarySearch(int sorting_array[], int item, int left, int right){
    if(right>=left){
        int mid = left+right/2;
        if(sorting_array[mid] == item){
            cout<<"The Searched element "<<item<<" found at sorting_array["<<mid<<"] and at position "<<mid+1<<endl;
        }
        if(sorting_array[mid]>item){
            return binarySearch(sorting_array, item, left, mid-1);
        }
        else
        {
            return binarySearch(sorting_array, item, mid+1, right);
        }
        cout<<"The element"<<item<<"is not found "<<endl;
    }
    else{
        return -1;
    }
}

int main(){
    int i,num,size, item;
    
    int sorting_array[max];
    cout<<"Enter the Size of array"<<endl;
    cin>>size;
    cout<<"Enter the element in sorted order"<<endl;
    for(int i = 0; i<=size-1;i++){
        cout<<"Enter the element for sorting_array["<<i<<"] position: ";
        cin>>num;
        sorting_array[i] = num;
    }

    //displaying the array elements
    for(int i = 0; i<=size-1; i++){
        cout<<"The element at sorting_array["<<i<<"] is "<<sorting_array[i]<<endl;
    }
    
    
    cout<<"Enter the element you want to search in the array"<<endl;
    cin>>item;
    //calling binary search function
    int left = 0; 
    int right = size-1;
    binarySearch(sorting_array, item, left, right);
}
