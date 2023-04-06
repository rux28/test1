#include <iostream>
#include "ex2baza.h"
//#include "Ex2derivata.h"
using namespace std;

class Ex1baza
{
protected:
    double x, y;
public:
    void citirex()
    {
        cin >> x;
    }
    void citirey()
    {
        cin >> y;
    }
    double adunare()
    {
        return x + y;
    }
    double scaderexy()
    {
        return x - y;
    }
    double inmultire()
    {
        return x * y;
    }
    double impartirexy()
    {
        return x / y;
    }
};

class Ex1derivata : public Ex1baza
{
public:
    double scadereyx()
    {
        return y - x;
    }
    double impartireyx()
    {
        return y / x;
    }
    double medie()
    {
        return (x + y)/2;
    }
};





int main()
{


    return 0;
}