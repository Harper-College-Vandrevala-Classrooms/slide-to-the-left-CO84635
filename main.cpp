#include <iostream>
#include <cassert>
#include "array_shift.hpp"

using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    array_shift(arr1, 5, 1);
    assert(arr1[0] == 2);
    assert(arr1[1] == 3);
    assert(arr1[2] == 4);
    assert(arr1[3] == 5);
    assert(arr1[4] == 1);

    array_shift(arr1, 5, 1);
    assert(arr1[0] == 3);
    assert(arr1[1] == 4);
    assert(arr1[2] == 5);
    assert(arr1[3] == 1);
    assert(arr1[4] == 2);

    array_shift(arr1, 5, 1);
    assert(arr1[0] == 4);
    assert(arr1[1] == 5);
    assert(arr1[2] == 1);
    assert(arr1[3] == 2);
    assert(arr1[4] == 3);

    int arr2[] = {1, 2, 3, 4, 5};
    array_shift(arr2, 5, 3);
    assert(arr2[0] == 4);
    assert(arr2[1] == 5);
    assert(arr2[2] == 1);
    assert(arr2[3] == 2);
    assert(arr2[4] == 3);

    array_shift(arr2, 5, 3);
    assert(arr2[0] == 2);
    assert(arr2[1] == 3);
    assert(arr2[2] == 4);
    assert(arr2[3] == 5);
    assert(arr2[4] == 1);

    array_shift(arr2, 5, 3);
    assert(arr2[0] == 5);
    assert(arr2[1] == 1);
    assert(arr2[2] == 2);
    assert(arr2[3] == 3);
    assert(arr2[4] == 4);

    int arr3[] = {1, 2, 3};
    array_shift(arr3, 3, 3);
    assert(arr3[0] == 1);
    assert(arr3[1] == 2);
    assert(arr3[2] == 3);

    array_shift(arr3, 3, 4);
    assert(arr3[0] == 2);
    assert(arr3[1] == 3);
    assert(arr3[2] == 1);

    int arr4[] = {1, 2, 3, 4, 5};
    array_shift(arr4, 5, 0);
    assert(arr4[0] == 1);
    assert(arr4[1] == 2);
    assert(arr4[2] == 3);
    assert(arr4[3] == 4);
    assert(arr4[4] == 5);

    int arr5[] = {1, 2, 3, 4, 5};
    array_shift(arr5, 5, 8);
    assert(arr5[0] == 4);
    assert(arr5[1] == 5);
    assert(arr5[2] == 1);
    assert(arr5[3] == 2);
    assert(arr5[4] == 3);

    int arr6[] = {7};
    array_shift(arr6, 1, 1);
    assert(arr6[0] == 7);

    cout << "All test passed!" << endl;

    return 0;
}