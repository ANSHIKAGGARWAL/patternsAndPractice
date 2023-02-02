/*PATTERN to be printed
1234554321
1234  4321
123    321
12      21
1        1      */

                      //PATTERN PROGRAM
#include <iostream>
int main() {
    int test_cases;
    std::cout<<"Enter the number of test cases \t";
    std::cin>>test_cases;
    while(test_cases--) {
        int number,i,j,k,m,space=0,initial_num=1;
        std::cout<<"Enter the number to build a pyramid \t";
        std::cin>>number;
        for(i=number;i>=1;i--)//for number of rows
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)//for 1st loop from 12345to 12to 1
                std::cout << j ;
            
            for(m=1;m<=space;m++)//for number of spaces
                std::cout<< " ";
                
            for(k=number;k>=1;k--)///2nd loop from 54321 to 321to 1
                    std::cout<< k;
            number--;
            space+=2;
        }
        std::cout<<"\n";            }
    return 0; }
