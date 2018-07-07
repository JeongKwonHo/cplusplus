/*
 *
 1. 0
 - 정수 이지만 포인터로 암시적 형변환 가능하다.
 - 0이 포인터가 아닌 정수라는 점이 문제가 될 때가 있다. (템플릿, 오버로딩 등등....)

 2. nullptr
 - 포인터 타입의 0
 - int 타입으로 암시적 형 변환 되지 않는다.
 - bool 타입으로의 암시적 형 변환은 된다. 단, direct 초기화만 가능
 *
 */

int main()
{

	int* p1 = 0; //0은 정수 (int)
	int* p2 = 10; //error.

	int* p3 = nullptr;
	int n = nullptr; //error

	bool b1 = nullptr; //error. copy 초기화
	bool b2(nullptr); //ok.  direct 초기화
	bool b3{nullptr}; //ok

}
