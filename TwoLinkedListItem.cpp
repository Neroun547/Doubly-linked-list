#include "TwoLinkedListItem.h"

TwoLinkedListItem::TwoLinkedListItem(int value, TwoLinkedListItem* prev, TwoLinkedListItem* next) {
	this->value = value;
	this->prev = prev;
	this->next = next;
}

