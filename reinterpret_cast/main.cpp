#include <stdio.h>
#include <iostream>



void add_arrays(int* data, int* delta, int size){
    for(int i=0;i<size;i++){
        data[2*i]+=delta[0];
        data[2*i+1]+=delta[1];
    }
}

void add_re(int* data, int* delta, int size){
    long* long_data = reinterpret_cast<long*>(data);
    long* long_delta = reinterpret_cast<long*>(delta);
    for(int i=0;i<size;i++){
        long_data[i]+=long_delta[0];
    }
}



int main()
{
    int data[] = {10,10,10,10,10,10};
    int delta[] = {2,4};
    for (int i=0;i<100000000;i++)
        add_arrays(data,delta,3);
        //add_re(data,delta,3);
    for (int i=0;i<6;i++){
        std::cout << data[i] << std::endl;
    }

}
