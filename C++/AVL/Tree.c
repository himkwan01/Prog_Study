#include <bits/stdc++.h>
using namespace std;

template <class T>
ostream &operator <<(ostream &, const Node<T> &);

template <class T>
struct Node{
    T data;                     // data with template type
    long height;                // tallest child + 1
    long &occupancy;            // Number of node in the tree
    Node<T> *left;              // left child pointer
    Node<T> *right;             // right child pointer
    unsigned long &tree_count;  // reference of same var in the tree

    /*--------------------------------------------------------------------------
     * Node Constructor only for root
     -------------------------------------------------------------------------*/
    Node(const T &para_data, Tree<T> &tree):data(para_data),height(0),
            occupancy(tree.occupancy),left(0),right(0),
            tree_count(tree.tree_count){
        occupancy++;
    }
            

    /*--------------------------------------------------------------------------
     * Node Constructor for node other than root
     -------------------------------------------------------------------------*/
    Node(const T &para_data, Node<T> &parent):data(para_data),height(0),
            occupancy(parent.occupancy),left(0),right(0),
            tree_count(parent.tree_count){
        occupancy++;
    }

    ~Node(){
        occupancy--;
    }
}
