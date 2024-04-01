#include "ArithmeticDynamicArray.hpp"
#include <iostream>
using namespace std;

ArithmeticDynamicArray::ArithmeticDynamicArray(int growth_factor) {
    size = 1;
    this->growth_factor = growth_factor;
    arr = new int[size];
    start = arr;
    top = start;
}

int ArithmeticDynamicArray::size_of() {
    return size;
}

void ArithmeticDynamicArray::resize_array() {
    int *temp = new int[size + growth_factor];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    
    delete[] arr;
    arr = temp;
    
    start = arr;
    top = start + size;

    size = size + growth_factor;
      
}

void ArithmeticDynamicArray::append_element(int element) {
    if (start + size == top) {
        resize_array();
        *top = element;
        cout << "Added " << element << " to the array" << endl;
        top++;
    }

    else {
        *top = element;
        cout << "Added " << element << " to the array" << endl;
        top++;
    }
}

int ArithmeticDynamicArray::get_element_at_index(int index) {
    if (index < 0 || index > size - 1)
    {
      return 0;
    }
    else
    {
      return *(start + index);
    }
}

void ArithmeticDynamicArray::reset() {
    size = 1;
    int *temp = new int[size];
    delete arr;
    arr = temp;
    start = arr;
    top = start;
}

ArithmeticDynamicArray::~ArithmeticDynamicArray() {
    delete[] arr; // Release the allocated memory in the destructor
}