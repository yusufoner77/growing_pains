#include <iostream>
#include "DynamicArray.hpp"
using namespace std;

int main() {

    DynamicArray array;
    array.append_element(10);
    array.append_element(20);
    array.append_element(30);
    array.append_element(40);
    array.append_element(50);
    array.append_element(60);
    cout << "The size of the array is " << array.size_of() << endl;
    cout << "The array at index 0 is " << array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << array.get_element_at_index(2) << endl;
    cout << "The array at index 3 is " << array.get_element_at_index(3) << endl;
    cout << "The array at index 4 is " << array.get_element_at_index(4) << endl;
    cout << "The array at index 5 is " << array.get_element_at_index(5) << endl;

}