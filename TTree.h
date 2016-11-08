#ifndef TTREE_H
#define TTREE_H
#include <memory>
#include "FIGURE.h"
#include "Octagon.h"
#include "Foursquare.h"
#include "Triangle.h"
#include "TTreeItem.h"

template <class T> class TTree {
public:
	TTree();

	void push(std::shared_ptr<T> && obj);
	bool empty();
	void print();
private:
	std::shared_ptr<TTreeItem<T>> head;
};
#endif /*TTREE_H*/
