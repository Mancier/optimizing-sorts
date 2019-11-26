//
// Created by victor on 19/10/2019.
//
#include <stdio.h>
#include "BubbleSort/bubbleSort.h"
#include "InsertSort/insertSort.h"
#include "Utils/utils.h"

int main () {
    int option = 0;
    double time_consumed[2] = {0,0}; //[0] - Normal Algorithm; [1] - Optimized Algorithm
    int original_array[ARRAY_LENGTH];
    int vector[ARRAY_LENGTH];

    printf("Selecione uma opcao valida, logo abaixo: \n");
    printf("\t1 - Bubble Sort\n");
    printf("\t2 - Insertion Sort\n");
    printf("\t3 - Selection Sort\n");
    printf("\t4 - Merge Sort\n");
    printf("\t5 - Quick Sort\n");

    //Creating the array and calculating his length
    creating_random_number_vector(original_array);
    recover_array(original_array, vector);

    printf("Entre com uma opcao: ");
    scanf("%d", &option);

    do {
        switch (option){
            case 1:
                //run bubbleSort
                time_consumed[0] = time_consuming(bubble_sort, vector);
                recover_array(original_array, vector);
                time_consumed[1] = time_consuming(bubble_sort_optimized, vector);
                recover_array(original_array, vector);
                results("Bubble Sort", time_consumed);
                break;
            case 2:
                time_consumed[0] = time_consuming(insert_sort, vector);
                recover_array(original_array, vector);
                time_consumed[1] = time_consuming(insert_sort_optimized, vector);
                recover_array(original_array, vector);
                results("Insert Sort", time_consumed);
                break;
            case 3:
                //run selectionSort
                break;
            case 4:
                //run mergeSort
                break;
            case 5:
                //run quickSort
                break;
            default:
                printf("Opcao invalida, tente novamente");
                option = 0;
                break;
        }
    } while (!option);
    return 0;
}

/*
    int main(int argc, char const *argv[]){
    int arr[100000];
	int ARRAY_LENGTH = sizeof(arr)/sizeof(int);
	double timeOfExecution = 0;
	clock_t time;

	creatingRandomNumberVector(arr, ARRAY_LENGTH);

	printf("==> Tempos de Execução <==\n");

    time = clock();
    bubbleSort(arr, ARRAY_LENGTH);
    time = clock() - time;
    timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
    printf("\tBubble Sort: %fs\n", timeOfExecution);

    time = clock();
    bubbleSort(arr, ARRAY_LENGTH);
    time = clock() - time;
    timeOfExecution = ((double)time)/CLOCKS_PER_SEC;
    printf("\tBubble Sort Melhorado: %fs\n", timeOfExecution);
    return 0;
    }
 */