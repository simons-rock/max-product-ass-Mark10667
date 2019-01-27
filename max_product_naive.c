#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size){
	int max_product = 0;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(arr[i]*arr[j] > max_product && arr[i]!=arr[j]){
				max_product = arr[i]*arr[j];
			}
		}
	}
	return max_product;
}
