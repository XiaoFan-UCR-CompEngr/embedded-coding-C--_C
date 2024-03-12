#include <iostream>
#include <cstdint>

// Function to perform byte swap on a 32-bit unsigned integer
uint32_t byteset(uint32_t num,uint8_t position) {
    
    uint32_t temp = 0x1;
    num |= temp << position;
    return num;
}
uint32_t byteReset(uint32_t num,uint8_t position) {
    
    uint32_t temp = 0x1;
    num &= ~(temp << position);
    return num;
}
int main() {
    uint32_t current = 0xffff;
    uint8_t position = 1;
    uint32_t swapped = byteReset(current,position);
    std::cout << "Current: 0x" << std::hex<< current << std::endl;
    std::cout << "Swapped: 0x" << std::hex<< swapped << std::endl;
    return 0;
}