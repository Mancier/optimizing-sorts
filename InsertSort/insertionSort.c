#include "insertSort.h"

void insertion_sort_optimized(int *arr){
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, key, j, meio, res;

	for (i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;

		if(i > 4){
			//preciso fazer uma comparação com o elemento do meio 
			res = i/2;
			meio = arr[res];

			while (j >= 0 && arr[j] > meio){
				arr[j + 1] = arr[j];
				j = j-1;
			}//caso o elemnto do meio seja maior que o j, então ele vai pra esquerda

			while (j <= res && arr[j] < meio){
				arr[j + 1] = arr[j];
				j = j+1;
			}//caso o elemnto do meio seja menor que o j, então ele vai pra direita
		}

		while (j >=0 && arr[j] > key){
				arr[j + 1] = arr[j];
				j = j-1;
		}

		arr[j+1] = key;
	}
}

void insertion_sort(int *arr){
	int n = sizeof(arr)/sizeof(arr[0]);
	int i, key, j;

	for (i = 0; i < n; i++){
		key = arr[i];
		j = i - 1;

		while (j >=0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j-1;
		}

		arr[j+1] = key;
	}
}
