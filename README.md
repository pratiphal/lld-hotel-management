# lld-hotel-management
Low Level Design for Hotel Management System

<img width="777" align="center" alt="Screenshot 2022-08-30 at 12 34 40" src="https://user-images.githubusercontent.com/50984984/187371916-2d89dc11-2935-4b15-b7a3-4bfcb9c1a48b.png">

> **NOTE:** This is my first attept in building Low Level Design for a Hotel Management System. Help me improve this project with respect to code quality, implementation details and suggesting some features.

## Modules Overview & Features

Inside `src` directory we find the following header files:

1. enum.h - Contains different user-defined room types
2. Hotel.h - Hotel class is a collection of rooms and simultaneous featues like availableRooms(), comparingRooms etc.
3. Room.h - Contains details about Room Class and attributes like price, ratings, RoomType(derived from enum)
4. System.h - Header file with which the user interacts for booking hotel, checking availability, calculating bill etc.
5. User.h - Contains details about the user(name, age, AADHAR_ID, email, phone number)
