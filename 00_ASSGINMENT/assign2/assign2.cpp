
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

void print(vector<int>& v);

int main()
{

    vector<int> v;
    srand(static_cast<unsigned int>(time(0)));

    //1. 난수를 10개 구해서 v에 넣으세요.
    
    for(int i =0;i<10;i++)
        v.push_back(rand()%100);
    int cmd = 0;
    
    while(1)
    {
        cout<<"cmd 입력 : ";

        cin>>cmd;

    // 2. cmd가 1이면 v의 모든 내용을 화면에 출력해주세요.
    // 3. cmd가 2이면 v를 오름 차순으로 정렬 한 후 v의 내용을 화면 출력
    //    비교 정책으로 함수 객체를 사용
    // 4. cmd가 3이면 v를 내림차순으로 정렬한 후 v의 내용을 출력
    //    비교 정책으로 람다 표현식 사용
    // 5. cmd가 4이면 또 다른 숫자를 하나 입력
    //    해당 숫자가 vector에 있으면 제거한 후 vector를 다시 출력
    // 6. cmd가 5이면 또 다른 숫자를 하나 입력
    //    해당 숫자를 찾아서 0으로 변경한 후 vector를 다시 출력
    // 7. cmd가 6이면 v의 size를 20개로 늘린 후 v의 내용을 출력
        
        if(cmd == 0)
            break;

        if(cmd == 1)
        {
            print(v);
        }
        else if(cmd == 2)
        {
            greater<int> g;
            sort(begin(v), end(v), g);
            print(v);    
        }
        else if (cmd == 3)
        {
            sort(begin(v), end(v),
                [](int a, int b){ return a<b;}); 
            print(v);
        }
        else if (cmd == 4)
        {
            int num;

            cout<<"숫자 입력 : ";
            cin>> num;

            auto iter = v.begin();

            while(iter!=v.end())
            {
                if(*iter == num)
                {
                    v.erase(iter);
                    break;
                }
                ++iter;
            }
            print(v);
        }
        else if (cmd == 5)
        {
            int num;

            cout<<"숫자 입력 :";

            cin>>num;

            auto iter = v.begin();
            while(iter!=v.end())
            {
                if(*iter == num)
                {
                    *iter = 0;

                }
                ++iter;
            }
            print(v);
        }
        else if (cmd == 6)
        {
            v.resize(20);
            print(v);
        }
        else
            continue;

    }
}

void print(vector<int>& v)
{
    for(auto& n:v)
        cout<<n<<" ";
    cout<<endl;
}
