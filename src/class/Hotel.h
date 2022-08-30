#include <bits/stdc++.h>
// #include "./Room.h"
using namespace std;

class compareByPrice
{
    public:
    bool operator()(Room r1, Room r2)
    {
        return r1.price < r2.price;
    }
};

class compareByRatings
{
    public:
    bool operator()(Room r1, Room r2)
    {
        return r1.ratings < r2.ratings;
    }
};

class Hotel
{
private:
    string address;
    int MAX_CAPACITY_HOTEL = 100;
    int capacity;

public:
    string name;
    vector<Room> rooms; // list of rooms

    Hotel(string name, string address, int capacity)
    {
        this->name = name;
        this->address = address;
        this->capacity = capacity;
    }

    void addRoomInHotel(Room r1)
    {
        rooms.push_back(r1);
    }

    void getInfoAboutRooms()
    {
        for (Room r : rooms)
        {
            cout << r.roomType << " " << r.price << " " << r.ratings << endl;
        }
    }

    int availableRooms()
    {
        return capacity - rooms.size();
    }

    compareByPrice cbp;
    void sortRoomsByPrice()
    {
        sort(rooms.begin(), rooms.end(), cbp);
    }

    compareByRatings cbr;
    void sortRoomsByRatings()
    {
        sort(rooms.begin(), rooms.end(), cbr);
    }
};