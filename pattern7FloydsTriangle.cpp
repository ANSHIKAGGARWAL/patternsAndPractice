/*PATTERN to be printed
1
23
456
78910

              THIS IS CALLED AS FLOYD'S TRIANGLE    */
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
        for(i=1;i<=number;i++)
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)
            {
                std::cout << initial_num ;
                initial_num++;
            }
        }
        std::cout<<"\n";            }
    return 0; }
