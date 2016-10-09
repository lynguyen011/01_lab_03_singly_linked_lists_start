/*
	Name header
*/

#include "AnyList.h"

// Definition function getMin


// Definition function haveThree
bool AnyList::haveThree() const
{
	if (count < 5)
	{
		return false;
	}
	else
	{
		Node* temp = ptrToFirst;
		int countThree = 0;
		bool found = false;
		while (temp != nullptr && !found)
		{
			if (temp->getData() == 3) 
			{
				if (countThree == 3)
				{
					found = true;
				}
				// We are at the end dont check temp->next
				if (temp->getPtrToNext() == nullptr)
				{
					++countThree;
				}
				// we are at the beginning or in the middle
				else if(temp->getPtrToNext()->getData() != 3)
				{
					++countThree;
				}
				
			}			
			temp = temp->getPtrToNext();
		}
		
		return found;
	}
}

// Definition function preFour
