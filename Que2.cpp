/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length */

#include<iostream>
using namespace std;


class Rectangle{
	
	private:
		int length,breadth;
	public:
	   void get(int l,int b){
	   length=l;
	   breadth=b;
	   }
	    void rec_area(){
	     cout<<"\nArea of rectangle is: "<<length*breadth;
		}   
			
};


int main(){
	Rectangle r1,r2;
	
	r1.get(4,5);
	r1.rec_area();
	
	r2.get(5,8);
	r2.rec_area();
	return 0;
}