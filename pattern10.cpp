/*PATTERN to be printed
*****
****
***
**
*   */
                    //PATTERN PROGRAM SOLUTION
#include <iostream>
int main() {
    int test_cases;
    std::cout<<"Enter the number of test cases \t";
    std::cin>>test_cases;
    while(test_cases--) {
        int number,i,j,k,m,space=8,initial_num=1;
        std::cout<<"Enter the number to build a pyramid \t";
        std::cin>>number;
        for(i=number;i>=1;i--)//for number of rows
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)
                std::cout << "*" ;
        }
        std::cout<<"\n";            }
    return 0; }
