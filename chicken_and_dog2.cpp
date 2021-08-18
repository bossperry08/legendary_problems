#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
//Defining some constants
const int SOCHANGA 2;
const int SOCHANCHO 4;

int main()
{
  int tongsochanga, tongsochancho, tongsoga, tongsocho, tongsochan, tongsocon;
  bool exit = false;
  while (!exit)
  {
    cout << "Moi nhap tong so con (la so nguyen duong nho hon 10000): ";
    cin >> tongsocon;
    cout << "Moi nhap tong so chan (la so nguyen duong nho hon 10000): ";
    cin >> tongsochan;
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "Gia tri nhap vao khong hop le. Xin moi nhap lai." << endl;
        continue;
    }
    else
    {
        if((tongsocon > 0) && (tongsocon < 10000) && (tongsochan > 0) && (tongsochan < 10000))
        {
            for (int sochogiasu = 1; sochogiasu < tongsocon; sochogiasu++) {
                for (int sogagiasu = 1; sogagiasu < tongsocon; sogagiasu++) {
                    if ((sochogiasu + sogagiasu == tongsocon) && (sogagiasu * SOCHANGA + sochogiasu * SOCHANCHO == tongsochan)) {
                        tongsoga = sogagiasu;
                        tongsocho = sochogiasu;
                        exit = true;
                        break;
                    }
                }
            }
            cout << "So ga: " << tongsoga << endl;
            cout << "So cho: " << tongsocho << endl;
        }
        else
        {
            cout << "Gia tri ban nhap vao qua lon hoac qua nho. Xin moi nhap lai." << endl;
            continue;
        }
    }
  }



  return 0;
}
