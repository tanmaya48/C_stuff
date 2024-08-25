#include <stdio.h>
#include <iostream>



void add_arrays(long* data, long delta, int size){
    for(int i=0;i<size;i++){
        data[i]+=delta;
    }
}


void add_unroll(long* data, long delta, int size){
    switch (size){
        case 10: data[9]+=delta;
        case 9: data[8]+=delta;
        case 8: data[7]+=delta;
        case 7: data[6]+=delta;
        case 6: data[5]+=delta;
        case 5: data[4]+=delta;
        case 4: data[3]+=delta;
        case 3: data[2]+=delta;
        case 2: data[1]+=delta;
        case 1: data[0]+=delta;
    }
}




int main()
{
    long data[] = {10,10,10,
                    10,10,10,
                    10,10,10,
                    10,10,10};
    long delta = 2;
    long num;
    std::cin >> num;
    //num = 6 ;
    for (int i=0;i<100000000;i++) {
        //add_unroll(data,delta,num);
        add_arrays(data,delta,num);
    }
    for (int i=0;i<num;i++) std::cout << data[i];

}
