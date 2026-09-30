//print the numbers from reverse side


#include<stdio.h>
 
 int main(){
 
 int x;
 printf("Enter your desire number : ");
 scanf("%d",&x);
 
 while(x>=1){
	printf("%d \t", x);
	x=x-1;
	}
 return 0;
}


/* #include<stdio.h>

 int main(){
 int x;
 printf("Enter your desire number : ");
 scanf("%d",&x);

 for(;x>=1;x--){
  printf("%d \t", x);
 }
return 0;
} */
