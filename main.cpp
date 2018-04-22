#include <iostream>

using namespace std;
template <class T>
class tumi{
    public:
        tumi(T x){
            cout << x << " is not a character" << endl;
        }
};
template <> //
class tumi<char>{
    public:
        tumi(char x){
            cout << x << " is definite a character" << endl;
        }
};
int main()
{
    tumi<int> tobj1(2);
    tumi<double> tobj2(2.67);
    tumi<char> tobj3('w'); // it works like an overloaded function , different type of intput will go to different function
    return 0;
}
