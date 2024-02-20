//Program to find largest element in an array

#include<iostream>

using namespace std;
#define max 100

int main(){
    int i,num,size;
    
    int example_array[max];
    cout<<"Enter the Size of array"<<endl;
    cin>>size;
    for(int i = 0; i<=size-1;i++){
        cout<<"Enter the element for sorting_array["<<i<<"] position: ";
        cin>>num;
        example_array[i] = num;
    }

    //displaying the array elements
    cout<<endl;
    for(int i = 0; i<=size-1; i++){
        cout<<"The element at sorting_array["<<i<<"] is "<<example_array[i]<<endl;
    }
    
    //Displaying smallest element of array
    cout<<endl;
    int largest = example_array[0];
    for( int i =0; i<=size-1; i++){
        if(example_array[i]>largest)
        {
            largest = example_array[i];
        }
    }

    cout<<"The largest element present in array is "<<largest<<endl;
    
    
}
