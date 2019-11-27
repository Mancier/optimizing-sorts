//
// Created by victor on 19/10/2019.
//

#ifndef UPDATINGALGORITHM_UTILS_H
#define UPDATINGALGORITHM_UTILS_H

#define ARRAY_LENGTH 5
#define MAX_NUMBER 9

void print_array(int *arr);

int creating_random_number_vector(int *arr);

void swap(int* a, int* b);

void recover_array(int *original, int *target);

double time_consuming(void (*function)(int*), int *arr);

double time_consuming_with_three_params(void (*function)(int*, int, int), int *arr, int low, int high);

void results(char *algorithm_name, double *time);

int size_of_array(int *arr);

#endif //UPDATINGALGORITHM_UTILS_H
