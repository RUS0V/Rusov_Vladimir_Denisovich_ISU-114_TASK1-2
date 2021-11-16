#include <iostream>
#include <cmath>
using namespace std;

class Pair{
private:
    double first;
    double second;
public:
    Pair(double f, double s){
        first = f;
        second = s;
    }
    
    double getFirst(){ return first; }
    void setFirst(double f){ first = f; }
    
    double getSecond(){ return second; }
    void setSecond(double s){ second = s; }
    
};

class RightAngled: public Pair{
public:
    RightAngled(double f, double s):Pair(f,s){}
    
    double hypotenuse(){ return sqrt(getFirst()*getFirst()+getSecond()*getSecond()); }
    double square(){  return 1.0/2.0 * getFirst() * getSecond(); }
};

int main(){
    RightAngled r(13.0,22.0);
    cout << "Hypotenuse = " << r.hypotenuse() << endl;
    cout << "Square = " << r.square();
    return 0;
}
