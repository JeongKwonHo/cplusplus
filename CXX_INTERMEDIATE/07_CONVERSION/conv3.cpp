#include <iostream>

using namespace std;

// RAII : Resource Acquision Is Initialization

class OFile
{
    FILE* file;
public:
    OFile(const char* filename, const char* mode ="wt")
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


int main()
{
    OFile f("a.txt");

    // C함수를 사용해서 작업
    
    fputs("hello", f);
    fprintf(f, "n=%d", 10); // OFile => FILE* 로 암시적 변환되면 가능.
                           // f.operator FILE*() 
            

    return 0;
}



/*
int main()
{
	FILE* f = fopen("a.txt", "wt");
	fputs("hello", f);
	if (....)
		return false;
	//fclose(f);
}
*/
