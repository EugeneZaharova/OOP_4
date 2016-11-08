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
//	std::shared_ptr<T> pop();
//	template <class A> friend std::ostream& operator<<(std::ostream& os, const TTree<A>& tree);
//	virtual ~TTree();
private:
	std::shared_ptr<TTreeItem<T>> head;
};

/*class TTree {
public:
    TTree();
    TTree(const TTree& orig);

    void push(std::shared_ptr<Triangle> &&triangle, std::shared_ptr<Foursquare>&&foursquare, std::shared_ptr<Octagon> &&octagon);
    bool empty();
    void pop();
    friend std::ostream& operator<<(std::ostream& os, const TTree& stack);
    virtual ~TTree();
private:

    std::shared_ptr<TTreeItem> head;
};*/
#endif /*TTREE_H*/