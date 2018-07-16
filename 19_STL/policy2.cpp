#include <iostream>
#include <set>
#include <functional>

int main()
{
    std::set<int, std::less<int>> s; //tree
    std::set<int, std::greater<int>> s2; 
    s.insert(10);   //
    s.insert(30);
    s.insert(20);

    for(auto& n : s)
        std::cout<<n<<", ";
}

