//
// (C) 2021, E. Wes Bethel
// chrono_timer: simple example showing how to use the std::chrono library
//  	to do elapsed time measurement
// usage:
// 	chrono_timer [secs]
//

#include <iostream>
#include <chrono>
#include <unistd.h>

int
main (int ac, char *av[])
{
    unsigned long long sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<100000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 100000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<500000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 500000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<1000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 1000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<5000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 5000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<10000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 10000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<50000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 50000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<100000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 100000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time = std::chrono::high_resolution_clock::now();

    // sleep(sleep_secs);
    for(unsigned int i=0; i<500000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end_time - start_time;

    std::cout << " Elapsed time for 500000000 is : " << elapsed.count() << " sum is : " << sum << std::endl;
    return 0;
}

