#include <iostream>
#include "PlaceFlowers.h"

using namespace std;

int main()
{
    vector<int> flowerbed={0,1,0,0,0,1,0,0};
    PlaceFlowers placeFlowers=PlaceFlowers();
    placeFlowers.setFlowerbed(flowerbed);

    cout << placeFlowers.countPlace() << endl;

    return 0;

}