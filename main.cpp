#include <cstdlib>
#include <iostream>
#include <memory>

#include "FIGURE.h"
#include "TTreeItem.h"
#include "TTree.h"
#include "Triangle.h"
#include "Foursquare.h"
#include "Octagon.h"

int main() {
    
    TTree<Figure> tree; 

    tree.push(std::shared_ptr<Triangle>(new Triangle));
    tree.push(std::shared_ptr<Foursquare>(new Foursquare));
    tree.push(std::shared_ptr<Octagon>(new Octagon));
    tree.print();
    system("pause");
    return 0;
}
