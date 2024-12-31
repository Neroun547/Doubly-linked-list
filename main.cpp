#include <iostream>
#include "TwoLinkedList.h"

using namespace std;

void printAllListElements(TwoLinkedList* list);

int main() {
	TwoLinkedList* list1 = new TwoLinkedList();

	for (int i = 0; i < 10; i++) {
		list1->addItem(i);
	}

	cout << list1->getFirstElement() << endl;
	cout << list1->getLastEelement() << endl;

	list1->removeFirstElement();
	list1->removeLastElement();
	list1->removeElementByIndex(6);
	list1->insertFirstElement(0);
	list1->insertElementByIndex(0, -1);
	list1->insertElementByIndex(4, 10);
	list1->insertElementByIndex(10, 11);

	cout << "Print all elements:" << endl;
	
	printAllListElements(list1);

	return 0;
}

void printAllListElements(TwoLinkedList* list) {
	TwoLinkedListItem* iter = list->firstElement;

	while (iter != nullptr) {
		cout << iter->value << endl;

		iter = iter->next;
	}
}
