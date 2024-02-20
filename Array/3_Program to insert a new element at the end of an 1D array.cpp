//Program to insert element at the last posiiton

#include<iostream>

using namespace std;

int main(){
    
    int size;
    cout<<"Enter Size of array"<<endl;
    cin>>size;
    //initializing an array
    int student[size];
    //inserting elements to array    
    for(int i = 0; i<size-1; i++){
        int num;
        cout<<"Enter value for a["<<i<<"]"<<endl;
        cin>>num;
        student[i] = num;
    }
    //Displaying values of array
    for(int i=0; i <size-1; i++){
        cout<<"The elements present in student["<<i<<"] is: "<<student[i]<<endl;
    }
    
    //Entering new element at the end
    int new_element;
    cout<<"Input the value to insert the end of array"<<endl;
    cin>>new_element;
    student[size-1] = new_element;
    
    //Displaying values of array after inserting element at the rear end
    for(int i=0; i <size; i++){
        cout<<"The elements present in student["<<i<<"] is: "<<student[i]<<endl;
    }
    
    
    
}
