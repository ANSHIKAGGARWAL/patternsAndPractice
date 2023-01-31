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
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0; }
