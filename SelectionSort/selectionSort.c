#include <stdio.h>
#include "../Utils/utils.h"

void selection_sort_optimized(int *arr)
{  
    for (int i = 0; i < ARRAY_LENGTH  - 1; i++)  {
        int min = i; 
        for (int j = i + 1; j < ARRAY_LENGTH ; j++)
            if (arr[min] > arr[j]){
                min = j;
			}
        	
			int key = arr[min]; 
			while (min > i){ 
				arr[min] = arr[min - 1];
				min--; 
			} 
		
        	arr[i] = key; 
    } 
} 
  

void selection_sort(int *arr){
	int aux = 0;
	for (int i = 0; i < ARRAY_LENGTH - 1; i++) {
		aux = i;
		for (int j = i+1; j < ARRAY_LENGTH ; j++){
			if (arr[j] < arr[aux]) {
				swap(&arr[i], &arr[j])
			}
		}
	}
}
