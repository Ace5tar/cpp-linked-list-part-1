#include "Student.h"

using namespace std;

#ifndef NODE_H
#define NODE_H


class Node{
	private:
		Student* studPtr;
		Node* nodePtr;
	public:
		Node();
		~Node();
		Node* getNext();
		Student* getStudent();
		void setNext(Node* nextNode);
		void setStudent(Student* setStudent);
};

#endif
