
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student{
	private:
		const char* name;
		int id;
	public:
		Student(const char* setName, int setId);
		~Student();
		int getId();
		const char* getName();
};

#endif
