#include<iostream>
using namespace std;
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
   class B: public A{
       private:
       int c;
       public:
       
       void showdata()
       { cout<<"enter value of a "<<a<<endl;
        cout<<"enter value of b "<<b<<endl;
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
    

return 0;
}
