#ifndef FOURSQUARE_H
#define FOURSQUARE_H
#include <cstdlib>
#include <iostream>
#include "FIGURE.h"
class Foursquare : public Figure{
public:
	Foursquare();
	Foursquare(std::istream &is);
	Foursquare(size_t i);
	Foursquare(const Foursquare& orig);
    friend std::ostream& operator<<(std::ostream& os, const Foursquare& obj);
    double Square() override;
    void Print() override;
	Foursquare& operator=(const Foursquare& right);
    virtual ~Foursquare();
private:
    size_t side_a;
};
#endif 