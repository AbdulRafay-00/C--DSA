#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // map will automaticly sort the value on the basis of key
    // it has high time complexcity bec it sort and then gives the answer
    map<int, string> student = {
        {3, "Jon"},
        {2, "atima"}
    };
    // how to add value 
    student[1] = "Rafay";
    student.insert({4 , "haris"});
    // how to remove the value from map
    student.erase(1);
    
    for(auto i : student){
        cout<<"key: " <<i.first<< " value: "<< i.second<<endl;
    }

    cout << student[1]; // access value with key 1

    // it is unordered_map it will print your walue in style you have added it
    // include <unordered_map>
    // better time complexity than map

    map<int, string> uno = {
        {3, "shafiq"},
        {2, "shar"}
    };
    // how to add value 
    uno[1] = "Rafay";
    uno.insert({4 , "meen"});
    // how to remove the value from unordered_map
    uno.erase(1);
    
    for(auto i : uno){
        cout<<"key: " <<i.first<< " value: "<< i.second<<endl;
    }

    cout << uno[1]; // access value with key 1

}
