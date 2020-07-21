#include <iostream> 
#include <string> 
using namespace std; 
  

int LinearSearch(int *array, int size, int target) {
    for (int i = 0; i < size; i++){
        if (array[i] == target){
            return i;
        }
    }

    return -1;
}
  
int main() 
{ 
    int size, n, target;
    
    cout << "Enter the size of the array: \n";
    cin >> size;

    int *myArray = new int[n];
    for (int i = 0; i < size; i++){
        cin >> n;
        myArray[i] = n;
    }

    cout << "Please enter your search target: \n";
    cin >> target;

    int result = LinearSearch( myArray, size, target);
    
    cout << "The index of the target element is: " << result << endl;


    return 0;
} 

