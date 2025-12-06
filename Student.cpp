#include "Student.h"

using namespace std;

Student::Student(const char* setName, int setId) {
	name = setName;
	id = setId;
}

const char* Student::getName() { return name; }

int Student::getId() { return id; }

Student::~Student() {}
