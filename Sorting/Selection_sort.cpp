#include <iostream> 
#include <string> 
using namespace std; 
  

void SelectionSort(int *array, int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        int temp = array[i];
        for (int j = (i + 1); j < size; j++) {
            if (array[j] <= array[i]) {
                swap(array[j], array[i]);
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
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

    cout << "The resulting array is: " << endl;

    SelectionSort( myArray, size, target);
    


    return 0;
} 

