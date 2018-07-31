#include <iostream>
#include <cstring>

class String
{
    char* buff;
    int size;
public:
    String(const char* s)
    {
        size = strlen(s);
        
        buff = new char[size+1];
        strcpy(buff, s);

    }
    
    ~String() { delete[] buff;}

    friend std::ostream& operator<<(std::ostream& os, const String& s);

};

std::ostream& operator<<(std::ostream& os, const String& s)
{
    os << s.buff;
    return os;
}

int main()
{
    String s1 = "hello";
    //String s1("hello");

    std::cout<<s1<<std::endl;
/*
    String s2 = s1; //복사 생성자

    String s3 = "world";
    s2 = s3;
*/
}

