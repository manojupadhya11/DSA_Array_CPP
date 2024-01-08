// Program Insert an element to given position of an array

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
    //initialize array
    int student[m][n];
    //insert array elements
    for(i = 0; i <m; i++){
        for(j = 0; j<n; j++){
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
    
//Inserting array at the given position of 2D array
    int new_element;
    cout<<"Enter the value for new element to insert at given position of array"<<endl;
    cin>>new_element;
    cout<<"Enter the position value where we want to insert new element"<<endl;
    int x,y;
    cin>>x;
    cin>>y;
    for(i = 0; i <m; i++){
        for(j = 0; j<n; j++){
            if(i == x && j ==y){
                student[i][j] = new_element;   
            }
            else
            {
                continue;
            }
        }  
    }
    

//displaying the array contents after adding element at last position
    cout<<"The Values Present in array are"<<endl;
    for(int i = 0; i < m; i++){
        for(int  j = 0; j <n; j++){
            cout<<"The value Present at student["<<i<<"]["<<j<<"] is "<<student[i][j]<<endl;
        }
    }

}