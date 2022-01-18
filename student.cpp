#include<iostream>
using namespace std;
class Student{
  private:
  string  sName;
  char rno[10];
  int english;
  int maths;
  int urdu;
 // int total;
  
  public:
  //Default constructor
  Student(){
      sName="Laiba";
      english=0;
      maths=0;
      urdu=0;
      cout<<"Default Contructor"<<endl;
      
      
     cout<<"******************************"<<endl;
       cout <<" Default  Student details    "<<endl;
       cout<<"******************************"<<endl;
       cout<<" Name                 :"<<sName<<endl;
       cout<<"Roll Number           : " <<rno<<endl;
       cout<<" Marks in English     :  "<<english<<endl;
       cout<<" Marks in Maths       :  "<<maths<<endl;
       cout<<" Marks in Urdu        :  "<<urdu<<endl;
       cout<<" Total Marks obtained :  "<<total()<<endl;
      
  }
  //  Default constructor 
  ~Student(){
      
      cout<<"******************************"<<endl;
       cout <<" Default Destructor call    "<<endl;
       cout<<"******************************"<<endl;
  }
  //Parametrized contrustor
  Student(int eng,int math,int urdu){
      english=eng;
      maths=math;
      urdu=urdu;
      cout<<"\n";
       cout<<"******************************"<<endl;
       cout <<" Parametrized Constructor    "<<endl;
       cout<<"******************************"<<endl;
       
       cout<<" Marks in English     :  "<<english<<endl;
       cout<<" Marks in Maths       :  "<<maths<<endl;
       cout<<" Marks in Urdu        :  "<<urdu<<endl;
       cout<<" Total Marks obtained :  "<<total()<<endl;   
      
  }
  //Set value 
 
   void setData()
       {
             
     cout<<"******************************"<<endl;
       cout <<" Enter  Student details    "<<endl;
       cout<<"******************************"<<endl;
           
           cout<<"enter name of student : ";
           cin>>sName;
           cout<<"enter roll no : ";
           cin>>rno;
          cout<<"enter marks in english maths and urdu: "<<endl;
          cin>>english>>maths>>urdu;
       }
       float total(){
           return english+maths+urdu;
       }
       //get value 
       
  void getData(){
       cout<<"******************************"<<endl;
       cout << "      Student details    "<<endl;
       cout<<"******************************"<<endl;
       cout<<" Name                 :"<<sName<<endl;
       cout<<"Roll Number           : " <<rno<<endl;
       cout<<" Marks in English     :  "<<english<<endl;
       cout<<" Marks in Maths       :  "<<maths<<endl;
       cout<<" Marks in Urdu        :  "<<urdu<<endl;
       cout<<" Total Marks obtained :  "<<total()<<endl;
       
      
  }
  
};
int main()
{
    int english,maths,urdu;
    //object of class 
    Student s1;
   // Parametrized contrustor call
    Student(40,50,78);
    s1.setData();
    s1.getData();

return 0;
}
