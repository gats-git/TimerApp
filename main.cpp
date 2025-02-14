#include <iostream>
#include <ctime>
#include <iomanip>
#include <thread>
#include <chrono>

void displayTimer();

int main()
{
    int min;

    displayTimer();

    return 0;
}

void displayTimer(){
    int seconds = 0;

    std::cout <<"Seconds: ";    
    std::cin >> seconds;

    while (seconds > 0)
    {
        int h = seconds/3600;
        int m = (seconds % 3600) / 60;
        int s = seconds % 60;

        std::cout << "\r" 
        << std::setw(2) << std::setfill('0') << h << ":" 
        << std::setw(2) << std::setfill('0') << m <<  ":" 
        << std::setw(2) << std::setfill('0') << s 
        << std::flush;

        std::this_thread::sleep_for(std::chrono::seconds(1));  // Wait 1 second

        seconds--; //Decrement seconds counter
    }

    std::cout << "\r" << "Time`s up!"<< std::endl;
    
}