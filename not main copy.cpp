#include <iostream>

// this assumes that the armor is made of steel, the bullet is copper through and through and the bullet is hitting at a 90 degree angle

// this is the formula that I am going to use
// A*L2*D2 = A*L*D1
// where A = the area of the bullet and the area of the hole in the armor
// L2 is the penetration depth
// D2 is the density of the wall
// D1 is the density of the bullet
// L is the lenght of the bullet
// this formula will not account for a lot of factors, such as if the bullet bounces off, different angles, the elasticity of the material etc
// it is a start


int main() {

    float armor, caliber, speed;

    // density of copper in g/mL
    float copperDensity = 8.96;

    //density of Steel in g/mL
    float SteelDensity = 7.85;

    //in grams
    float bulletWeight[] = {40, 700};

    std::cout << "How thick is the Steel Armor in milimeters: ";
    std::cin >> armor;
    std::cout << "What is the caliber of the bullet pick from the options below:\n1. .22 LR\n2. .50 BMG\npick option: ";
    std::cin >> caliber;
    std::cout << "how fast is the bullet traveling in meters per second: ";
    std::cin >> speed;
    






    return 0;
}