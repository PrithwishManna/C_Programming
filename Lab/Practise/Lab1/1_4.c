#include<stdio.h>
#define DEBUG(msg) {printf("%s\n",__FILE__);printf("%d\n",__LINE__);printf("DEBUG: %s\n",msg);}

int main(){
    DEBUG("This is DEBUG message.");
}