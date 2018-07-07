
#include <iostream>

int main()
{
	int n1 = 3.4; //가능은 하나 불안함. 암시적 형변환.
	int n2{ 3.4}; //error;


	char c1 { 100 }; //ok
	char c2 { 300 }; //error 1byte로는 표현 불가 즉, 데이터 손실.
	
	int n3{}; // 0으로 초기화

}
