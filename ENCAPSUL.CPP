#include<iostream.h>
#include<conio.h>
 class stud
 {
      private: int m1,m2,rollno,total;
	  float avg;
	  char name[20];
      public:
	  void get();
	  void put();
 };
      void stud::get()
   {
	 cout<<"\n Enter Roll No:";
	 cin>>rollno;
	 cout<<"\n Enter Name:";
	 cin>>name;
	 cout<<"\n Enter Marks in Subject 1:";
	 cin>>m1;
	 cout<<"\n Enetr Marks in Subject 2:";
	 cin>>m2;
   }
     void stud::put()
     {
	 total=0;
	 total=m1+m2;
	 avg=total/2;
	 cout<<"\n";
	 cout<<"\n Output is:";
	 cout<<"\n Roll No => \t";
	 cout<<rollno;
	 cout<<"\n Name =>";
	 cout<<name;
	 cout<<"\n Marks is Subject 1 =>";
	 cout<<m1;
	 cout<<"\n Marks is Subject 2 =>";
	 cout<<m2;
	 cout<<"\n Total Marks => \t";
	 cout<<total;
	 cout<<"\n Average => \t";
	 cout<<avg;
     }
     void main()
     {
	clrscr();
	stud s;
	s.get();
	s.put();
	getch();
     }











