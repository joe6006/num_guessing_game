#include <iostream>
#include <array>
#include <random>
#include <algorithm>

int main(){

    //first we use the seed to initialize using random_device yourfunctionname
    std::random_device rd;
    //this stands for  Mersenne Twister a psuedo random number generator 
    std::mt19937 gen(rd());

// adding your range
std::cout<< "pick your range"<<std::endl;
int num1, num2;
std::cout<< "minimum(no less than 0): "<<std::endl;
std::cin>>num1 ;
std::cout<<"maximum(up to 99):"<<std::endl; 
std::cin>>num2;

//user input into the dist function
std::uniform_int_distribution<int> dist(num1,num2);

//how many random numbers to generate
std::cout<<"how many would you like(no more than 10)"<<std::endl;
int generate;
std::cin>>generate;

for(int i = 0; i<=generate; i++){
    int number = dist(gen);
    std::cout<<"random number "<< number << std::endl;

};


    return 0;
}