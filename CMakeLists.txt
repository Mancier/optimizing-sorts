cmake_minimum_required(VERSION 3.15)
project(updatingAlgorithm)
set(CMAKE_C_STANDARD 11)

add_executable(updatingAlgorithm main.c BubbleSort/bubbleSort.c InsertionSort/insertionSort.c SelectionSort/selectionSort.c MergeSort/mergeSort.c QuickSort/quickSort.c Utils/utils.c Utils/utils.h BubbleSort/bubbleSort.h InsertionSort/insertionSort.h QuickSort/quickSort.h SelectionSort/selectionSort.h)