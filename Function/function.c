#include<stdio.h>        //preprocessor directive//

void greet(){            //This defines a function named greet, inside {} are the instructions for the function//
printf("Hello!\n");      //This function doesn't run automatically; you must call it in main()//
}

int add(int a, int b){   //Another function ,but this one returns an integer; it takes two integer inputs (a and b)//
return a+b;
}

int main(){
greet();                 //Calls the greet function we defined earlier//
int sum = add(5, 3);     //Calls add with a=5 and b=3; add returns 8;Stores that result in the variable sum//
printf("Sum: %d\n", sum);   //%d is a placeholder for an integer//
return 0;                //0 means "program ran successfully"//
}


/*Program Flow

1. Start → Go to main.

2. Call greet → print "Hello!".

3. call add(5, 3) → get 8 → store in sum.

4. print "Sum: 8".

5. Return 0 → exit.*/
