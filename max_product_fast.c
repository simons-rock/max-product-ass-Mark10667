#include "max_product.h"

int max_pairwise_product_fast(int *arr, int size){
	int first;
	int second;
	int max_product;
	first = second = 0;
	max_product = 0;
	for(int i = 0; i < size; i++){
		if(first < arr[i]){
			second = first;
			first = arr[i];
		}else if(second < arr[i] && arr[i] != first){
			second = arr[i];
		}
	}
	max_product = first*second;
	return max_product;
}
