#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

template <class T>
struct Node;

template <class T>
class Tree{
private:
    friend struct Node<T>;
    long occupancy;
    Node<T> *root;
    unsigned long tree_count;
    //static int debug;

public:
    Tree():occupancy(0),root(NULL){
        static long counter;            // default value is 0
        tree_count=++counter;
    }

    ~Tree();

    bool Insert(const T &);
    bool Lookup(T &)const;
    bool Remove(T &);
    ostream &Write(ostream &) const;
}

#include "Tree.c"

#endif
