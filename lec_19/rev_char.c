#include<stdio.h>
#include<stdlib.h>

void readReverse(int n){
    char *chararray;
    int i;
    
    chararray = (char *) malloc(n * sizeof(char));
    if(chararray == NULL){
        printf("Memory allocation is failed!");
        return;
    }
    printf("---Enter %d characters---\n",n);
    for(i=0;i<n;i++){
        printf("Enter character %d: ",i+1);
        scanf(" %c",&chararray[i]);
    }
    printf("---Characters in reverse order----\n");
    for(i=n-1;i>=0;i--){
        printf("%c",chararray[i]);
    }
   free(chararray);
   chararray = NULL;
}

int main(){
    int n;
    printf("How many charaters do you want to print? ");
    scanf("%d",&n);
    
    if(n<=0){
        printf("Please enter a positive number\n");
        return 1;
    }
    readReverse(n);
    
    
    return 0;
}