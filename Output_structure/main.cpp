//
//  main.cpp
//  Output_structure
//
//  Created by Александр Нестеров on 02/07/2024.
//

#include <iostream>
#include <string>

using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

void printAddress(const Address& address) {
    cout << "Город: " << address.city << endl;
    cout << "Улица: " << address.street << endl;
    cout << "Номер дома: " << address.houseNumber << endl;
    cout << "Номер квартиры: " << address.apartmentNumber << endl;
    cout << "Индекс: " << address.index << endl;
    cout << endl;
}

int main() {
    Address address1;
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.houseNumber = 12;
    address1.apartmentNumber = 8;
    address1.index = 123456;

    Address address2;
    address2.city = "Ижевск";
    address2.street = "Пушкина";
    address2.houseNumber = 59;
    address2.apartmentNumber = 143;
    address2.index = 953769;

    printAddress(address1);
    printAddress(address2);

    return 0;
}
