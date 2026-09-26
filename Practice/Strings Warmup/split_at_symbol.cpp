#include <iostream>
#include <string>

int main() {
    std::string w{};
    std::cin >> w;
    int tillAt{}, atPos { static_cast<int>(w.find('@')) }, len { static_cast<int>(w.length()) };

    for (char c : w){
        if (c != '@') tillAt++;
        else break;
    }

    std::cout << w.substr(0, tillAt) << std::endl;
    std::cout << w.substr(atPos+1, (len-(tillAt+1))) << std::endl;


    return 0;
}