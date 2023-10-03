#include <thread>
#include <chrono>

void Pause_Some_Times(int int_second){
    std::this_thread::sleep_for(std::chrono::seconds(int_second));
}
