#include <stdio.h>
#include <stdlib.h>
#include "arrayList.h"

int main() {
    arrayList* myArrayList = createArrayList(2); 

    if (sizeArrayList(myArrayList) == 0) {
        printf("Create ok\n");
    }


    insertArrayList(myArrayList, 0, 10);
    insertArrayList(myArrayList, 1, 20);
    insertArrayList(myArrayList, 2, 30); 
    insertArrayList(myArrayList, 3, 5);

    printArrayList(myArrayList); 

  
    deleteArrayList(myArrayList, 0);
    deleteArrayList(myArrayList, 1);
    deleteArrayList(myArrayList, 2);

    printArrayList(myArrayList); 

    destroyArrayList(myArrayList); 
    return 0;
}

