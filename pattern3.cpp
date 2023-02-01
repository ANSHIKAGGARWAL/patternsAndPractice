# include <iostream>
int main() {
    int test_cases;
    std::cout<<"Enter the number of test cases \t";
    std::cin>>test_cases;
    while(test_cases--) {
        int number,i,j;
        std::cout<<"Enter the number to build a pyramid \t";
        std::cin>>number;
        for(i=1;i<=number;i++)
        {
            std::cout<<"\n";
            for(j=1;j<=i;j++)
            {
                std::cout<<i;
            }
        }
        std::cout<<"\n";
    }
    return 0; }
