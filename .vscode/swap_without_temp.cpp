#include <iostream>
#include <cstdint>

// Function to perform byte swap on a 32-bit unsigned integer
void swap(int* a, int* b)
{
    if (a!=b){
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
    
}
int main() {
    int a = 6;
    int b = 4;
    swap(&a,&b);
    std::cout <<"a: "<<a<<std::endl;
    std::cout <<"b: "<<b<<std::endl;
    return 0;
}