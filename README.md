# C_stuff
Examples of weird things I tried in C/C++


## for_vs_case
Using an inverted switch case without break statements inplace of a for loop.
At -O0,1,2 the switch case is always faster. At -O3, the compiler optimizes the for loop such that it is faster for n>4 as per my testing.

## reinterpret_cast
In a scenario where a sequence of integer value pairs(i.e. set of 2d vectors) are to be operated on, reinterpret casting to long can decrease the number of operations from 2 to 1.
This has a very niche usecase but is always faster.
