#include "TTree.h"

template<class T> TTree<T>::TTree() {
	head = nullptr;
}

template<class T> void TTree<T>::push(std::shared_ptr<T> && obj) {
	std::shared_ptr<TTreeItem<T>> other (new TTreeItem<T>(obj));
	std::shared_ptr<TTreeItem<T>> old = this->head;
	this->head->GetTreeRihgt() = old->SetNext(other);
}

template<class T> bool TTree<T>::empty() {
    return head == nullptr;
}

template<class T> void TTree<T>::print()
{
	shared_ptr<TTreeItem<T>> item = head;
	while (item) {
		item->print();
		item->GetTreeLeft()->print();
		item->GetTreeRight()->print();
		item = item->GetNext();
	}
}
