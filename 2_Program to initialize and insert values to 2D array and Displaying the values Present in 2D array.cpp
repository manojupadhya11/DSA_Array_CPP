// Program for Basic array functionality(initializing an Array, Entering Values to an Array and Displaying Values of Array) - 2Dimensional Array

#include<iostream>
using namespace std;

int main()
{
    
    int num,i,j,m,n;
    //initialize array size
    cout<<"Enter array size value m" << endl;
    cin>>m;
    cout<<"Enter array size value n"<<endl;
    cin>>n;
    int student[m][n];
    for(int i = 0; i < m; i ++){
        for(int j = 0; j <n; j++){
            int num = 0;
            cout<<"Enter the value for student["<<i<<"]["<<j<<"]"<<endl;
            cin>>num;
            student[i][j] = num;
        }

    }
//displaying the array contents
    cout<<"The Values Present in array are"<<endl;
    for(int i = 0; i < m; i++){
        for(int  j = 0; j <n; j++){
            cout<<"The value Present at student["<<i<<"]["<<j<<"] is "<<student[i][j]<<endl;
        }
    }
}