#include <iostream>
#include <ctime>
#include <iomanip>

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
        std::cout << "\r" << std::setw(3) << std::setfill('0')<< seconds << std::flush;
        //Capture current clock time an set stop time to 1 second later
        clock_t stop = clock() + CLOCKS_PER_SEC;

        //Wait until 1 second has passed
        while(clock() < stop){ } //Busy wait Loops

        seconds--; //Decrement seconds counter
    }

    
}