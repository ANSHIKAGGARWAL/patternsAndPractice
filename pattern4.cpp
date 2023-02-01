/*PATTERN to be printed is 
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/
                      //PROGRAM SOLUTION
# include <iostream>
int main() {
    int test_cases;
    std::cout<<"Enter the number of test cases \t";
    std::cin>>test_cases;
    while(test_cases--) {
        int number,i,j;
        char alphabet='A';
        std::cout<<"Enter the number to build a pyramid \t";
        std::cin>>number;
        for(i=1;i<=number;i++)
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)
            {
                std::cout<<alphabet;
                alphabet++;
            }
        }
        std::cout<<"\n"; }
    return 0; }
