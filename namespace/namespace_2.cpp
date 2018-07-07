#include <stdio.h>

namespace Audio
{
	void init()
	{
		printf("Audio init\n");
	}
	void reset()
	{
		printf("Audio reset\n");
	}
}

using namespace Audio;

void init() 
{ 
	printf("global init\n");
}

int main()
{
	Audio::init();	//완전한 이름을 사용한 접근.

	//	using Audio::init; //using 선언 괄호 없음!!
	//	init();	//ok
	//	reset(); //error;
	
//	using namespace Audio;	//using 지시어 
	::init();
	reset();
	
	Audio::init();
}
