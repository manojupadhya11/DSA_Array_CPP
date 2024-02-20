// Program for Basic array functionality(initializing an Array, Entering Values to an Array and Displaying Values of Array)

#include<iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter array Size" << endl;
    cin>>n;
//creating and inserting values to the array
    int student[n] = {};
    for(int i = 0; i < n; i ++){
        int num = 0;
        cout<<"Enter the value for student["<<i<<"] "<<endl;
        cin>>num;
        student[i] = num;
    }
//displaying the array contents
    cout<<"The Values Present in array are"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"The value Present at student["<<i<<"] is "<<student[i]<<endl;
    }
}
