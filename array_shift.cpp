#include "array_shift.hpp"

void array_shift_left(int array[], int array_size, int number_of_shifts ) {
    
    for (int shift = 0; shift < number_of_shifts; shift++){
        int temp = array[0];

        for (int i = 0; i < array_size - 1; i++) {
            array[i] = array[i + 1];
        }

        array[array_size - 1] = temp;
    }
}

void array_shift_right(int array[], int array_size, int number_of_shifts ) {
    
    for (int shift = 0; shift < number_of_shifts; shift++){
        int temp = array[array_size - 1];

        for (int i = array_size - 1; i > 0; i--) {
            array[i] = array[i - 1];
        }

        array[0] = temp;
    }
}