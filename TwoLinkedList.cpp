#include "TwoLinkedListItem.h"
#include "TwoLinkedList.h"

void TwoLinkedList::addItem(int value) {
	if (this->firstElement == nullptr) {
		TwoLinkedListItem* newItem = new TwoLinkedListItem(value, nullptr, nullptr);
		this->lastElement = newItem;
		this->firstElement = newItem;
	}
	else {
		TwoLinkedListItem* newItem = new TwoLinkedListItem(value, this->lastElement, nullptr);
		this->lastElement->next = newItem;
		this->lastElement = newItem;
	}
}

int TwoLinkedList::getFirstElement() {
	if (this->firstElement == nullptr) {
		return 0;
	}
	return this->firstElement->value;
}

int TwoLinkedList::getLastEelement() {
	if (this->lastElement == nullptr) {
		return 0;
	}
	return this->lastElement->value;
}

void TwoLinkedList::removeLastElement() {
	if (this->lastElement != nullptr) {
		TwoLinkedListItem* tmp = this->lastElement;

		this->lastElement = this->lastElement->prev;
		this->lastElement->next = nullptr;

		delete tmp;
	}
}

void TwoLinkedList::removeFirstElement() {
	if (firstElement != nullptr) {
		TwoLinkedListItem* tmp = this->firstElement;

		this->firstElement = this->firstElement->next;
		this->firstElement->prev = nullptr;

		delete tmp;
	}
}

void TwoLinkedList::removeElementByIndex(int index) {
	if (index == 0) {
		this->removeFirstElement();
	}
	else {
		int tmpIndex = 1;
		TwoLinkedListItem* tmpItem = this->firstElement->next;

		while (tmpIndex < index) {
			tmpItem = tmpItem->next;
	
			tmpIndex += 1;

			if (tmpItem == nullptr) {
				break;
			}
		}
		if (tmpItem != nullptr) {
			if (tmpItem->next == nullptr) {
				this->removeLastElement();
			}
			else {
				tmpItem->prev->next = tmpItem->next;
				tmpItem->next->prev = tmpItem->prev;

				delete tmpItem;
			}
		}
	}
}

void TwoLinkedList::insertElementByIndex(int index, int value) {
	if (index == 0) {
		this->insertFirstElement(value);
	}
	else {
		int tmpIndex = 1;
		TwoLinkedListItem* tmpItem = this->firstElement->next;

		while (tmpIndex < index) {
			tmpItem = tmpItem->next;

			tmpIndex += 1;
		}
		if (tmpItem == nullptr) {
			this->addItem(value);
		}
		else {
			TwoLinkedListItem* newItem = new TwoLinkedListItem(value, tmpItem->prev, tmpItem);
			TwoLinkedListItem* prevElementTmp = tmpItem->prev;

			tmpItem->prev = newItem;
			prevElementTmp->next = newItem;
		}
	}
}

void TwoLinkedList::insertFirstElement(int value) {
	if (this->firstElement == nullptr) {
		this->addItem(value);
	}
	else {
		TwoLinkedListItem* tmp = this->firstElement;
		this->firstElement = new TwoLinkedListItem(value, nullptr, tmp);

		tmp -> prev = this->firstElement;
	}
}





