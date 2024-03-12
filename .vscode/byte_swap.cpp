#include <iostream>
#include <cstdint>

// Function to perform byte swap on a 32-bit unsigned integer
uint32_t byteSwap(uint32_t num) {
    return ((num >> 24) & 0xff) | // Move byte 3 to byte 0
           ((num << 8) & 0xff0000) | // Move byte 1 to byte 2
           ((num >> 8) & 0xff00) | // Move byte 2 to byte 1
           ((num << 24) & 0xff000000); // Move byte 0 to byte 3
}

int main() {
    uint32_t current = 0xCC8700FC;
    uint32_t swapped = byteSwap(current);
    std::cout << "Current: 0x" << std::hex << current << std::endl;
    std::cout << "Swapped: 0x" << std::hex << swapped << std::endl;
    return 0;
}
