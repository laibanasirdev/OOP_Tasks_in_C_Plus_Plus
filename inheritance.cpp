//this is to understand single inheritance concept

#include<iostream>
using namespace std;
//Class A
class A{
    protected:
   int a;
   int b;
   public:
  void setdata(){
      cout<<"enter value of a"<<endl;
      cin>>a;
      cout<<"enter value of b"<<endl;
      cin>>b;
  }
};

//Class B where A is public of B
   class B: public A{
       private:
       int c;
       public:
       
       void showdata()
       { cout<<"value of a "<<a<<endl;
        cout<<" value of b "<<b<<endl;
       }
       void add(){
           c=a+b;
           cout<<"addition of "<<a<<" + "<<b<<" = "<<c<<endl;
       }
   
   
   
};

int main()
{

B b;
b.setdata();
b.showdata();
    b.add();
    

return 0;
}
