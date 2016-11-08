#ifndef TTREEITEM_H
#define TTREEITEM_H
#include <memory>
#include "FIGURE.h"
#include "Octagon.h"
#include "Foursquare.h"
#include "Triangle.h"

template<class T> class TTreeItem {
public:
	TTreeItem(std::shared_ptr<T> &obj);
//	template <class A> friend std::ostream& operator<<(std::ostream& os, const TTreeItem<A>& obj);

	std::shared_ptr<TTreeItem<T>> GetTreeLeft();
	std::shared_ptr<TTreeItem<T>> GetTreeRight();
	void remove();
	std::shared_ptr<TTreeItem<T>> SetNext(std::shared_ptr<TTreeItem> next);
	std::shared_ptr<TTreeItem<T>> GetNext();
	std::shared_ptr<T> GetTriangle() const;
	virtual ~TTreeItem();
private:
	std::shared_ptr<T> obj;
/*	std::shared_ptr<T> foursquare;
	std::shared_ptr<T> triangle;*/
	std::shared_ptr<TTreeItem<T>> left;
	std::shared_ptr<TTreeItem<T>> right;
};
/*
class TTreeItem {
public:
    TTreeItem(const std::shared_ptr<Triangle> &triangle, const std::shared_ptr<Foursquare> &foursquare, const std::shared_ptr<Octagon> &octagon);
    TTreeItem(const TTreeItem& orig);
    friend std::ostream& operator<<(std::ostream& os, const TTreeItem& obj);
    std::shared_ptr<TTreeItem> Gettreeleft();
    std::shared_ptr<TTreeItem> Gettreerihgt();
    void delite();
    std::shared_ptr<TTreeItem> Setnext(std::shared_ptr<TTreeItem> next);
    std::shared_ptr<TTreeItem> Getnext();
    std::shared_ptr<Triangle> GetTriangle() const;
    virtual ~TTreeItem();
private:
    std::shared_ptr<Octagon> octagon;
    std::shared_ptr<Foursquare> foursquare;
    std::shared_ptr<Triangle> triangle;
    std::shared_ptr<TTreeItem>  left;
    std::shared_ptr<TTreeItem> right;
};*/
#endif