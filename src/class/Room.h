#include <bits/stdc++.h>
#include "./enum.h"
using namespace std;

class Room
{
private:
public:
    double price;
    int ratings;
    RoomType roomType;

    Room(RoomType roomType, double price, int ratings)
    {
        this->roomType = roomType;
        this->price = price;
        this->ratings = ratings;
    }

    void getInfo()
    {
        cout << roomType << " " << price << " " << ratings << endl;
    }

    double getPrice()
    {
        return price;
    }

    int getRatings()
    {
        return ratings;
    }
};