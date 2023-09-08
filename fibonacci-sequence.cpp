#include <iostream>

using namespace std;

int main(){
    int size;
    cout << "How far do you want to go?: " << endl;
    cin >> size;
    
    int numbers[size] = {};
    numbers[0] = 1;
    numbers[1] = 1;
    
    // calculate function
    for (int i = 2; i <= size; i++){
        numbers[i] = (numbers[i-1] + numbers[i-2]);
    }

    // printing sec.
    cout << "---------------------" << endl;
    for (int j = 0; j < size; j++){
        cout << numbers[j];
        // visual thgs.
        (j + 1) % 10 ? cout << " " : cout << endl;
    }
    
    return 0;
}