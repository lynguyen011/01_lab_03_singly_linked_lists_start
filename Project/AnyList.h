#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			
using namespace std;

class Node
{
public:
	Node() : data(0), ptrToNext(nullptr) {}
	Node(int theData, Node *newPtrToNext) 
		: data(theData), ptrToNext(newPtrToNext){}
	int getData( ) const { return data; }
	Node* getPtrToNext() const { return ptrToNext; }	
    void setData(int theData) { data = theData; }
	void setPtrToNext(Node *newPtrToNext) 
		{ ptrToNext = newPtrToNext; }
	~Node(){}
private:
    int data;		
    Node *ptrToNext;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	

	void print() const;

	void destroyList();
	~AnyList();

	/****************************************************************
		IN-CLASS
	****************************************************************/

	// Declaration function insertBack
	// Parameter: An int storing the element to be inserted in the list.
	// Inserts a new node at the end of the list. List might be empty.
	void insertBack(int newData);
	// Declaration function getNumberOfElements	
	// Return value: An int storing the number of elements in the list.
	// Returns the number of elements in the list

	// Declaration function getFirstElement
	// Return value: An int storing the value of the element stored in the first node.
	// Returns the value of the element stored in the first node.
	// List will always have at least one node.

	// Declaration function getLastElement
	// Return value: An int storing the value of the element stored in the last node.
	// Returns the value of the element stored in the last node.
	// List will always have at least one node.

	/****************************************************************
		LAB - Write the definitions in the file Functions.cpp
	****************************************************************/

	// Declaration function getMin


	// Declaration function haveThree
	bool haveThree() const;

	// Declaration function preFour


private:
	Node *ptrToFirst; //pointer to point to the first node in the list
	int count;	      //keeps track of number of nodes in the list
};

#endif