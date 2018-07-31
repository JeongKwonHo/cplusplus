

//void setAlarm(int h, int m = 0, int s=0)
/*
void setAlarm(int h, int m = 0, int s) //error default parameter는 끝에만 써야 한다.
void setAlarm(int h=0, int m, int s = 0)  //error 
{

}
*/

void setAlarm(int h, int m = 0, int s = 0);

int main()
{
	setAlarm(3,4); //함수 호출은 구현부가 아닌 선언부를 보고 호출하기 때문에 인자값이 부족하다고 error
	//구현부가 아닌 선언부에 표시해야 하고, 구현부에 표시해야 할 경우 주석처리를 한다.
}

void setAlarm(int h, int m /* = 0*/, int s /*= 0*/)  //error 
{

}
