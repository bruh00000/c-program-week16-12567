#include <stdio.h>
int testPointer3(){
    int var = 10;
    int *intptr = &var;
    int **ptrptr = &intptr;

    printf("Var : %d\nAddress of var : %d\n",var,&var);
    printf("Intptr : %d\nAddress of intptr : %d\n",intptr,&intptr);
    printf("Var : %d\nValue oat intptr : %d\n",var,*intptr);
    printf("ptrtoptr : %d\nAddress of ptrtoptr : %d\n",ptrptr,&ptrptr);
}