numLeg1d = 4
numLeg1c = 2
dog_img = dog = chick = 0
while dog_img <= 36:
    chick_img = 0
    while chick_img <= 36:
        sum_leg = dog_img * numLeg1d + chick_img * numLeg1c
        sum_dc = dog_img + chick_img
        if sum_leg == 100 and sum_dc == 36:
            dog, chick = dog_img, chick_img
            print("Chickens:", chick)
            print("Dogs:", dog)
            break
        chick_img += 1
        if dog != 0 and chick != 0:
            break
    dog_img += 1
        
        