#include "PlaceFlowers.h"

PlaceFlowers::PlaceFlowers()
{

}

PlaceFlowers::PlaceFlowers(vector<int> flowerbed)
{
    this->flowerbed=flowerbed;
}

void PlaceFlowers::setFlowerbed(vector<int> flowerbed)
{
    this->flowerbed=flowerbed;
}

vector<int> PlaceFlowers::getFlowerbed()
{
    return flowerbed;
}

int PlaceFlowers::countPlace()
{
    int num=0,size=flowerbed.size();

    if(flowerbed[0]==0&&flowerbed[1]==0)
    {
        flowerbed[0]=1;
        num++;
    }
        

    for(int i = 1;i < size-1; i++)
    {
        if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0)
        {
            flowerbed[i]=1;
            num++;
        }
            
    }
    if(flowerbed[size-2]==0&&flowerbed[size-1]==0)
    {
        flowerbed[size-1]=1;
        num++;
    }
    return num;
}

PlaceFlowers::~PlaceFlowers()
{

}


