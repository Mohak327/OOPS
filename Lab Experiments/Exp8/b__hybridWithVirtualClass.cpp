
#include<iostream>
#include<conio.h>
using namespace std;


class student {
protected:
    int roll;
public:
  void get_number(int a){
   roll= a;
  }

  void put_number()
  {
   cout<<"Roll Number: "<<roll<<endl;
  }
};

class test : virtual public student
{
 protected:
  float part1, part2;
 public:
  void get_marks(float x, float y)
  {
   part1 = x;
   part2 = y;
  }

  void put_marks()
  {
   cout<<"\nMarks Obtained: "<<endl;
   cout<<"Part1 = "<<part1<<endl<<"Part2 = "<<part2<<endl;
  }
};

class sports
{
 protected:
  float score;
 public:
  void get_score(float s)
  {
   score = s;
  }

  void put_score()
  {
   cout<<"\nSports Score: "<<score<<"\n\n";
  }
};

class result : public test, public sports
{
 private:
  float total;
 public:
  void display()
  {
   total = part1 + part2 + score;
   put_number();
   put_marks();
   put_score();
   cout<<"Total Score: "<<total<<"\n";
  }
};

void main()
{
 clrscr();
 result student;
 student.get_number(83);
 student.get_marks(95,98);
 student.get_score(9);
 student.display();
 getch();
}