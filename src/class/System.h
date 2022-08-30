#include <bits/stdc++.h>
// #include "./Hotel.h"
// #include "./Room.h"
using namespace std;

class System
{
private:
    map<string, int> hotelDirectory;

public:
    void addHotelDetails(Hotel hotel)
    {
        hotelDirectory.insert({hotel.name, hotel.availableRooms()});
    }

    // will return alphabetically sorted Hotels
    void searchHotels()
    {
        for (auto it : hotelDirectory)
        {
            cout << it.first << " hotel with " << it.second << " rooms" << endl;
        }
    }

    void getRoomsSortedByPrice(Hotel h1)
    {
        h1.sortRoomsByPrice();
        cout << "-------------------------------------------------------------" << endl;
        for (auto it : h1.rooms)
        {
            cout << h1.name << " - Roomtype: " << it.roomType << " - Price(INR): " << it.price << endl;
        }
        cout << "-------------------------------------------------------------" << endl;
    }

    void getRoomsSortedByRatings(Hotel h1)
    {
        h1.sortRoomsByRatings();
        cout << "-------------------------------------------------------------" << endl;
        for (auto it : h1.rooms)
        {
            cout << h1.name << " - Roomtype: " << it.roomType << " - Ratings(5 max): " << it.ratings << endl;
        }
        cout << "-------------------------------------------------------------" << endl;
    }

    double calculateBill(Room r1, int numOfDays)
    {
        return r1.price * (double)numOfDays;
    }
};