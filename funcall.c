#include <stdio.h>

int y = 30;
void ModifyValue(int *a)
{   
    printf("Y is Global variable y = %d\n", y);
    printf("Address of pointer a = %d\n", &a);
    *a = 15;
}

int testFunction(){
    int x = 10; 
    printf("Call by reference : \n");
    printf("Y is Global variable y = %d\n",y);
    printf("testFunction: Before Modify function x = %d\n",x);

    printf("Address of x %d\n", &x);
    ModifyValue(&x);
    printf("testFunction: After Modify function x = %d\n", x);
    return 0;
}