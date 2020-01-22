#include <iostream>
#include <cstdio>

using namespace std;

class Fraction{
    int n = 0;
    int d = 1;
    int common_factor = 1;
public: 
    void setnum(int value) {n = value;}
    void setden(int value) {d = value;}
    void print() {printf("The fraction value is %d/%d \n", n, d);}
    void simplify() {for (int i = n; i>1; i--){
        if ((n%i == 0) && (d%i == 0)){
            common_factor = i;
        }
    }
    n /= common_factor;
    d /= common_factor;
    }
};

int main(){
    int n = 8;
    int d = 10;
    Fraction myfrac;

    myfrac.setnum(n);
    myfrac.setden(d);
    myfrac.print();
    myfrac.simplify();
    myfrac.print();

    return 0;
}

