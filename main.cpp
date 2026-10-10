#include <iostream>
#include <array>
#include <random>
#include <algorithm>

int main(){
    //was  gonna use this but found out about random function
    std::array<int, 10> numbers= {0,1,2,3,4,5,6,7,8,9};

    //first we use the seed to initialize using random_device yourfunctionname
    std::random_device rd;
    //this stands for  Mersenne Twister a psuedo random number generator 
    std::mt19937 gen(rd());
// adding your range


std::uniform_int_distribution<int> dist(0,99);

int number = dist(gen);
std::cout<<"random number"<< " "<<number;

    return 0;
}