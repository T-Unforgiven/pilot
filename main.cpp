#include <iostream>
#include "bitset"

int bitcounter(int a){
    int count = 0;
    std::bitset<32> b(a);
    for(int i = 0; i < 32; i++){
        if(b[i] == 1)
            count++;
    }
    return count;
}

int main() {
    int a;
    std::cin >> a;
    std::cout << bitcounter(a);
    return 0;
}
