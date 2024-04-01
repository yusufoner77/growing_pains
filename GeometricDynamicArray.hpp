#pragma once

class GeometricDynamicArray {

private:
    int *top;
    int *start;
    int *arr;
    int size;
    void resize_array();


public:
    GeometricDynamicArray();
    ~GeometricDynamicArray(); // Destructor
    void append_element(int element);
    int get_element_at_index(int index);
    int size_of();
    void reset();
    
};