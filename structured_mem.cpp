//
// (C) 2021, E. Wes Bethel
// chrono_timer: simple example showing how to use the std::chrono library
//  	to do elapsed time measurement
// usage:
// 	chrono_timer [secs]
//

#include <iostream>
#include <vector>
#include <chrono>
#include <unistd.h>

int
main (int ac, char *av[])
{
    unsigned long long iteration = 0, sum = 0;

    if (ac > 1)  // if user entered a value after the prog name, parse it
        iteration = std::atoi(av[1]);

    std::vector<unsigned long long> container;

    for(unsigned int i=0; i<iteration;i++){
        container.push_back(i);
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int j=0; j<container.size();j++){
        sum += container.at(j);
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time is : " << elapsed.count() << " sum of " << iteration << " iteration is " << sum << std::endl;
    return 1;
}

