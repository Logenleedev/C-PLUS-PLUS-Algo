#include <iostream> 
#include <string> 
using namespace std; 
  
int *stack;
int stack_idx=0, stack_size;
  
void push(int x){
    if (stack_idx == stack_size){
        cout << "Stackoverflow" << endl;
    } else {
        stack[stack_idx++] = x;
        cout << "Added!" << endl;
    }
}

void pop() {
    if (stack_idx == 0){
        cout << "Sorry! Stack is underflow" << endl;
    } else {
        cout << "Delete element: " << stack[--stack_idx] << endl;
    }
}

void print_stack() {
    for (int i = 0; i < stack_idx; i++) {
        cout << stack[i] << " ";
    }
}

void topmost() {    
    cout << "The top element is: " << stack[stack_idx-1] << endl;
}


int main() 
{ 
    int x;
    cout << "Please enter the size of the stack: " << endl;
    cin >> x;
    stack_size = x; 
    stack = new int[stack_size];
    int ch;
    do {
        cout << endl;
        cout << "**********" << endl;
        cout << "0: Exit" << endl;
        cout << "1: Push" << endl;
        cout << "2: Pop" << endl;
        cout << "3: Print" << endl;
        cout << "4: Print the top most element" << endl;
        cout << "**********" << endl;
        cin >> ch;
        if (ch == 1){
            cout << "Enter the integer you want to insert: \n";
            int x;
            cin >> x; 
            push(x);
        } else if (ch == 2){
            pop();
        } else if (ch == 3) {
            print_stack();
        } else if (ch == 4) {
            topmost();
        }
    } while (ch != 0);




    return 0;
} 

