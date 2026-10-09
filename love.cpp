#include <iostream>
#include <thread>
#include <string>
#include <chrono>

using namespace std;

void kouro(string yuri) {
    cout << yuri << "、愛してる。" << endl;
}


int main() { 
    string yuri = "ゆたん"; 
    int n = 10; 
    for(int i = 0; i < n; i++){ 
        kouro(yuri); 
        this_thread::sleep_for(chrono::seconds(1)); 
    } 
    return 0; 
}