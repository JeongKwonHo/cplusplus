#include <iostream>
using namespace std;

struct stream_buf
{
    stream_buf(size_t sz)
    {
        cout << "stream_buf" << endl;
    }

};

struct stream
{
    stream(stream_buf& buf)
    {
        cout << "stream : using stream_buf" << endl;
    }

};

// 코딩 상으로는 buf(sz)가 먼저지만, 실제로는 stream(buf)가 먼저.
// 버퍼를 가지고 있는 stream
struct mystream : public stream
{
    stream_buf buf;
public:
    mystream(int sz) : buf(sz), stream(buf) {}

};

int main()
{
    stream_buf buf(1024);
    stream st(buf);
}
