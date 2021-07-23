#ifndef invert_array_h
#define invert_array_h

void invert_array(int size,int * array) {
    int middle=size/2;
    for(int i=0,j=size-1;i<=middle && j>middle;i++,j--) {
        int tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
    }
}

#endif
