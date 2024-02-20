//Program for Search Element Present in an array Using Linear Search Algorithm

#include<iostream>
using namespace std;
#define max 100


//function for dispalying array
void display(int size, int student[]){
    for(int i = 0; i<size; i++){
        cout<<"The value at postion student["<<i<<"] is: "<<student[i]<<endl;
    }
    
}

//user defined function
int linearsearch(int size, int student[], int item){
    for(int i = 0; i <size; i++){
        if(student[i] == item){
            cout<<"The searching value "<<item<<" Present at student["<<i<<"] postion"<<endl;
        }
           
    }
    cout<<"The searched element "<<item<<" is not found in the array"<<endl;
    return 0;
}


//driver function or main function
int main(){
    int size, item;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int student[max];
    int num;
    for(int i=0; i<size; i++){
        cout<<"Enter the value for student["<<i<<"]"<<endl;
        cin>>num;
        student[i] = num;
    }
    display(size, student);
    cout<<endl;
    cout<<"Enter the value to be searched in the Array:"<<endl;
    cin>>item;
    linearsearch(size, student, item);
    return 0;
}
