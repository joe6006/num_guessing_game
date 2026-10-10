#include <iostream>
#include <array>
#include <random>
#include <algorithm>

int main()
{

    // first we use the seed to initialize using random_device yourfunctionname
    std::random_device rd;
    // this stands for  Mersenne Twister a psuedo random number generator
    std::mt19937 gen(rd());

    // adding your range
    std::cout << "pick your range" << std::endl;
    int num1, num2;
    do{
    std::cout << "minimum(no less than 0): " << std::endl;
    std::cin >> num1;
    std::cout << "maximum(up to 99):" << std::endl;
    std::cin >> num2;
    }while(num1<0 || num2 > 99);

    // user input into the dist function
    std::uniform_int_distribution<int> dist(num1, num2);

    // how many random numbers to generate and make sure its 10 or less
    std::cout << "How many would you like(no more than 10)" << std::endl;
    int generate;
    do{
        std::cout<< "No more than 10 please"<<std::endl;
    std::cin>>generate;
    }while(generate > 10);


    for (int i = 1; i <= generate; i++)
    {
        int number = dist(gen);
        
        if(number < 10){
            std::cout<< "*"<<std::endl;
        }
        else {
            std::cout<< "**"<<std::endl;
            

        };
    
        int userGuess;
        std::cout<<"your guess?"<<" ";
        std::cin>>userGuess;
        if(number != userGuess){
            std::cout<< "Oops!"<<" "<< number<<std::endl;
        }else{
            std::cout<<"correct!"<<" It was "<< number<<std::endl;
        };

    };

    return 0;
}