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

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree(){
        ROOT = nullptr;
    }

    //membuat prosedur insert
    void insert(string element) {
        //memberi nilai untuk setiap object yang berada di dalam prosedur insert
        Node* newNode = new Node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftChild = nullptr;
        newNode->rightChild = nullptr;

        Node* parent = nullptr;
        Node* currentNode = nullptr;
        search(element, parent, currentNode);

        //membuat conditional statement
        if (parent == nullptr) {
            
        }
    }
}