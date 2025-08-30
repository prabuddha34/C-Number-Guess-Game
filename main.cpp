#include<iostream>
#include<cmath>
#include<ctime>
int main()
{

//Number Guessing Game

std::cout << "Welcome to the Number Guessing Game!" << std::endl;
   int guess;
   srand(time(0));
   int random=rand()%100+1;
   int count=0;
    while(true){
    
    std::cout << "Enter Your Guess (1-100)" <<std:: endl;
    std::cin >> guess;
    if(guess ==random){
    std::cout << "You find it" <<std:: endl;
    break;
    count++;
    }
    if(guess>random){
    std::cout << "It's higher" <<std:: endl;
    count++;
    }
    if(guess<random) {
    std::cout<<"It's lower"<<std::endl;
    count++;
    }
    }
    std::cout << "Total Tries:-"<<count <<std:: endl;
    
    return 0;
}
