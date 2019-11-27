#include<stdio.h> 
  

void merge(int *arr, int l, int m, int r) 
{
    int i, j, k, o;
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* cria um array temporario */
    int L[n1], R[n2]; 
  
    /* Copia os dados para os arrays temp L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Intercala os arrys tempo de volta para o arr[l..r]*/
    i = 0; // Indice inicial do primeiro array
    j = 0; // Indice inicial do segundo array
    k = l; // Indice inicial do terceiro array
    o = l;

    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
}
   
   void merge_optimizated(int *arr, int l, int m, int r) 
   {
        int i, j, k, o;
        int n1 = m - l + 1; 
        int n2 =  r - m; 
    
        /* cria um array temporario */
        int L[n1], R[n2]; 
    
        /* Copia os dados para os arrays temp L[] and R[] */
        for (i = 0; i < n1; i++) 
            L[i] = arr[l + i]; 
        for (j = 0; j < n2; j++) 
            R[j] = arr[m + 1+ j]; 
    
        /* Intercala os arrys tempo de volta para o arr[l..r]*/
        i = 0; // Indice inicial do primeiro array
        j = 0; // Indice inicial do segundo array
        k = l; // Indice inicial do terceiro array
        o = l;

        while (i < n1 && j < n2) 
        { 
            if (L[i] <= R[j]) 
            { 
                arr[k] = L[i]; 
                i++; 
            } 
            else
            { 
                arr[k] = R[j]; 
                j++; 
            } 
            k++; 
        } 
        /* Aqui tentei juntar os dois la�os do while que comentei em CASO 1*/
        
        while (i < n1 )
        {
            if(i < n1){
                arr[k] = L[i]; 
                i++; 
                k++; 
            }
            if(j < n2){
                arr[o] = R[j]; 
                j++; 
                o++; 
            }
        }
    } 
  
/* l eh o indice da direita e r eh o indice da direita do
   subarray de arr para ser organizado */
void merge_sort(int *arr, int l, int r) 
{ 
    if (l < r) 
    { 
        // Mesma coisa que  (l+r)/2
        int m = l+(r-l)/2; 
  
        // Classifica primeira e segunda metades
        merge_sort(arr, l, m); 
        merge_sort(arr, m+1, r); 
  	        merge(arr, l, m, r); 
    } 
}

void merge_sort_optimized(int *arr, int l, int r) 
{ 
    if (l < r) 
    { 
        // Mesma coisa que  (l+r)/2
        int m = l+(r-l)/2; 
  
        // Classifica primeira e segunda metades
        merge_sort_optimization(arr, l, m); 
        merge_sort_optimization(arr, m+1, r); 
  	        merge_optimizated(arr, l, m, r); 
    } 
}
