
void foo()
{
}

namespace Audio
{
	using ::foo;	//전역 공간에 있는 foo를 이름만 가져오겠다.

	void init() {}
}

int main()
{
	Audio::init();	//ok
	foo();	//ok

	Audio::foo();  //?

}

