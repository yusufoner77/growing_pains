#include <iostream>
#include "DynamicArray.hpp"
#include "ArithmeticDynamicArray.hpp"
#include "GeometricDynamicArray.hpp"
using namespace std;

int main() {

    cout << "\n--------- We will now begin testing DynamicArray ---------\n\n";

    DynamicArray dynamic_array;
    dynamic_array.append_element(10);
    dynamic_array.append_element(20);
    dynamic_array.append_element(30);
    dynamic_array.append_element(40);
    dynamic_array.append_element(50);
    dynamic_array.append_element(60);
    cout << "The size of the array is " << dynamic_array.size_of() << endl;
    cout << "The array at index 0 is " << dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << dynamic_array.get_element_at_index(2) << endl;
    cout << "The array at index 3 is " << dynamic_array.get_element_at_index(3) << endl;
    cout << "The array at index 4 is " << dynamic_array.get_element_at_index(4) << endl;
    cout << "The array at index 5 is " << dynamic_array.get_element_at_index(5) << endl << endl;

    cout << "Resetting the array!" << endl << endl;
    dynamic_array.reset();
    cout << "The size of the array is " << dynamic_array.size_of() << endl;
    dynamic_array.append_element(1);
    dynamic_array.append_element(2);
    dynamic_array.append_element(3);
    cout << "The size of the array is " << dynamic_array.size_of() << endl;
    cout << "The array at index 0 is " << dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << dynamic_array.get_element_at_index(2) << endl;

    cout << "\n--------- We will now begin testing ArithmeticDynamicArray ---------\n\n";

    ArithmeticDynamicArray arithmetic_dynamic_array(3);
    arithmetic_dynamic_array.append_element(10);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    arithmetic_dynamic_array.append_element(20);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    arithmetic_dynamic_array.append_element(30);
    arithmetic_dynamic_array.append_element(40);
    arithmetic_dynamic_array.append_element(50);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    arithmetic_dynamic_array.append_element(60);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    cout << "The array at index 0 is " << arithmetic_dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << arithmetic_dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << arithmetic_dynamic_array.get_element_at_index(2) << endl;
    cout << "The array at index 3 is " << arithmetic_dynamic_array.get_element_at_index(3) << endl;
    cout << "The array at index 4 is " << arithmetic_dynamic_array.get_element_at_index(4) << endl;
    cout << "The array at index 5 is " << arithmetic_dynamic_array.get_element_at_index(5) << endl;

    cout << "Resetting the array!" << endl << endl;
    arithmetic_dynamic_array.reset();
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    arithmetic_dynamic_array.append_element(1);
    arithmetic_dynamic_array.append_element(2);
    arithmetic_dynamic_array.append_element(3);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;
    arithmetic_dynamic_array.append_element(4);
    cout << "The size of the array is " << arithmetic_dynamic_array.size_of() << endl;

    cout << "The array at index 0 is " << arithmetic_dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << arithmetic_dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << arithmetic_dynamic_array.get_element_at_index(2) << endl;

    cout << "\n--------- We will now begin testing GeometricDynamicArray ---------\n\n";

    GeometricDynamicArray geometric_dynamic_array;
    geometric_dynamic_array.append_element(10);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    geometric_dynamic_array.append_element(20);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    geometric_dynamic_array.append_element(30);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    geometric_dynamic_array.append_element(40);
    geometric_dynamic_array.append_element(50);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    geometric_dynamic_array.append_element(60);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    cout << "The array at index 0 is " << geometric_dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << geometric_dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << geometric_dynamic_array.get_element_at_index(2) << endl;
    cout << "The array at index 3 is " << geometric_dynamic_array.get_element_at_index(3) << endl;
    cout << "The array at index 4 is " << geometric_dynamic_array.get_element_at_index(4) << endl;
    cout << "The array at index 5 is " << geometric_dynamic_array.get_element_at_index(5) << endl << endl;

    cout << "Resetting the array!" << endl << endl;
    geometric_dynamic_array.reset();
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    geometric_dynamic_array.append_element(1);
    geometric_dynamic_array.append_element(2);
    geometric_dynamic_array.append_element(3);
    geometric_dynamic_array.append_element(4);
    geometric_dynamic_array.append_element(5);
    geometric_dynamic_array.append_element(6);
    geometric_dynamic_array.append_element(7);
    geometric_dynamic_array.append_element(8);
    geometric_dynamic_array.append_element(9);
    cout << "The size of the array is " << geometric_dynamic_array.size_of() << endl;
    cout << "The array at index 0 is " << geometric_dynamic_array.get_element_at_index(0) << endl;
    cout << "The array at index 1 is " << geometric_dynamic_array.get_element_at_index(1) << endl;
    cout << "The array at index 2 is " << geometric_dynamic_array.get_element_at_index(2) << endl;
    cout << "The array at index 8 is " << geometric_dynamic_array.get_element_at_index(8) << endl;


}