#include<iostream>
using namespace std;
class Number{
   int a;
   int b;
   public:
   
   void  show(int a,int b){
       cout<<" integer Value of a is: "<<a<<endl;
        cout<<"integer  Value of b is: "<<b<<endl;
       
   }
   void show(double a ,double b){
     cout<<"  Float Value of a is: "<<a<<endl;
        cout<<"Float Value of b is: "<<b<<endl;   
   }
    void show(char *a){
     cout<<" String Value of a is: "<<a<<endl;
        
   }
   
   
   
};

int main()
{
Number n;
n.show(12,23);
n.show(12.23,23.12);
n.show("LAIBA");

    

return 0;
}
