#include <cs50.h>

#include "helpers.h"
#include <stdio.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int low = 0;
    int up = n - 1;
    while(low <= up)
    {
        int mid = (low + up) / 2;
        if(values[mid] == value)
            return true;
        else if (values[mid] < value)
            low = mid +1;
        else if (values[mid] > value)
            up = mid - 1;
    }
    printf("Net chisla!");
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for(int i = 0; i < n - 1; i++)
    {
        int min = values[i];
        int nas = i;
        for(int j = i+1; j < n; j++)
        {
            if(values[j] < min)
            {
                min = values[j];
                nas = j;
            }
        }
        int buf = values[i];
        values[i] = min;
        values[nas] = buf;
    }
    return;
}
