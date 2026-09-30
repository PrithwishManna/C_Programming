#include <stdio.h>
#include<stdlib.h>
int main(){
    
    int *arr;
    int s1,s2;
    
    printf("Enter array size1 : ");
    scanf("%d", &s1);
    arr =(int *)calloc(s1,sizeof(int));
    printf("Enter %d value : ", s1);
    for(int i=0; i<s1; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter array size2 : ");
    scanf("%d", &s2);
    arr =(int *)realloc (arr,sizeof(int) * (s1+s2));
    printf("Enter %d value : ", s2);
    for(int i=s1; i<s1+s2; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("array data list : ");
    for(int i=0; i<s1+s2; i++){
        printf("%d ",arr[i]);
    }
    free(arr);                              //memory deallocation
    arr = NULL;
    
    return 0;
}