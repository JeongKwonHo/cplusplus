#include <cstring>
#include <iostream>

class String
{
    int size;
    char* buff;

public:
    String(const char* s) 
    {
        size = strlen(s);

        buff = new char[size+1];
        strcpy(buff, s);
    }
    ~String()
    {
        delete[] buff;
    }

    String(String& s) : size(s.size)
    {
        buff = new char[size];
        
        strcpy(buff, s.buff);
    }
    
    String& operator=(String& s)
    {
        if(&s == this)
            return *this;
        size = s.size;

        delete[] buff;
        buff = new char[size+1];
        strcpy(buff, s.buff);
        return *this;

    }

    friend std::ostream& operator<<(std::ostream& os, String& s);
};

std::ostream& operator<<(std::ostream& os, String& s)
{
    os<< s.buff;
    return os;
}
int main()
{
    String s1 = "apple";
    String s2 = s1;

    std::cout<<s1<<std::endl;
    std::cout<<s2<<std::endl;
    return 0;
}

