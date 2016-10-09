#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	ptrToFirst = nullptr;
	count = 0;
}


	//print
void AnyList::print() const
{
	if (ptrToFirst == nullptr) // check if list is empty
		cerr << "List is empty.";
	else
	{
		Node *current;	//create a pointer to traverse the list 
		current = ptrToFirst;	//set the current pointer to point to the first node

		while (current != nullptr)	//while the current pointer is not pointing to NULL
		{						//  that is, the current pointer has not reached the 
			//  end of the list
			cout << current->getData() << " ";	//output the data 
			current = current->getPtrToNext();		//move the current pointer forward
		}
	}
}

	//destroyList - Does not delete the list object; it only deletes the nodes.
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (ptrToFirst != nullptr)
    {
		temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
        delete temp;
		temp = nullptr;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}

/****************************************************************
	IN-CLASS
****************************************************************/

// Definition function insertBack
void AnyList::insertBack(int data) {
	Node* ptrToNewNode = new Node(data, nullptr);

	if (ptrToFirst == nullptr) {
		ptrToFirst = ptrToNewNode;
	}
	else {
		Node* temp = ptrToFirst;
		while (temp->getPtrToNext() != nullptr)
			temp = temp->getPtrToNext();

		temp->setPtrToNext(ptrToNewNode);
	}

	count++;
}

// Definition function getNumberOfElements	


// Definition function getFirstElement


// Definition function getLastElement
