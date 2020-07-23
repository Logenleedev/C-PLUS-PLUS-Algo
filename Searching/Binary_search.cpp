#include <iostream> 
#include <string> 
using namespace std; 
  

int binarySearch(int arr[], int l, int r, int target) {

    if (r >= l){
        int mid = (l+r)/2;

        if (arr[mid] == target ) {
            return mid;
        } else {
            if (arr[mid] < target) {
                l = mid;
                return binarySearch(arr, l, r, target);
            } else {
                r = mid;
                return binarySearch(arr, l, r, target);
            }
        }
    }

    return -1;
}
  
int main() 
{ 
    int size, n, target;
    
    cout << "Enter the size of the array: \n";
    cin >> size;
    cout << "Please enter your array: " << endl;
    int *myArray = new int[n];
    for (int i = 0; i < size; i++){
        cin >> n;
        myArray[i] = n;
    }

    cout << "Please enter your search target: \n";
    cin >> target;

    int result = binarySearch( myArray, 0, 7, target);
    
    cout << "The index of the target element is: " << result << endl;


    return 0;
} 

