//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "utils.h"

void print_array(int *arr){
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d", *arr);
        if (i != ARRAY_LENGTH-1) printf(", "); else printf("\n");
        arr++;
    }
}

int creating_random_number_vector(int *arr){
    for (int x = 0; x < ARRAY_LENGTH; x++){
        arr[x] = rand() % MAX_NUMBER;
    }
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

double time_consuming(void (*function)(int*), int *arr)
{
    clock_t time;
    time = clock();
    function(arr);
    time = clock() - time;
    return ((double)time)/CLOCKS_PER_SEC;
}

double time_consuming_with_three_params(void (*function)(int*, int, int), int *arr, int low, int high)
{
    clock_t time;
    time = clock();
    function(arr, low, high);
    time = clock() - time;
    return ((double)time)/CLOCKS_PER_SEC;
}

void recover_array(int *original, int *target)
{
    for (int i = 0; i < ARRAY_LENGTH; ++i) {
        *target = *original;
        target++;
        original++;
    }
}

void results(char *algorithm_name, double *time)
{
    printf("%s: %f\n", algorithm_name, time[0]);
    printf("%s optimized: %f\n", algorithm_name, time[1]);
}

int size_of_array(int *arr)
{
	return sizeof(arr)/sizeof(arr[0]);
}
