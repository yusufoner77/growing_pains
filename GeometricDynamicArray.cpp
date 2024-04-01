#include "GeometricDynamicArray.hpp"
#include <iostream>
using namespace std;

GeometricDynamicArray::GeometricDynamicArray() {
    size = 1;
    arr = new int[size];
    start = arr;
    top = start;
}

int GeometricDynamicArray::size_of() {
    return size;
}

void GeometricDynamicArray::resize_array() {
    int *temp = new int[size * 2];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    
    delete[] arr;
    arr = temp;
    
    start = arr;
    top = start + size;

    size = size * 2;
      
}

void GeometricDynamicArray::append_element(int element) {
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

int GeometricDynamicArray::get_element_at_index(int index) {
    if (index < 0 || index > size - 1)
    {
      return 0;
    }
    else
    {
      return *(start + index);
    }
}

void GeometricDynamicArray::reset() {
    size = 1;
    int *temp = new int[size];
    delete arr;
    arr = temp;
    start = arr;
    top = start;
}

GeometricDynamicArray::~GeometricDynamicArray() {
    delete[] arr; // Release the allocated memory in the destructor
}