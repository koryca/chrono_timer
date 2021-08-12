Readme file for chrono_timer demo program

# Purpose:
chrono_timer is intended to demonstrate the use of the c++ std::chrono library
for doing time measurement.

# Usage:

chrono_timer [secs]

With no arguments, the program will sleep() for the default value of 2 
seconds. If the user gives an optional argument "secs" on the command line,
the program will use that value, interpreted as an integer, and sleep
that number of seconds.

The program will first measure the current time, then sleep() the indicated
number of seconds, then measure the current time again, the compute
and print the difference in time.

# Build instructions:

% cd chrono_timer     # contains the source file and CMakeLists.txt file

% mkdir build

% cd build

% cmake ../           # cmake generates lots of output

% make                # to build the program

# EOF
