#include <iostream>
using namespace std;

//membuat class node
class Node {

    //memberi aksses modifier serta mendeklarasi variabel object node
public:
    string info;
    Node* leftChild;
    Node* rightChild;

    //membuat constructor untuk class node
    Node(string i, Node* 1, Node* r) {
        //memberi nilai parameter ke variabel
        info = i;
        lefChild = 1;
        rightChild = r;
    }
};

//membuat class binaryTree
class BinaryTree {
public:
    Node* ROOT;
}