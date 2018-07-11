/*
 *
 
 핵심정리

 1. typedef : 타입에 대해서 별칭(alias)를 만들 때 사용.
 2. using : 타입 뿐 아니라 template의 별칭(alias)도 만들 수 있다. 
 
 *
 */

//typedef int DWORD;
//typedef void(*F)(int);

//typedef와 다르게 템플릿에도 별칭을 설정 할 수 있다.
using DWORD = int; //앞으로 DWORD는 int랑 같다.
using F = void(*)(int); //리턴값이 void이고 파라미터가 int인 함수랑 F가 같다.


int main()
{
	DWORD n;
	F f;
}
