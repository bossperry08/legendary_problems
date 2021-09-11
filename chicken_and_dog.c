#include <stdio.h>
#include <string.h>

//Defining some constants
const int numLeg1d = 4;
const int numLeg1c = 2;

int main()
{
    int dog = 0, chick = 0, sum_dc, sum_leg;
    for(int dog_img = 0; dog_img <= 36; dog_img++)
    {
        for(int chick_img = 0; chick_img <= 36; chick_img++)
        {
            sum_dc = dog_img + chick_img;
            sum_leg = dog_img * numLeg1d + chick_img * numLeg1c;
            if((sum_dc == 36) && (sum_leg == 100))
            {
                dog = dog_img, chick = chick_img;
                printf("%s", "Chickens: "); printf("%i", chick); printf("%c", '\n');
                printf("%s", "Dogs: "); printf("%i", dog); printf("%c", '\n');
                break;
            }
        }
        if(dog != 0 && chick != 0)
        {
            break;
        }
    }

    return 0;
}
