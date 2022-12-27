//ASSIGNMENT NO. 3:
/*Imagine a publishing company which does marketing for book and audio cassette versions. 
Create a class publication that stores the title (a string) and price (type float) of publications. 
From this class derive two classes: book which adds a page count (type int) and tape which 
adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and 
displays the data members.*/

#include <iostream>
#include <string.h> 
using namespace std;
class publication
{
public:
string t;
float p;
void getdata()
{

cout <<"Enter title of publication: \n";
cin >> t;
cout <<"Enter price of publication: \n";
cin >> p;

}
void putdata()
{
cout << "Publication title:"<<t<<endl;

cout << "Publication price:"<<p<<endl;
}
};
class book :public publication
{
private:
int pagecount;
public:
void getdata()
{
publication::getdata(); //call publication class function to get data
cout << "Enter Book Page Count: \n"; //Acquire book data from user
cin >> pagecount;
}
void putdata()
{
publication::putdata(); //Show Publication data
cout << "Book page count:" << pagecount << endl; //Show book data
}
};
class tape :public publication
{
private:
float ptime;
public:
void getdata()

{
publication::getdata();
cout << "Enter tapes playing time(in min): \n";
cin >> ptime;
}
void putdata()
{
publication::putdata();
cout << "Tapes playing time:"<< ptime << endl;
}
};
int main()
{
book b;
tape t;

b.getdata();
t.getdata();
b.putdata();
t.putdata();
return 0;
}