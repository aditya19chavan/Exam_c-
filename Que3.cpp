/* Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
member functions to accept and display Student information also display count of students. (Use Static
data member and Static member function) */

#include<iostream>
using namespace std;

static int count=0;
class Student{
	private:
		int Roll_No, Class;
		string Student_Name;
		 
	public:	

		void get(int r,int c,string n){
			 Roll_No=r;
			 Class=c;
			 Student_Name=n;
		}
		void display(){
		
			cout<<"\nStudent info:- "<<"\nRoll No :"<< Roll_No<<"\nClass :"<<Class<<"\nName :"<<Student_Name;
		}
		
		void measure(){
			count++;
		 cout<<"\ncount of student database: "<<count;	
		}
};




int main(){
	Student s1,s2;
	s1.get(2,3,"aditya");
	s1.display();	
	s1.measure();

	s2.get(4,5,"shreyas");
	s2.display();
    s2.measure();
	return 0;
}