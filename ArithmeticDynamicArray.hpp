#pragma once

class ArithmeticDynamicArray {

private:
    int *top;
    int *start;
    int *arr;
    int size;
    int growth_factor;
    void resize_array();


public:
    ArithmeticDynamicArray(int growth_factor);
    ~ArithmeticDynamicArray(); // Destructor
    void append_element(int element);
    int get_element_at_index(int index);
    int size_of();
    void reset();
    
};