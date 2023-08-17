#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    printf("Demonstration of commond line");

    int No1 = atoi(argv[1]);
    int No2 = atoi(argv[2]);

    int Ans = No1 + No2;
    printf("Addition Is : %d",Ans);
   

    return 0;
}