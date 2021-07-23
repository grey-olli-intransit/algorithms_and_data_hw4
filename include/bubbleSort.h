#ifndef bubbleSort_H
#define bubbleSort_H
#include "swap.h"
void bubbleSort(int size, int * array) {
    for(int i=0;i<size;i++) 
        for(int j=0;j<size-1;j++) 
            if(array[j] > array[j+1]) 
	       swap(&array[j],&array[j+1]);
}
#endif
