//
// Created by Tibi on 4/6/2023.
//

#ifndef TEST1_EX2BAZA_H
#define TEST1_EX2BAZA_H
#include <iostream>
using namespace std;

class Ex2baza{
protected:
    int n, a[100];
    void citire()
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
    }
    void afis_incep_sf()
    {
        for(int i = 1; i <= n; i++)
            cout << a[i] << " ";
    }
};


#endif //TEST1_EX2BAZA_H
