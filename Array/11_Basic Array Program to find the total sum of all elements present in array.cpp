//Basic Array Program to find the total sum if all elements present in array

#include<iostream>
using namespace std;

#define max 100

int main()
{
    int example_array[max];
    int sum, i,size;
    cout<<"Enter the Size of array"<<endl;
    cin>>size;
    for(int i = 0; i<=size-1;i++){
        cout<<"Enter the element for sorting_array["<<i<<"] position: ";
        cin>>example_array[i];
    }
    //displaying the array elements
    cout<<endl;
    for(int i = 0; i<=size-1; i++){
        cout<<"The element at example_array["<<i<<"] is "<<example_array[i]<<endl;
    }
    
    //Calu;ating the sum
    cout<<endl;
    sum = 0;
    for(int i = 0; i<=size-1; i++){
        sum = sum +  example_array[i];
    }
    
    cout<<"The Total sum of all element present in array is :"<<sum<<endl;
    }
