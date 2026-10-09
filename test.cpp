#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "1" << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "2" << std::endl;

    return 0;
}