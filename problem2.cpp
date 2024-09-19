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
        cout<<"Bus";
        }else if(raining==1){
        cout<<"Walk";
            }else {
                cout<<"Bike";
            }
return 0;
    }

