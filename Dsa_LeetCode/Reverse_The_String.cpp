#include <iostream>
#include <algorithm> 
#include <vector> 
#include <sstream>

using namespace std;
int main(){
    string str = "pool is filled";
    vector <string> reverse ={};
    string word;
    stringstream str2(str);
    cout<< "before:"<<endl;

   while(str2 >> word){
    reverse.push_back(word);
    

       cout <<word<<",";
}
    cout<<endl << "after:"<<endl;
    for(int i = reverse.size()-1;  i >= 0; i--){
        cout<<reverse[i]<<" ";
    }
}