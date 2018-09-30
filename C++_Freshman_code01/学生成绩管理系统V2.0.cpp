#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <stdio.h>

using namespace std;

const int COURSE_COUNT=5;
const int STU_COUNT=100;

struct student{
    string sno;
    string name;
    double score[COURSE_COUNT];
    double sum;
    double average;
};

typedef student STU;

STU stu[STU_COUNT];//student stu[STU_COUNT];

int courseCount=0;
int stuCount=0;

void inputScoreFromFile();
int searchBySno(STU stu[],int numberOfStudents,string sno);
void displayOneStudent(STU stu);
void displayAll(STU students[],int numberOfStudents);
void sortByGrade(STU students[],int numberOfStudents);
int searchByName(STU students[],int numberOfStudents,string name);
void sortBySno(STU stu[],int numberOfStudents);
void sortByName(STU stu[],int numberOfStudents);
void GradeCategory(STU stu[],int numberofstudent);
void subject(STU *stu,int studentnumber);

int menu();

int main()
{
    int itemSelected = -1;
    int index=-1;
    string name;
    string sno;

    while(true){
        //system("cls");
        itemSelected = menu();

        switch(itemSelected)
        {
            case 1:
                break;
            case 2:
                inputScoreFromFile();
                displayAll(stu,stuCount);
                break;
            case 3:
                 sortByGrade(stu,stuCount);
                 cout<<"================================"<<endl;
                 displayAll(stu,stuCount);
                 break;
            case 4:

                cout<<"Enter the name you want to search:";
                cin>>name;

                index = searchByName(stu,stuCount,name);

                if(index==-1)
                    cout<<"Not Found!"<<endl;
                else
                    displayOneStudent(stu[index]);
                break;
            case 5:
                cout<<"Enter the number you want to search:";
                cin>>sno;

                index = searchBySno(stu,stuCount,sno);

                if(index==-1)
                    cout<<"Not Found!"<<endl;
                else
                    displayOneStudent(stu[index]);
                break;
            case 6:
                 sortByName(stu,stuCount);
                 cout<<"================================"<<endl;
                 displayAll(stu,stuCount);
                 break;
            case 7:
                 sortBySno(stu,stuCount);
                 cout<<"================================"<<endl;
                 displayAll(stu,stuCount);
                 break;
            case 8:
                subject(stu,stuCount);
                break;
            case 9:
                GradeCategory(stu,stuCount);
                break;
            case 0:
                return 0;
            default:
                cout<<"Wrong choice you entered!"<<endl;
        }
    }



    return 0;
}

void inputScoreFromFile()
{
    ifstream inFile;

    string fileName;
    cout<<"Enter the scores data file name:";
    cin>>fileName;

    inFile.open(fileName.c_str());

    inFile.ignore(200,'\n');

    int i=0;
    while(!inFile.eof())
    {
        inFile>>stu[i].sno>>stu[i].name;

        stu[i].sum=0;
        for(int j=0;j<COURSE_COUNT;j++)
        {
            inFile>>stu[i].score[j];
            stu[i].sum += stu[i].score[j];
        }

        stu[i].average = stu[i].sum/COURSE_COUNT;

        i++;
    }

    stuCount = i;

    inFile.close();
}




void displayOneStudent(STU stu)
{
    cout<<setw(10)<<stu.sno
        <<setw(10)<<stu.name;
    for(int i=0;i<COURSE_COUNT;i++)
        cout<<setw(5)<<stu.score[i];
    cout<<setw(6)<<stu.sum;
    cout<<setw(5)<<stu.average;
    cout<<endl;
}

void displayAll(STU students[],int numberOfStudents)
{
    for(int i=0;i<numberOfStudents;i++)
        displayOneStudent(students[i]);
}
void subject(STU stu[],int studentnumber)
{
  int maixsubject=0, minusubject=1000;
  int i=0;
  int subjectaverage;
  int j;
  stu[i].sum=0;
for( j=0;j<COURSE_COUNT;j++)
   {

for(i=0;i<studentnumber;i++)
  {

              stu[i].sum+=stu[i].score[j];


              subjectaverage=stu[i].sum/studentnumber;



                    if(stu[i].score[j]>maixsubject)
                   {
                       stu[i].sum=maixsubject;
                   }
                         if(stu[i].score[j]<minusubject)
                         {
                              minusubject=*(stu[i].score);
                         }

cout<<"score of every subjectsum is "<<setw(6)<<stu[i].sum<<endl;
cout<<"score of every subjectaverage is "<<setw(6)<<subjectaverage<<endl;
cout<<"score of max is "<<maixsubject<<endl;
cout<<"score of min is "<<minusubject<<endl;
 }


   }

   }

void sortByName(STU stu[],int numberOfStudents)
{
    STU temp;
    bool isSorted = false;
    for(int i=0;i<numberOfStudents-1 && !isSorted;i++)
    {
        isSorted = true;
        for(int j=0;j<numberOfStudents-i-1;j++)
        {
            if(stu[j].name>stu[j+1].name)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;

                isSorted = false;
            }
        }
    }

}

void sortBySno(STU stu[],int numberOfStudents)
{
    STU temp;
    bool isSorted = false;
    for(int i=0;i<numberOfStudents-1 && !isSorted;i++)
    {
        isSorted = true;
        for(int j=0;j<numberOfStudents-i-1;j++)
        {
            if(stu[j].sno>stu[j+1].sno)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;

                isSorted = false;
            }
        }
    }

}


void sortByGrade(STU students[],int numberOfStudents)
{
    STU temp;
    bool isSorted = false;
    for(int i=0;i<numberOfStudents && isSorted==false;i++)
    {
        isSorted = true;
        for(int j=0;j<numberOfStudents-i-1;j++)
        {
            if(students[j].sum<students[j+1].sum)
            {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;

                isSorted = false;
            }
        }
    }
}

int searchByName(STU students[],int numberOfStudents,string name)
{
    for(int i=0;i<numberOfStudents;i++)
    {
        if(name.compare(students[i].name)==0)
            return i;
    }

    return -1;
}
int searchBySno(STU stu[],int numberOfStudents,string sno)
{
    for(int i=0; i<numberOfStudents;i++)
    {
        if(sno.compare(stu[i].sno)==0)
            return i;
    }

    return -1;
}
void GradeCategory(STU stu[],int numberOfStudents)
{
	for(int i=0;i<COURSE_COUNT;i++)
	{
		double a=0,b=0,c=0,d=0,f=0;
		for(int j=0;j<numberOfStudents;j++)
		{
			char x;
			if(stu[j].score[i]<=100&&stu[j].score[i]>=90) x='A';
			else if(stu[j].score[i]<90&&stu[j].score[i]>=80) x='B';
			else if(stu[j].score[i]<80&&stu[j].score[i]>=70) x='C';
			else if(stu[j].score[i]<70&&stu[j].score[i]>=60) x='D';
			else x='F';
			switch(x)
			{
				case 'A':a++;break;
				case 'B':b++;break;
				case 'C':c++;break;
				case 'D':d++;break;
				default:f++;break;
			}
		}
		cout<<"subject"<<i+1<<":   "
		<<"A="<<a<<"  "<<setw(3)<<"percentage of student is :"<<a/numberOfStudents*100<<"%"

		<<"      "<<"B="<<b<<"  "<<setw(3)<<"percentage of student is :"<<b/numberOfStudents*100<<"%"

		<<"      "<<"C="<<c<<"  "<<setw(3)<<"percentage of student is :"<<c/numberOfStudents*100<<"%"

		<<"      "<<"D="<<d<<"  "<<setw(3)<<"percentage of student is :"<<d/numberOfStudents*100<<"%"

		<<"      "<<"F="<<f<<"  "<<setw(3)<<"percentage of student is :"<<f/numberOfStudents*100<<"%"
		<<endl;

	}


}









int menu()
{
    cout<<"========Student Score Management System======="<<endl;
    cout<<"\t  1. Input student information"<<endl;
    cout<<"\t  2. Read student information from file"<<endl;
    cout<<"\t  3. Sort by sum"<<endl;
    cout<<"\t  4. Search by name"<<endl;
    cout<<"\t  5.Search by number"<<endl;
    cout<<"\t  6.Sort by name"<<endl;
    cout<<"\t  7.Sort by number"<<endl;
    cout<<"\t  8.Student information"<<endl;
    cout<<"\t  9.Grade category"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"Enter your choice:";
    int itemSelected;
    cin>>itemSelected;

    return itemSelected;

}

