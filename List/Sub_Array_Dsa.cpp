//sum of the maximun sub array from list
#include <iostream>
#include <vector>
using  namespace std; 
int main(){
    vector <int> vec ={-6,2,3,4,5};
    int mac_sum = 0;
    for(int i = 0 ; i<vec.size(); i++){
        int sum = 0;

        for (int j = i; j < vec.size(); j++)
        {
            sum += vec[j];
            mac_sum = max(sum , mac_sum);
        }
        
    } 
    cout << mac_sum << " :max sub set";
}