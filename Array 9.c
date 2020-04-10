#include <stdio.h>
int main(){
    int inputArray[500], elementCount, counter, element, index;

    printf("Enter number of elements in array: ");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);

    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }

    printf("Enter number to be inserted\n");
    scanf("%d", &element);
    printf("Enter index where you want to insert an element\n");
    scanf("%d", &index);
     for(counter = elementCount; counter > index; counter--){
        inputArray[counter] = inputArray[counter-1];
    }
    inputArray[index] = element;
    printf("Updated Array\n");
    for(counter = 0; counter < elementCount + 1; counter++){
        printf("%d ", inputArray[counter]);
    }
    return 0;
}
