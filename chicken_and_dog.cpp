#include <iostream>
using namespace std;

//Defining some constants
const int numLeg1d = 4, numLeg1c = 2;

int main()
{
    cout << "Giai bai toan dan gian ga va cho bang C++." << '\n';
    cout << "De bai: " << '\n';
    cout << "Vua ga vua cho" << '\n';
    cout << "Bo lai cho tron" << '\n';
    cout << "Ba muoi sau con" << '\n';
    cout << "Mot tram chan chan" << '\n';
    cout << "Yeu cau: Tinh so ga va so cho." << '\n';
    cout << "Phuong phap giai: Su dung 2 vong lap for long nhau, gia su tam." << '\n';
    cout << "Dap an: " << endl;
    int dog = 36, chick = 0;
    //Can cong cu phu hop cho phuong phap gia thiet tam
    for(;;dog--, chick++)
    {
        if((dog + chick == 36) && ((dog * numLeg1d) + (chick * numLeg1c) == 100))
        {
            break;
        }
    }
    cout << "So ga: " << chick << endl;
    cout << "So cho: " << dog << endl;
    cout << "Cam on da su dung chuong trinh." << endl;

    return 0;
}
