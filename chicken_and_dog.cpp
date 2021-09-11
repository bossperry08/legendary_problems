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
    int dog = 0, chick = 0;
    //Can cong cu phu hop cho phuong phap gia thiet tam
    for(int dog_img = 0; dog_img <= 36; dog_img++)
    {
        for(int chick_img = 0; chick_img <= 36; chick_img++)
        {
            int sum_dc = chick_img + dog_img;
            int sum_leg = chick_img * numLeg1c + dog_img * numLeg1d;
            if((sum_dc == 36) && (sum_leg == 100))
            {
                chick = chick_img;
                dog = dog_img;
                cout << "So ga: " << chick <<  " con" << endl;
                cout << "So cho: " << dog <<  " con" << endl;
                break;
            }
        }
        if((dog != 0) && (chick != 0))
        {
            break;
        }
    }
    cout << "Cam on da su dung chuong trinh." << endl;

    return 0;
}