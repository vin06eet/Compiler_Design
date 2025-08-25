/*
hello
this is to demonstrate \n 
// multiline comments
*/

#include <stdio.h>
#include <stdlib.h>

int add(int x, int y){
    return x + y;
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = add(a, b);
    printf("Sum of %d and %d is %d.", a, b, sum);
    return 0;
}