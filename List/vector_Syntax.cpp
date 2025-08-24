#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> numb ={1,2,3,1,2};
    cout << numb.size() << endl;
    cout << numb.capacity() << endl;
    
    cout << numb.size() <<  "new size" << endl;
    cout << numb.capacity() << "new capaciyy" << endl;
    int uniqu = 0;
    // Remove duplicates using one loop

    for(int nun : numb){
        uniqu = uniqu ^ nun;

    }
    cout << uniqu << " ubique ";
    
}
