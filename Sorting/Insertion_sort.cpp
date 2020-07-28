#include <iostream> 
#include <string> 
using namespace std; 
  

void InsertionSort(int *array, int size, int target) {
    for ( int i = 0; i < size; i++ ) {
        int j = i - 1;
        int key = array[i];
        while ((j >= 0) && array[j]>=key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }

    for ( int i = 0; i < size; i++ ) {
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

    InsertionSort( myArray, size, target);
    


    return 0;
} 

