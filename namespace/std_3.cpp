#include <cstdio>


// cstdio 의 원리
// #include <stdio.h> // printf가 전역에 있따.
//
// namespace std
// {
// 		using ::printf;
// }
//

int main()
{
	printf("Hello\n");
	std::printf("Hello\n");
}
