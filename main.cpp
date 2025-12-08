#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

	Node* head = new Node();
	head->setNext(new Node());
	head->setStudent(new Student("Name", 123));
	head->getNext()->setStudent(new Student("Name2", 456));

	cout << "Student at index zero name: " << head->getStudent()->getName() << endl; 
	cout << "Student at index zero name: " << head->getStudent()->getId() << endl; 
	cout << "Student at index one name: " << head->getNext()->getStudent()->getName() << endl; 
	cout << "Student at index one name: " << head->getNext()->getStudent()->getId() << endl; 
	
	delete head;

	return 1;
}
