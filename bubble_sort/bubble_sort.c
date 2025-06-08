#include "bubble_sort.h"


void bubble_sort(int vector[], int tam_vector)
{
    for (int i = tam_vector - 1; i >= 0 ; --i) {
        for (int j = 0; j < i ; ++j) {
            // The big numbers go to the top of the array, like a bubble in a liquid
            if (vector[j] > vector[j+1]) {
                int aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }
}
