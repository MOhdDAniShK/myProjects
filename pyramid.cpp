#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter the no. of Rows in Pyramid:";
    cin>> rows;
    for(int i = 0; i < rows; i++)
    {
        for(int j  =0;j < i;j++)
        {
            cout<<" ";
        }
        for(int k = 0;k <(2*(rows-i)-1);k++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
}