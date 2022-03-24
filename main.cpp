//Minecraft Animals

#include<iostream>
#include"Animals.h"
#include"Cow.h"
#include"Chicken.h"
#include"Bee.h"
#include"Pig.h"
#include"Llama.h"

using namespace std;

int main(){
    
    system("cls");
    //health, legs, height, length, width, diet, drop, damage, wings, antennas 
    Cow cow1(100, 4, 2, 1, 1, "Wheat", "Meat and leather");
    cow1.showCow();

    Chicken chicken1(20, 2, 1, 0.5, 0.5, "Wheat seeds", "Chicken, egg and feather", 2);
    chicken1.showChicken();

    Bee bee1(10, 6, 0.5, 0.5, 0.5, "Flowers", 2, 2, 2);
    bee1.showBee();

    Pig pig1(60, 4, 1, 1, 1, "Carrot", "Meat");
    pig1.showPig();

    Llama llama1(80, 4, 2, 1, 1, "Wheat", 3);
    llama1.showLlama();

}