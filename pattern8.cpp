/*PATTERN to be printed
12345
1234
123
12
1 */
                              //PROGRAM SOLUTION
#include <iostream>
int main() {
    int test_cases;
    std::cout<<"Enter the number of test cases \t";
    std::cin>>test_cases;
    while(test_cases--) {
        int number,i,j,initial_num=1;
        std::cout<<"Enter the number to build a pyramid \t";
        std::cin>>number;
        for(i=number;i>=1;i--)
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)
            {
                std::cout << j ;
            }
        }
        std::cout<<"\n";            }
    return 0; }
