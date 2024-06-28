#include<iostream>
using namespace std;

class rect{
     private:
     float length;
     float breadth;
  public:
  rect(float l,float b){
   this->length=l;
    this->breadth=b;
  }
     void setLength(int l){
        if(l>=0){
            length=l;
        }
        else{
            cout<<"length cannot be negative";
               length=0;
        }
     }
        void setBreadth(int b){
            if(b>=0){
            breadth=b;
        }
        else{
            cout<<"breadth cannot be negative";
               breadth=0;
        }
                }

         int getLength(){
            return length;
         }

         int getBreadth(){
            return breadth;
         }

     float area(){
        return length*breadth;
     }

     float perimeter(){
        return 2*(length+breadth);
     }
    
};
int main(){
   rect r1(2,5);
   rect*r2=&r1;
   r2->setLength(9);
   r2->setBreadth(5);
   cout<<r2->area()<<endl;
   cout<<r2->getLength();
    return 0;
}