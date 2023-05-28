#include <cs50.h>
#include <stdio.h>

#define ARRAY_LENGTH 11

int main(void)
{
    int unsorted[ARRAY_LENGTH] = {0, 2, 5, 1, 10, 9, 6, 4, 7, 8, 3};

    for (int i = 0; i < ARRAY_LENGTH-1; i++)
    {
        int smallest_index = i;

        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (unsorted[smallest_index] > unsorted[j])
            {
                smallest_index = j;   
            }
        }

        // Swap the lowest value with the i-th place
        int temp = unsorted[i];
        unsorted[i] = unsorted[smallest_index];
        unsorted[smallest_index] = temp; 
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf ("%i ", unsorted[i]);
    }

    return 0;
}