#include <stdio.h>

int testPointer(){
    int x = 10;
    int *ptr;
    printf("Value of variable x = %d\n",x);
    printf("Address of variable x = %d\n",&x);
    ptr = &x;
    printf("Address of variable ptr = %d\n",&ptr);
    printf("Value of pointer x = %d\n",*ptr);
    *ptr = 20;
    printf("Value of pointer x = %d\n",*ptr);       
    return 0;
}