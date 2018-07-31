#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    std::reverse(std::begin(v), std::end(v));

    for(auto& n : v)
    {
        std::cout<<n<<",";
    }
   
    std::cout<<std::endl;

    std::sort(std::begin(v), std::end(v));

    for(auto& n: v)
    {
        std::cout<<n<<",";
    }
    std::cout<<std::endl;

}
