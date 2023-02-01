/*PATTERN to print is
if n=4
then, output will be like

1111
2222
3333
4444    */
                        //PROGRAM SOLUTION

#include <stdio.h>
int main() {
    int test_cases;
    printf("Enter the number of test cases \t");
    scanf("%d",&test_cases);
    while(test_cases--) {
        int number,i,j;
        printf("Enter the number to build a pyramid \t");
        scanf("%d",&number);
        for(i=1;i<=number;i++)
        {
            printf("\n");
            for(j=1;j<=number;j++)
            {
                printf("%d",i);
            }
        }
        printf("\n");}
    return 0; }
