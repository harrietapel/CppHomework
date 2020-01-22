#include <iostream>
#include <cstdio>

using namespace std;

class Fraction{
    int n = 0;
    int d = 1;
public: 
    void setnum(int value) {n = value;}
    void setden(int value) {d = value;}
};

int main(){
    int n = 4;
    int d = 5;
    Fraction myfrac;

    myfrac.setnum(n);
    myfrac.setden(d);

    return 0;
}

