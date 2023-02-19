#include <iostream>
#include "bitset"

void artificialswap(int& a, int& b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int bitcounterwithoutbitset(int a){
    int count = 0;
    int b = 0x01;
    for(int i = 0; i < 32; i++){
        auto d = ~b;
        auto c = a|d;
        if(c==-1)
            count++;
        b = b << 1;
    }
    return count;
}

int bitcounter(int a){
    int count = 0;
    std::bitset<32> b(a);
    for(int i = 0; i < 32; i++){
        if(b[i] == 1)
            count++;
    }
    return count;
}

double maximum(double a[], int n){
    double currentmax = a[0];
    for(int i = 0; i < n; i++)
        if(currentmax < a[i])
            currentmax = a[i];

    return currentmax;
}

double minimum(double a[], int n){
    double currentmin = a[0];
    for(int i = 0; i < n; i++)
        if(currentmin > a[i])
            currentmin = a[i];

    return currentmin;
}

int main() {
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    artificialswap(a, b);
    std::cout << a << b;
    return 0;
}
