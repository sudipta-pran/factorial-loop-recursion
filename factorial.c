#include <stdio.h>
#include <conio.h>

int main(){
    int factorialWithLoop(int num){ //Factorial using Loops
        int result = 1;
        if(num < 1) return result;

        for(int i = num; i > 0; i --){
            result *= i;
        }
        return result;
    }

    int factorialWithRecursion(int num){ //Factorial Using recursion
        if(num < 1) return 1;

        return num*factorialWithRecursion(num-1);
    }

    printf("Result with Loop is: %d\n", factorialWithLoop(7));
    printf("Result with Recursion is: %d", factorialWithRecursion(7));

    return 0;
}