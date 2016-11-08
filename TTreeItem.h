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

	std::shared_ptr<TTreeItem<T>> GetTreeLeft();
	std::shared_ptr<TTreeItem<T>> GetTreeRight();
	void remove();
	std::shared_ptr<TTreeItem<T>> SetNext(std::shared_ptr<TTreeItem> next);
	std::shared_ptr<TTreeItem<T>> GetNext();
	std::shared_ptr<T> GetTriangle() const;
	virtual ~TTreeItem();
private:
	std::shared_ptr<T> obj;
	std::shared_ptr<TTreeItem<T>> left;
	std::shared_ptr<TTreeItem<T>> right;
};
#endif
