#include <iostream>

int main(){
    int size;
    std::cout << "How far do you want to go?: \n";
    std::cin >> size;
    
    int numbers[size] = {};
    numbers[0] = 1;
    numbers[1] = 1;
    
    // calculate function
    for (int i = 2; i <= size; i++){
        numbers[i] = (numbers[i-1] + numbers[i-2]);
    }

    // printing sec.
    std::cout << "---------------------\n";
    for (int j = 0; j < size; j++){
        std::cout << numbers[j];
        // visual thgs.
        (j + 1) % 10 ? std::cout << " " : std::cout << '\n';
    }
    
    return 0;
}
