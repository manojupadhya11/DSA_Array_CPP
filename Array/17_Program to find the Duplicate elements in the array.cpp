//Program to find the duplicates present in the array

#include<iostream>

using namespace std;
#define max 100
int duplicatearray(int *arr, int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<size; i++){
        ans = ans^i;
    }
    return ans;
    
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
    
    //Function call
    int ans = duplicatearray(arr,size);
    cout<<"The Duplicate Element in array is: "<<ans<<endl;
 
}
