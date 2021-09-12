numLeg1d = 4
numLeg1c = 2
dog, chick = 36, 0
while True:
    if (dog + chick == 36) and (dog * numLeg1d + chick * numLeg1c == 100):
        break;
    dog -= 1
    chick +=1
print("So ga:", chick)
print("So cho:", dog)
        
        
