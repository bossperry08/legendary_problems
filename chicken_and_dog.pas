Program chicken_and_dog;
Uses Crt;
const numLeg1d = 4;
const numLeg1c = 2;
var dog_img, dog, chick, chick_img, sum_leg, sum_dc : integer;
Begin
dog_img := 0;
while dog_img <= 36 do 
Begin
chick_img := 0;
while chick_img <= 36 do
Begin
sum_dc := dog_img + chick_img;
sum_leg := dog_img * numLeg1d + chick_img * numLeg1c;
if (sum_leg = 100) and (sum_dc = 36) then
Begin
dog := dog_img;
chick := chick_img;
writeln('Chickens: ', chick);
writeln('Dogs: ', dog);
break;
End;
chick_img := chick_img + 1;
if (dog <> 0) and (chick <> 0) then break;
End;
dog_img := dog_img + 1;
End;
End.


