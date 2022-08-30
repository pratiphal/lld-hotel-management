#include <bits/stdc++.h>
#include "./class/Room.h"
#include "./class/User.h"
#include "./class/Hotel.h"
#include "./class/System.h"
using namespace std;

int main()
{
    Room r1(RoomType::BUSINESS, 3000.20, 5);
    Room r2(RoomType::DELUXE, 5020, 4);
    Room r3(RoomType::PREMIUM, 3000, 5);

    Hotel h1("Rajlakshmi", "Tamil Nadu", 5);
    Hotel h2("Annapuram", "Chattisgarh", 10);

    h1.addRoomInHotel(r1);
    h1.addRoomInHotel(r2);
    h1.addRoomInHotel(r3);

    h2.addRoomInHotel(r3);
    h2.addRoomInHotel(r1);

    System s1;

    s1.addHotelDetails(h1);
    s1.addHotelDetails(h2);

    cout << s1.calculateBill(r1, 2) << endl;

    s1.getRoomsSortedByPrice(h1);
    s1.getRoomsSortedByRatings(h1);

    s1.getRoomsSortedByPrice(h2);
    s1.getRoomsSortedByRatings(h2);

    s1.searchHotels();
}