#include <iostream> 
#include <string> 
#include <vector>


using namespace std; 

/*
Index:   0 1 2 3 4 5 6 7 8
Element: 1 2 3 4 5 6 7 8 9

*/


int main() {

    vector<int> v;
    for(int i = 1; i < 10; i++){
        v.push_back(i);
    }

    cout << v.front() << endl;
    cout << v.at(2) << endl;

    return 0;
}