//
// Created by victor on 19/10/2019.
//

#ifndef UPDATINGALGORITHM_UTILS_H
#define UPDATINGALGORITHM_UTILS_H

#define ARRAY_LENGTH 20
#define MAX_NUMBER 20

void print_array(int *arr);

int creating_random_number_vector(int *arr);

void swap(int* a, int* b);

void recover_array(int *original, int *target);

double time_consuming(int (*function)(int*), int *arr);

void results(char *algorithm_name, double *time);

int size_of_array(int *arr);

#endif //UPDATINGALGORITHM_UTILS_H
