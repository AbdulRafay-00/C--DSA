#include <bits/stdc++.h>
using namespace std;
// syntax of 2D list and how to print
int main() {
int numbers[] = {1,2,3,4,5};
int j = 4;
bool check = true;
// Reverse The LIst
for(int i=0  ; i < j ;){
    if(check){
        cout << "in func";
        cout << numbers[i] << ",";
        cout << numbers[j] << endl;
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers [j] = temp;
    }
    i++;
    j--;

}

for(int i : numbers){
    cout << i;
}
}