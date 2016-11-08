#include "Foursquare.h"
#include <iostream>
#include <cmath>
Foursquare::Foursquare() {
    side_a = 0;
}
Foursquare::Foursquare(size_t i) : side_a(i) {
    std::cout << "Foursquare created: " << side_a << std::endl;
}
Foursquare::Foursquare(std::istream &is) {
    std::cout << "enter the side of foursquare: a\n";
    is >> side_a;
	std::cout << "Foursquare created: " << std::endl;
}
Foursquare::Foursquare(const Foursquare& orig) {
    std::cout << "Hexagon copy created" << std::endl;
    side_a = orig.side_a;
}
double Foursquare::Square() {
    return double(side_a * side_a)*3*sqrt(3)/2;
}
void Foursquare::Print() {
    std::cout << "a=" << side_a <<
        std::endl;
}
Foursquare& Foursquare::operator=(const Foursquare& right) {
    if (this == &right) return *this;
    std::cout << "Foursquare copied" << std::endl;
    side_a = right.side_a;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Foursquare& obj) {
    os << "Foursquare    "<<"a=" << obj.side_a<<std::endl;
    return os;
}
Foursquare::~Foursquare() {
    std::cout << "Foursquare deleted" << std::endl;
}