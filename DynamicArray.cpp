#include "DynamicArray.hpp"
#include <iostream>
using namespace std;

DynamicArray::DynamicArray() {
    size = 0;
    arr = new int[size];
    start = arr;
    top = start;
}

int DynamicArray::size_of() {
    return size;
}

void DynamicArray::resize_array() {
    int *temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    
    delete[] arr;
    arr = temp;
    
    start = arr;
    top = start + size;

    size = size + 1;
      
}

void DynamicArray::append_element(int element) {
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

int DynamicArray::get_element_at_index(int index) {
    if (index < 0 || index > size - 1)
    {
      return 0;
    }
    else
    {
      return *(start + index);
    }
}

void DynamicArray::reset() {
    size = 0;
    int *temp = new int[size];
    delete arr;
    arr = temp;
    start = arr;
    top = start;

}

DynamicArray::~DynamicArray() {
    delete[] arr; // Release the allocated memory in the destructor
}