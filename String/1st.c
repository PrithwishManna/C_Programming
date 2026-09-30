#include<stdio.h>
int main(){
    //char ch[] = {'h','e','l','l','o','\0'};
    char ch[] = "Now I'm in IIT Guwahati which is India's most beautifull campus";
    int i=0;
    while(ch[i] !='\0'){
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}

// line(4) = compiler automatic '\0' lagiye dai sese