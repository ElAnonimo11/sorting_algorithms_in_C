#include "insertion_sort.h"


void insertion_sort(int vector[],int tam_vector)
{
    for (int i = 1; i < tam_vector ; ++i) {
        // We look for the position for the val in vector[i] in the sorted vector[:i]
        int val = vector[i];
        int j = i - 1;
        while (j > 0 && vector[j] > val) {
            vector[j + 1] = vector[j];
            --j;
        }
        vector[j] = val;
    }
}
