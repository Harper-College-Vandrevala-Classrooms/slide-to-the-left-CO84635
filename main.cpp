#include <iostream>
#include <cassert>
#include <vector>
#include "array_shift.hpp"
#include "vector_shift.hpp"

using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    array_shift_left(arr1, 5, 1);
    assert(arr1[0] == 2);
    assert(arr1[1] == 3);
    assert(arr1[2] == 4);
    assert(arr1[3] == 5);
    assert(arr1[4] == 1);

    array_shift_left(arr1, 5, 1);
    assert(arr1[0] == 3);
    assert(arr1[1] == 4);
    assert(arr1[2] == 5);
    assert(arr1[3] == 1);
    assert(arr1[4] == 2);

    array_shift_left(arr1, 5, 1);
    assert(arr1[0] == 4);
    assert(arr1[1] == 5);
    assert(arr1[2] == 1);
    assert(arr1[3] == 2);
    assert(arr1[4] == 3);

    int arr2[] = {1, 2, 3, 4, 5};
    array_shift_right(arr2, 5, 1);
    assert(arr2[0] == 5);
    assert(arr2[1] == 1);
    assert(arr2[2] == 2);
    assert(arr2[3] == 3);
    assert(arr2[4] == 4);

    array_shift_right(arr2, 5, 1);
    assert(arr2[0] == 4);
    assert(arr2[1] == 5);
    assert(arr2[2] == 1);
    assert(arr2[3] == 2);
    assert(arr2[4] == 3);

    array_shift_right(arr2, 5, 1);
    assert(arr2[0] == 3);
    assert(arr2[1] == 4);
    assert(arr2[2] == 5);
    assert(arr2[3] == 1);
    assert(arr2[4] == 2);

    int arr3[] = {1, 2, 3};
    array_shift_left(arr3, 3, 3);
    assert(arr3[0] == 1);
    assert(arr3[1] == 2);
    assert(arr3[2] == 3);

    array_shift_left(arr3, 3, 4);
    assert(arr3[0] == 2);
    assert(arr3[1] == 3);
    assert(arr3[2] == 1);

    int arr4[] = {1, 2, 3};
    array_shift_right(arr4, 3, 3);
    assert(arr4[0] == 1);
    assert(arr4[1] == 2);
    assert(arr4[2] == 3);

    array_shift_right(arr4, 3, 4);
    assert(arr4[0] == 3);
    assert(arr4[1] == 1);
    assert(arr4[2] == 2);

    int arr5[] = {1, 2, 3, 4, 5};
    array_shift_left(arr5, 5, 0);
    assert(arr5[0] == 1);
    assert(arr5[1] == 2);
    assert(arr5[2] == 3);
    assert(arr5[3] == 4);
    assert(arr5[4] == 5);

    int arr6[] = {1, 2, 3, 4, 5};
    array_shift_right(arr6, 5, 0);
    assert(arr6[0] == 1);
    assert(arr6[1] == 2);
    assert(arr6[2] == 3);
    assert(arr6[3] == 4);
    assert(arr6[4] == 5);

    int arr7[] = {1, 2, 3, 4, 5};
    array_shift_left(arr7, 5, 8);
    assert(arr7[0] == 4);
    assert(arr7[1] == 5);
    assert(arr7[2] == 1);
    assert(arr7[3] == 2);
    assert(arr7[4] == 3);

    int arr8[] = {1, 2, 3, 4, 5};
    array_shift_right(arr8, 5, 8);
    assert(arr8[0] == 3);
    assert(arr8[1] == 4);
    assert(arr8[2] == 5);
    assert(arr8[3] == 1);
    assert(arr8[4] == 2);

    int arr9[] = {7};
    array_shift_left(arr9, 1, 1);
    assert(arr9[0] == 7);

    int arr10[] = {7};
    array_shift_right(arr10, 1, 1);
    assert(arr10[0] == 7);

std::vector<int> vec1 = {1, 2, 3, 4, 5};
    vector_shift_left(vec1, 1);
    assert(vec1[0] == 2);
    assert(vec1[1] == 3);
    assert(vec1[2] == 4);
    assert(vec1[3] == 5);
    assert(vec1[4] == 1);

    std::vector<int> vec2 = {1, 2, 3, 4, 5};
    vector_shift_right(vec2, 1);
    assert(vec2[0] == 5);
    assert(vec2[1] == 1);
    assert(vec2[2] == 2);
    assert(vec2[3] == 3);
    assert(vec2[4] == 4);

    vector_shift_left(vec1, 1);
    assert(vec1[0] == 3);
    assert(vec1[1] == 4);
    assert(vec1[2] == 5);
    assert(vec1[3] == 1);
    assert(vec1[4] == 2);

    vector_shift_right(vec2, 1);
    assert(vec2[0] == 4);
    assert(vec2[1] == 5);
    assert(vec2[2] == 1);
    assert(vec2[3] == 2);
    assert(vec2[4] == 3);

    vector_shift_left(vec1, 1);
    assert(vec1[0] == 4);
    assert(vec1[1] == 5);
    assert(vec1[2] == 1);
    assert(vec1[3] == 2);
    assert(vec1[4] == 3);

    vector_shift_right(vec2, 1);
    assert(vec2[0] == 3);
    assert(vec2[1] == 4);
    assert(vec2[2] == 5);
    assert(vec2[3] == 1);
    assert(vec2[4] == 2);

    std::vector<int> vec3 = {1, 2, 3};
    vector_shift_left(vec3, 3);
    assert(vec3[0] == 1);
    assert(vec3[1] == 2);
    assert(vec3[2] == 3);

    std::vector<int> vec4 = {1, 2, 3};
    vector_shift_right(vec4, 3);
    assert(vec4[0] == 1);
    assert(vec4[1] == 2);
    assert(vec4[2] == 3);

    vector_shift_left(vec3, 4);
    assert(vec3[0] == 2);
    assert(vec3[1] == 3);
    assert(vec3[2] == 1);

    vector_shift_right(vec4, 4);
    assert(vec4[0] == 3);
    assert(vec4[1] == 1);
    assert(vec4[2] == 2);

    std::vector<int> vec5 = {1, 2, 3, 4, 5};
    vector_shift_left(vec5, 0);
    assert(vec5[0] == 1);
    assert(vec5[1] == 2);
    assert(vec5[2] == 3);
    assert(vec5[3] == 4);
    assert(vec5[4] == 5);

    std::vector<int> vec6 = {1, 2, 3, 4, 5};
    vector_shift_right(vec6, 0);
    assert(vec6[0] == 1);
    assert(vec6[1] == 2);
    assert(vec6[2] == 3);
    assert(vec6[3] == 4);
    assert(vec6[4] == 5);

    std::vector<int> vec7 = {1, 2, 3, 4, 5};
    vector_shift_left(vec7, 8);
    assert(vec7[0] == 4);
    assert(vec7[1] == 5);
    assert(vec7[2] == 1);
    assert(vec7[3] == 2);
    assert(vec7[4] == 3);

    std::vector<int> vec8 = {1, 2, 3, 4, 5};
    vector_shift_right(vec8, 8);
    assert(vec8[0] == 3);
    assert(vec8[1] == 4);
    assert(vec8[2] == 5);
    assert(vec8[3] == 1);
    assert(vec8[4] == 2);

    std::vector<int> vec9 = {7};
    vector_shift_left(vec9, 1);
    assert(vec9[0] == 7);

    std::vector<int> vec10 = {7};
    vector_shift_right(vec10, 1);
    assert(vec10[0] == 7);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}