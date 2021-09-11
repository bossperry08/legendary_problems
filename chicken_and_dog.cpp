#include <iostream>
using namespace std;

//Defining some constants
const int numLeg1d = 4, numLeg1c = 2;

int main()
{
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
                cout << "Chickens: " << chick << endl;
                cout << "Dogs: " << dog << endl;
                break;
            }
        }
        if((dog != 0) && (chick != 0))
        {
            break;
        }
    }

    return 0;
}