#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

void print_array(int numbers[], size_t size){
    for(size_t i{0}; i<size; i++){
        cout << numbers[i] << endl;
    }
}

int main()
{
    int my_numbers[] {1,2,3,4,5};
    print_array(my_numbers, 5);

    return 0;
}