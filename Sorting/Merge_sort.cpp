#include <iostream> 
#include <string> 
using namespace std; 
  

void MergeSort(int *array, int size) {
    if (size > 1) {
        int mid = size / 2;
        int n1 = mid;
        int n2 = size - mid;
        
        int left[n1];
        int right[n2];


        for (int i = 0; i < n1; i++){
            left[i] = array[i];
        }


        for (int j = 0; j < n2; j++){
            right[j] = array[n1+j];
        }


        MergeSort(left, n1);
        MergeSort(right, n2);

        int i = 0;
        int j = 0;
        int k = 0;

        while (i < n1 && j < n2){
            if (left[i] < right[j]) {
                array[k] = left[i];
                i++;
            } else {
                array[k] = right[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            array[k] = left[i];
            i++;
            k++;
        }

        while (j < n2) {
            array[k] = right[j];
            j++;
            k++;
        }
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

    MergeSort( myArray, size );
    
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
} 

