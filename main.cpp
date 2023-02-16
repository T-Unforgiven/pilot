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
    std::cin >> a;
    std::cout << bitcounter(a);
    auto* Array = new double [a];
    for(int i = 0; i < a; i++)
        std::cin >> Array[i];
    std::cout << maximum(Array, a);
    std::cout << minimum(Array, a);
    return 0;
}
