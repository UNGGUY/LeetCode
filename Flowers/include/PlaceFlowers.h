#pragma once
#include <iostream>
#include <vector>

using namespace std;

class PlaceFlowers
{
private:
    vector<int> flowerbed;
public:
    PlaceFlowers();
    PlaceFlowers(vector<int> flowerbed);
    void setFlowerbed(vector<int> flowerbed);
    vector<int> getFlowerbed();
    int countPlace();
    ~PlaceFlowers();
};

