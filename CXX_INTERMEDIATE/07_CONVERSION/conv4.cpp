#include <iostream>

using namespace std;

// RAII : Resource Acquision Is Initialization

class OFile
{
    FILE* file;
public:
    // explicit 생성자 : 인자가 한개인 생성자가 암시적 변환 허용을 막는다.
    explicit OFile(const char* filename, const char* mode ="wt")
    {
        file = fopen(filename, mode);
    }
    ~OFile()
    {
        fclose(file);
    }

    operator FILE*() 
    { 
        return file; 
    }
};

void foo(OFile f)
{

}

int main()
{
    OFile f("a.txt");
    foo(f);     //ok

    //error explicit 때문
    foo("hello");   // const char* => OFile로 암시적 변환 발생
                    // 변환 생성자의 위험성
    foo(static_cast<OFile>("hello")); 
}


