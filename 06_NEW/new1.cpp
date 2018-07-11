/*
 *
 핵심 정리
 
 1. 동적 메모리 할당이 필요한 이유
 - 실행 시간에 결정된 크기 만큼의 메모리를 할당하고 싶을 때
 - 자동으로 메모리를 해지 하지 말고, 사용자가 원하는 때에 메모리를 해지하고 싶을때
 
 2. C언어
 - malloc으로 할당하고 free로 해지한다.
 - malloc 사용시 주소를 원하는 타입으로 캐스팅 해야 한다.

 3. C++
 - new로 할당하고 delete로 해지한다.
 - 원하는 타입으로 주소를 리턴하므로 캐스팅할 필요가 없다.
 - 배열로 할당한 경우 delete[]로 해지한다.
 - malloc은 생성자를 호출하지 않지만, new는 생성자를 호출한다.
 
 4. undefined(미정의 동작)

 *
 */
#include <iostream>
#include <cstdlib>

int main()
{
    int cnt=0;

    std::cout << "학생 수 ? >> ";
    std::cin >> cnt;

    //학생 수 만큼의 메모리 할당이 필요하다.
    int jumsu[cnt]; // g++ ok
                    // vc++ error
    
    int* jumsu = (int*)malloc(sizeof(int)*cnt);
    
    free(p);
}
