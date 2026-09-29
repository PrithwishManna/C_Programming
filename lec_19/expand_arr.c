// Write a program that accepts an initial number of floating point numbers from the user and later allows the user to expand the array to add more elements. [use realloc() for dynamic memory allocation]


#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialsize,extrasize,newsize;
    int i;
    float *ptr;
    
    printf("Enter the initial number of elements: ");
    scanf("%d", &initialsize);
    
    ptr = (float *)calloc(initialsize, sizeof(float));
    if(ptr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("\n---Enter %d initial number---\n",initialsize);
    for(i=0;i<initialsize;i++){
        printf("Enter number %d: ",i+1);
        scanf("%f", &ptr[i]);
    }
    printf("\nHow many more elements do you want add?");
    scanf("%d", &extrasize);
    
    if(extrasize > 0){
        newsize = initialsize + extrasize;
        
        float *temp_ptr = (float *)realloc(ptr, newsize * sizeof(float));
        if(temp_ptr == NULL){
            printf("Error! memory re-allocation is failed\n");
            free(ptr);
            return 1;
        }
        else{
            ptr = temp_ptr;
        }
        printf("\n---Enter %d new numbers :\n",extrasize);
        for(i=initialsize;i<newsize;i++){
            printf("Enter number %d: ", i+1);
            scanf("%f",&ptr[i]);
        }
    }
    else{
        newsize = initialsize;
    }
    printf("\n---Final array (Total %d elements)---\n",newsize);
    
    for(i=0;i<newsize;i++){
        printf("Element %d : %.2f\n", i+1, ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    
    return 0;
}