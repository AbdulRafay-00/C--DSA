#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> numbers = {2,4,6,8,10};
    numbers.push_front(12);//pust at starting 
    numbers.push_back (90);// push at last
    int index = 3;
    int value = 69;
    // steps of how to insert value at a specific index
    auto itt =numbers.begin(); // set pointer on index 0
    advance(itt, 2); // move two steps at index 2
    cout << *itt<<"index"<<endl;
    numbers.insert(itt,9000);
    cout << "operation";
    numbers.pop_front();//  remove value from starting
    numbers.pop_back();// remove value from endind
    numbers.erase(itt);
    for(int i : numbers){
        cout << i << ",";
    }
    for(int i = 0; i < numbers.size(); i++ ){
        
    }
        

}