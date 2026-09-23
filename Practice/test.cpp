#include <iostream>
#include <set>

int main(){
    std::set<int> s;
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);
    
    std::cout << s.count(1) << std::endl;
    

    return 0;
}