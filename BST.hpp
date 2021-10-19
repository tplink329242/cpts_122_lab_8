#pragma once
#include<iostream>

template <class T>
class BSTNode
{
private:
    /* data */
    T data;
    BSTNode* lchild;
    BSTNode* rchild;

public:
    BSTNode(T newdata);
    ~BSTNode();

    //setter & getter
    std::string getDataString();
    void setData(T newdata);
};

template <class T>
class BST
{
private:
    BSTNode<T>* Head;
public:
    BST(/* args */);
    ~BST();

    //setter /getter
    void insertNode(T newNode);
};

template <class T>
BST<T>::BST()
{
    Head = nullptr;
}

template <class T>
BST<T>::~BST()
{
}

template <class T>
void BST<T>::insertNode(T newNode)
{
    if (Head == nullptr)
    {
        //this is the first node
        Head = new BSTNode<T>(newNode);
    }
    std::cout << *Head << std:: endl;
}


template <class T>
std::ostream& operator<< (std::ostream& lhs, BSTNode<T>& rhs);


template <class T>
BSTNode<T>::BSTNode(T newdata)
{
    data = newdata;
}

template <class T>
BSTNode<T>::~BSTNode()
{

}

template <class T>
std::string BSTNode<T>::getDataString()
{
    return (std::string)data;
}

template <class T>
void BSTNode<T>::setData(T newdata)
{
    data = newdata;
}

template <class T>
std::ostream& operator<< (std::ostream& lhs, BSTNode<T>& rhs)
{
    lhs << (std::string)rhs.getDataString();
    return lhs;
}

