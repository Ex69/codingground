#include <iostream>

using namespace std;

int main()
{

  int mala1;
  int mala2;
  int mala3;
  
  cout << "ievadi 1 malas garumu"<< endl;
  cin >> mala1;
  cout << "ievadi 2 malas garumu"<< endl;
  cin >> mala2;
  cout << "ievadi 3 malas garumu"<< endl;
  cin >> mala3;
  
   if (mala1>mala2+mala3 && mala2>mala1+mala3 && mala3>mala1+mala2){
      cout << "Tads trijsturis nepstav !"<< endl;
   }else{
      cout << "Pareizi! Tads trijsturis pastav!"<< endl;
   }
  
  
  
  
  
   return 0;
}

