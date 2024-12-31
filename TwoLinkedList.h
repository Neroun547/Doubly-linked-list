#include "TwoLinkedListItem.h"
#pragma once

class TwoLinkedList {
public:
	TwoLinkedListItem* firstElement;
	TwoLinkedListItem* lastElement;

	void addItem(int value);
	int getFirstElement();
	int getLastEelement();
	void removeLastElement();
	void removeFirstElement();
	void removeElementByIndex(int index);
	void insertFirstElement(int value);
	void insertElementByIndex(int index, int value);
};
