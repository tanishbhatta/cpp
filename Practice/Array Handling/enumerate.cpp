#include <iostream>

namespace animals
{
    enum domestic
    {
        chicken, 
        dog, 
        cat, 
        elephant, 
        duck,
        snake,
        max_animals
    };
};


int main()
{
    int legs[animals::max_animals]{};
    legs[animals::chicken] = 2;
    legs[animals::dog] = 4;
    legs[animals::cat] = 4;
    legs[animals::elephant] = 4;
    legs[animals::duck] = 2;
    legs[animals::snake] = 0;

    std::cout << legs[animals::duck];
    return 0;
}