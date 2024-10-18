#include "vector_shift.hpp"
#include <vector>

using namespace std;

void vector_shift_left(std::vector <int> &vector, int number_of_shifts ) {
    int vector_size = vector.size();

    for (int shift = 0; shift < number_of_shifts; shift++){
        int temp = vector[0];

        for (int i = 0; i < vector_size - 1; i++) {
            vector[i] = vector[i + 1];
        }

        vector[vector_size - 1] = temp;
    }
}

void vector_shift_right(std::vector <int> &vector, int number_of_shifts ) {
    int vector_size = vector.size();

    for (int shift = 0; shift < number_of_shifts; shift++){
        int temp = vector[vector_size - 1];

        for (int i = vector_size - 1; i > 0; i--) {
            vector[i] = vector[i - 1];
        }

        vector[0] = temp;
    }
}