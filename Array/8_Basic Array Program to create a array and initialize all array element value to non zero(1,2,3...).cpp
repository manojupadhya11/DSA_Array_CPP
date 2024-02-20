//Basic Array Program to initialize entire array value to 1 

#include<iostream>
using namespace std;

#define max 10

int main()
{
    int array[max];
    for(int i = 0; i<max-1; i++){
        array[i] = 5;
    }
    //displaying the array
    for(int i=0; i< max-1; i++){
        cout<<"The element present at position array["<<i<<"] is :"<<array[i]<<endl;
    }
}
