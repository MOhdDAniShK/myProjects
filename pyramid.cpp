#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of Rows in Pyramid:";
    cin>>n;
    for(int i =n ;i>=1;i--)
    {
        for(int k = 1; k<= n-i;k++)
        {
            cout<<" ";
        }
        for (int j = 1;j<= i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0 ;
}