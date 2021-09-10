let numLeg1d = 4; let numLeg1c = 2;
let dog_img = 0; let dog = 0; let chick = 0;
while(dog_img <= 36)
{
  let chick_img = 0;
  while(chick_img <= 36)
  {
    let sum_leg = dog_img * numLeg1d + chick_img * numLeg1c;
    let sum_dc = dog_img + chick_img;
    if(sum_leg == 100 && sum_dc == 36)
    {
      let dog = dog_img; let chick = chick_img;
      console.log("Chickens: ", chick);
      console.log("Dogs: ", dog);
      break;
    }
    ++chick_img;
    if(dog != 0 && chick != 0)
    {
      break;
    }
  }
  ++dog_img;
}
console.log("Thanks for trying my programme!!")