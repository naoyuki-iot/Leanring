#include <ctime> //コンパイラによっては不要
#include <cstdlib> //コンパイラによっては不要
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL)); //乱数の種を設定
    int lucky = rand() % 10; //乱数の生成(0~9)

    cout << "Today's lucky number is " << lucky << endl;
}