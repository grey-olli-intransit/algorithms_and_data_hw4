#include <stdio.h>
#include <math.h>
#include "print_1d_array.h"
#include "bubbleSort.h"
#include "invert_array.h"
#define SIZE 9
#define SIZE_TPK 11

int userdata[SIZE_TPK]={};

void TrubbPrattKnut() {
    float result;
    for(int i=0;i<SIZE_TPK;i++){
        printf("Введите целое число: ");
        scanf("%i",&userdata[i]);
    }
    invert_array(SIZE_TPK,userdata);
    for(int i=0;i<SIZE_TPK;i++){
        result=sqrt(fabs(userdata[i])) + 5 * pow((double)userdata[i], 3);
        if (result > 400)
            printf("результат %f больше 400.\n", result);
    }
}


int main(int argc, char ** argv) {
    int tosort[SIZE]={1,9,2,5,7,6,4,3,8};
    printf("До сортировки:\n");
    print_1d_array(SIZE,tosort);
    bubbleSort(SIZE,tosort);
    printf("После сортировки:\n");
    print_1d_array(SIZE,tosort);
/*    invert_array(SIZE,tosort);
    printf("После инвертирования:\n");
    print_1d_array(SIZE,tosort);
*/
    TrubbPrattKnut();
    return 0;
}
