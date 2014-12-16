#include<iostream>
using std::cout; using std::endl; using std::ostream;
#include<string>
using std::string;
#include<initializer_list>
using std::initializer_list;

/* ------> CHANGE NOTHING FROM HERE ----> */

// Node Class
template<typename T>
struct Node{
public:
    T data_;
    Node* next_;
    Node() : data_(T()), next_(nullptr) {};
    Node(T d) : data_(d), next_(nullptr) {};
    bool operator<(Node n){return this->data_ < n.data_;}
};

// SortedList declaration
template<typename T>
class SortedList{
private:
    Node<T> *head_;
    Node<T> *tail_;

public:
    SortedList() : head_(nullptr), tail_(nullptr) {};
    SortedList(initializer_list<T>);
    SortedList(SortedList&);
    ~SortedList();
    SortedList& operator=(SortedList s);
    void insert(T);
    Node<T>* find(T val);
    bool del(T);
    size_t length();
    T min();
    T max();
    T mid();

/* ----> TO HERE ------> */

    // inline, easiest for templates
    friend ostream& operator<<(ostream& out, SortedList<T>& sa){
	// you need to provide the definition of operator<< RIGHT HERE!
    }
};

// write your SortedList methods below
