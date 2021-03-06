#include <iostream> 
#include <string> 
using namespace std; 
  

void BubbleSort(int *array, int size, int target) {
    for ( int i = size - 1; i > 0; i-- ) {
      for ( int j = 0; j < i; j++ ) {
          if (array[j] > array[j+1]) {
              int temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
          }
      }
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

    BubbleSort( myArray, size, target);
    


    return 0;
} 

