/*
 *
 
 핵심정리
 1. 함수 호출시 인자를 전달하지 않으면 딜포트 값이 적용된다.
 2. 주의사항 2가지
 - 함수의 마지막 파라미터부터 차례대로 지정해야 한다.
 - 함수를 선언과 구현으로 분리할 경우 함수 선언에만 디폴트 값을 표시해야 한다.
 
 *
 */

void setAlarm(int h, int m = 0, int s = 0)
{

}

int main()
{
	setAlarm(3,4,5);

	setAlarm(3,0,0);

	setAlarm(3,0); //3번째 parameter가 없어도 default parameter때문에 가능

	setAlarm(3);
	
	setAlarm(); //error 첫번째 인자는 default parameter가 없다.

}
