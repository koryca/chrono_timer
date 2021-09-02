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

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time1 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<100000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time1 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed1 = end_time1 - start_time1;

    std::cout << " Elapsed time for 100000 is : " << elapsed1.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time2 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<500000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed2 = end_time2 - start_time2;

    std::cout << " Elapsed time for 500000 is : " << elapsed2.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time3 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<1000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time3 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed3 = end_time3 - start_time3;

    std::cout << " Elapsed time for 1000000 is : " << elapsed3.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time4 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<5000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time4 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed4 = end_time4 - start_time4;

    std::cout << " Elapsed time for 5000000 is : " << elapsed4.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time5 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<10000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time5 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed5 = end_time5 - start_time5;

    std::cout << " Elapsed time for 10000000 is : " << elapsed5.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time6 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<50000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time6 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed6 = end_time6 - start_time6;

    std::cout << " Elapsed time for 50000000 is : " << elapsed6.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time7 = std::chrono::high_resolution_clock::now();

    for(unsigned int i=0; i<100000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time7 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed7 = end_time7 - start_time7;

    std::cout << " Elapsed time for 100000000 is : " << elapsed7.count() << " sum is : " << sum << std::endl;

    sum = 0;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_time8 = std::chrono::high_resolution_clock::now();

    // sleep(sleep_secs);
    for(unsigned int i=0; i<500000000;i++){
        sum += i;
    }

    std::chrono::time_point<std::chrono::high_resolution_clock> end_time8 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed8 = end_time8 - start_time8;

    std::cout << " Elapsed time for 500000000 is : " << elapsed8.count() << " sum is : " << sum << std::endl;
    return 0;
}

