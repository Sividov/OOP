#include <iostream>
using namespace std;
#include "time.cpp"


int main()
{
    Time t1(2, 50, 55);
    t1.print();
    Time t2(1,40,15);
    t2.print();
    Time t3 = t1.add(t2);
    t3.print();
    Time t4 = t1.add (t3);
    t4.print();
}


