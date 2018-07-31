
/*
 *
 
 1. 동일한 기반 클래스를 사용하는 클래스들을 처리하는 함수를 만들 수 있다.

 2. 동종을 보관하는 컨테이너를 만들 수 있다.

 ex) composite Pattern 폴더-파일

 *
 */
class Animal
{
public:
    int age;
};

class Cat : public Animal {};
class Dog : public Animal {};

void HappyNewYear(Animal* p)
{
    ++(p->age);
}

int main()
{
    Dog dog;
    HappyNewYear(&dog);

    Cat cat;
    HappyNewYear(&cat);
    
    std::vector<Dog*> v1;
    std::vector<Cat*> v2;
    std::vector<Animal*> v3;

}

