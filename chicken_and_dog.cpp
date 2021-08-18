#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
//Defining some constants
const int sochan1ga = 2;
const int sochan1cho = 4;

int main()
{
    int tongsochanga, tongsochancho, tongsoga, tongsocho, tongsochan, tongsocon;
    sochanvaconnhapvao:
        cout << "Moi nhap tong so con (la so nguyen duong nho hon 10000):";
        cin >> tongsocon;
        cout << "Moi nhap tong so chan (la so nguyen duong nho hon 10000):";
        cin >> tongsochan;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Gia tri nhan vao khong hop ly. Xin moi nhap lai." << endl;
            goto sochanvaconnhapvao;
        }
        else
        {
            if((tongsocon > 0) && (tongsocon < 10000) && (tongsochan > 0) && (tongsochan < 10000))
            {
                for(int sochogiasu = tongsocon, sogagiasu = 0;sochogiasu <= tongsocon, sochogiasu >= 0, sogagiasu <= tongsocon, sogagiasu >= 0; sochogiasu--, sogagiasu++)
                {
                    tongsochancho = sochogiasu * sochan1cho;
                    tongsochanga = sogagiasu * sochan1ga;
                    if((sochogiasu + sogagiasu == tongsocon) && (tongsochancho + tongsochanga == tongsochan))
                    {
                        tongsoga = sogagiasu;
                        tongsocho = sochogiasu;
                        break;
                    }
                }
                cout << "So ga: " << tongsoga << endl;
                cout << "So cho: " << tongsocho << endl;
            }
            else
            {
                cout << "Gia tri ban nhap vao qua lon hoac qua nho. Xin moi nhap lai." << endl;
                goto sochanvaconnhapvao;
            }
        }


    return 0;
}
