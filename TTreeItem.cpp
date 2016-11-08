#include "TTreeItem.h"
#include <iostream>

template <class T> TTreeItem<T>::TTreeItem(std::shared_ptr<T> &obj) {
	this->obj = obj;
	this->left = nullptr;
	this->right = nullptr;
	std::cout << "Tree item: created" << std::endl;
}

template <class T> std::shared_ptr<TTreeItem<T>> TTreeItem<T>::SetNext(std::shared_ptr<TTreeItem<T>> next) {
    std::shared_ptr<TTreeItem<T>> old = this->right;

    if (old == nullptr){
        this->right = next;
        return this->right;
    }
    while (old->left! = nullptr){
        if (old->right == nullptr){
            old->right = next;
            return this->right;
        }
        old = old->left;
    }
    old->left = next;
    return this->right;
}

template <class T> std::shared_ptr<T> TTreeItem<T>::GetTriangle() const {
    return this->triangle;
}

template <class T> void TTreeItem<T>::remove(){
    std::shared_ptr<TTreeItem<T>> asd = this->right;
    while (asd->left != nullptr){
        if (asd->left->right == nullptr){
            asd->left = nullptr;
        }
        asd = asd->left;
        return;
    }
    if (asd->right != nullptr){
        asd->right = nullptr;
    }
}

template <class T> std::shared_ptr<TTreeItem<T>> TTreeItem<T>::GetNext() {
    std::shared_ptr<TTreeItem<T>> asd = this->right;
    while (asd->left != nullptr){
        asd = asd->left;
    }
    if (asd->right != nullptr){
        asd = asd->right;
    }
    return asd;
}

template <class T> std::shared_ptr<TTreeItem<T>> TTreeItem<T>::GetTreeLeft() {
    return this->left;
}

template <class T> std::shared_ptr<TTreeItem<T>> TTreeItem<T>::GetTreeRight(){
    return this->right;
}

template <class T> TTreeItem<T>::~TTreeItem() {
    std::cout << "Tree item: deleted" << std::endl;
}

template <class A> std::ostream& operator<<(std::ostream& os, const TTreeItem<A>& obj) {
    os << "---------------------" << std::endl << *obj.triangle << *obj.octagon << *obj.foursquare << "----------------------" << std::endl;
    return os;
}
