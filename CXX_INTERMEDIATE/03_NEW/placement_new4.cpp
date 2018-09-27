#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10,0);

    v.resize(7);

    cout << v.size() << endl;       // 7
    cout << v.capacity() << endl;   // 10

    return 0;
}
