#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int inp,round,n=1;
    cout<<"enter no. of round you want play:";
    cin>>round;

    while (n<=round)
    {
        // Taking User Input.

        cout<<"Select:\n--> 0 FOR Stone\n--> 1 FOR Paper\n--> 2 FOR Scissor\nWhat's your choice: ";
        cin>>inp;
        cout<<endl;

        //Checking For the validity of the Input.

        if(inp > 2){
            cout<<"Invalid Input.";
            return 0;
        }

        //selecting the outcome.

        int ran = (rand()%3);
        cout<<"Computer's choice is: "<<ran<<"\n\n";
        string mat[3][3]= {{"DRAW","LOST","WON" },
                           {"WON" ,"DRAW","LOST"},
                           {"LOST","WON" ,"DRAW"}};

        // Printing the outcome.

        cout<<"-------- YOU "<< mat[inp][ran]<<" THIS ROUNDs --------"<<"\n\n";
        n +=1;
    }
    
}
