Readme file for hw#1 program

# Purpose:
This homework is intended to study the measurement of FLOPs/sec and memory access patterns in different configurations.

# Usage:

srun ./computing_sum [iteration]
srun ./structured_mem [iteration]
srun ./unstructured_mem [iteration]

If the user gives an argument "iteration" on the command line,
the program will use that value, interpreted as an integer, and calculate a summation number up to "iteration" times.

The program will first measure the current time, then run "iteration" number of times to formulate the sum, then measure the current time again, then compute and print the difference in time and the sum.

# Default build instructions:

% cd chrono_timer     # contains the source file and CMakeLists.txt file

% mkdir build

% cd build

% cmake ../           # cmake generates lots of output
OR
% cmake ../ -DCMAKE_CXX_FLAGS_RELEASE="-O0" # for -\O0 optimization

% make                # to build the program

# Additional build options

Optimization level: as written in the CMakeLists.txt file, the gcc/g++ 
compiler is provided an optimization flag of -O0, which will effectively
disable most optimizations.

To change this behavior, uncomment the line in CMakeLists.txt:
  
   #set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

and comment out the line:
   set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O0")

and then repeat the Default build instructions above, but first delete
everything (\rm -rf) in the build directory (cmake retains a memory of
previous runs and that memory can sometimes be unpredictable..you're best
off just deleting everything and starting fresh if you change anything
in the CMakeLists.txt file)

# EOF
