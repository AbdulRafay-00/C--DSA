#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
     list<int> number = {11,12,13,14};
    cout << "kool" << endl;

    cout << "kool" << endl;
    cout << "OUTPUT OF FOR LOOP " << endl;
    // Loop 
    for (int i = 0; i < 9; i++)
    {
        if(i%2==0){

            cout << i << endl;
        }
        /* code */
    }
    cout << "OUTPUT FOR FOR-IN LOOP" << endl;

    // for in loop
    cout<< "Complete list" << endl;
    for(int i : number){
        // PRINT EVEN NUMBERS
            cout<< i << endl;
    }
    
    cout << "OUTPUT FOR FOR-IN LOOP EVEN NUMBER" << endl;

    // for in loop
    for(int i : number){
        // PRINT EVEN NUMBERS
        if(i % 2 == 0){

            cout<< i << endl;
        }
    }

        cout << "OUTPUT FOR FOR-IN LOOP ODD NUMBER" << endl;

    // for in loop
    for(int i : number){
        // PRINT EVEN NUMBERS
        if(i%2 != 0){

            cout<< i << endl;
        }
    }
}
