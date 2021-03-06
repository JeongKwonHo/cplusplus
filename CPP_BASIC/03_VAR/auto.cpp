/*
 *
 
 1.auto
 - 우변의 수식의 결과를 가지고 좌변의 타입을 결정.
 - 반드시 초기값이 필요하다.
 - 컴파일 시간에 타입이 결정하므로 실행 시간의 성능 저하는 없다.

 2. decltype(n1) d1;
 - ()안에 있는 변수의 타입을 조사.
 - 초기값이 없어도 된다.

 * 
 */
int main()
{

	int x[3] = {1,2,3};

	//auto 결정은 컴파일 시간. 성능상 오버헤드는 없다.
	auto n1 = x[0];	//우변의 수식을 계산하여 좌변의 타입을 결정.
	//auto n2; 	//타입추론 불가능 error.
	
	
	decltype(n1) d1 = n1;	//괄호 안에 있는 것과 동일한 타입으로 만들어달라.
	decltype(n1) d2; //ok, 초기값이 없어도 사용 할 수 있다.
	
	decltype(x[0]) d3; //error 왜인지는 나중에 생각하자. c++ 공부를 많이하고....

}

