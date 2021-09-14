const numLeg1d = 4;
const numLeg1c = 2;
let chick = 0; 
let dog = 36;
while(true)
{
    if((chick + dog == 36) && (chick * numLeg1c + dog * numLeg1d == 100))
    {
        console.log("So ga: ", chick);
        console.log("So cho: ", dog);
        break;
    }
    ++chick;
    --dog;
}