//
// Created by ACat on 24/11/2017.
//

#ifndef DATASTRUCTURE_LINKLIST_H
#define DATASTRUCTURE_LINKLIST_H


#include "../../global/core.h"

template <class T>
class DataStructure::LinkList : public virtual LinearList<T> {

private:

protected:
    struct Node {
        T data;
        Node *next;
    };
    Node *__head;
    int __length;

public:

    LinkList();
    LinkList(const LinkList<T> &list);
    ~LinkList() override;

    bool isEmpty() const override;
    int length() const override;

    bool insert(int index, T &e) override;
    T remove(int index) override;
    bool clearList() override;

    T &operator[](int index) override;
    T &get(int index) const override;
    int locate(const T &e, bool (*fp_compare)(const T &, const T &)) const override;
    T &prior(const T &curr, bool (*fp_compare)(const T &, const T &)) const override;
    T &next(const T &curr, bool (*fp_compare)(const T &, const T &)) const override;
    bool traverse(void (*fp_visit)(const T &)) const override;

};

void testLinkList();


#endif //DATASTRUCTURE_LINKLIST_H
