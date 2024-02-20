//Basic Array Program to reverse the entire array(Reverse array program) without using Swap() built in function
//consider array a[5] = {1,2,3,4,5} and write program to make the array as array = {5,4,3,2,1}
#include<iostream>
using namespace std;

#define max 100
void reverse(int example_array[], int size){
    
    for(int i = 0; i <size -1; i++){
        int temp = example_array[i];
        example_array[i] = example_array[size-i-1];
        example_array[size-i-1] = temp;
    }
}
int main()
{
    int example_array[max];
    int sum, i,size,temp;
    //Initializing array Values.
    cout<<"Enter the Size of array"<<endl;
    cin>>size;
    for(int i = 0; i<=size-1;i++){
        cout<<"Enter the element for sorting_array["<<i<<"] position: ";
        cin>>example_array[i];
    }
    //displaying the array elements
    cout<<endl;
    cout<<"Printing array values before reversing the array"<<endl;
    for(int i = 0; i<=size-1; i++){
        cout<<"The element at example_array["<<i<<"] is "<<example_array[i]<<endl;
    }
    
    reverse(example_array, size);
    //displaying the array elements after reverse
    cout<<endl;
    for(int i = 0; i<=size-1; i++){
        cout<<"The element at example_array["<<i<<"] is "<<example_array[i]<<endl;
    }
}
