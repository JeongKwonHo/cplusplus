#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10,9);

    v.resize(7);

    cout << v.size() << endl;       // 7
    cout << v.capacity() << endl;   // 10
    
    cout << v[8] << endl;
    
    // DBConnect : 생성자에서 DB 접속
    vector<DBCoonect> v2(10);

    v2.resize(7);   // 메모리는 제거하지 않지만
                    // 줄어든 객체의 소멸자는 호출해야 한다.
    
    v2.resize(8);   // 새로운 객체에 대한 메모리는 있다.
                    // 하지만 생성자를 호출해서
                    // 다시 DB 접속을 해야한다.
    return 0;
}
