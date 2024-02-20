// Array Program to find unique elements in the array

#include<iostream>
using namespace std;
#define max 100
void uniquearray(int *arr, int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
    }  
    cout<<"The Unique Element in array is: "<<ans<<endl;
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
    uniquearray(arr,size);
 
}
