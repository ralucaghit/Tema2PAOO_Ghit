#include <iostream>
#include <string>

// Item 4: Make sure that objects are initialized before they’re used
class Tren {
    std::string nume;
    int vagoane;

public:
    Tren(const std::string& nume, int vagoane)
        : nume(nume), vagoane(vagoane) {}

    void afiseaza() const {
        std::cout << "Nume tren: " << nume << ", Vagoane: " << vagoane << "\n";
    }
};

//Item 5: Know what functions C++ silently writes and calls

// Item 6: Explicitly disallow the use of compiler generated functions you do not want


int main() {
    // Item 4: initislizarea obiectului t1
    Tren t1("IR 797", 4);
    t1.afiseaza();

    return 0;
}
