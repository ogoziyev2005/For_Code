//
// Created by Otabek Goziyev on 18/09/24.
//
#include <iostream>
using namespace std;
int main() {
    int winter,raining;
    cin>>winter;
    cin>>raining;

    if(winter==1) {
        if (raining==1)
            cout<<"Bus";
        else
            cout<<"Bike";
    }else
            cout<<"Walk";
return 0;
    }

