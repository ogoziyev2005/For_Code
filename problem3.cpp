//
// Created by Otabek Goziyev on 19/09/24.
//
//#include <iostream>
//using namespace std;
//int main(){
//int m,f;
//    cin>>m>>f;
//    if(m>1.70){
 //      cout<<"Short";
//    }else if(m<=1.70&&m>1.85) {
//cout<<"Normal";
//    }
//}
#include <iostream>
#include <string>

using namespace std;

string getHeightDescription(const string& sex, double height) {
 if (sex == "M") {
  if (height < 1.70) {
   return "Short";
  } else if (height >= 1.70 && height < 1.85) {
   return "Normal";
  } else {
   return "Tall";
  }
 } else if (sex == "F") {
  if (height < 1.60) {
   return "Short";
  } else if (height >= 1.60 && height < 1.75) {
   return "Normal";
  } else {
   return "Tall";
  }
 } else {
  return "Invalid sex";
 }
}

int main() {
 string sex;
 double height;


 cin >> sex;

 cin >> height;

 string description = getHeightDescription(sex, height);

 cout <<description << endl;

 return 0;
}
