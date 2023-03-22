#include <iostream>
using namespace std;

class Rectangle{
private:
double length;
double width;

public: 
Rectangle(){
  length=20;
  width=10;
}
Rectangle(double l, double w){
           length=l;
           width=w;
         }
Rectangle(double b){
          length=b;
          
        }
void setLength(double l){
  length=l;
}
void setWidth(double w){
  width=w;
}
double getLength(){
  return length;
}
double getWidth(){
  return width;
}
double getArea(){
  return length*width;
}
};




int main() {

  Rectangle r[3];
  r[0].setLength(10);
  r[0].setWidth(15);
  r[1].setLength(20);
  r[1].setWidth(10);
  r[2].setLength(30);
  r[2].setWidth(30);
  for(int i=0; i<3; i++){
    cout<<"\nr"<<i<<" "<<"Length"<<r[i].getLength()<<"\nWidth"<<i<<" "<<r[i].getWidth()<<"\nArea"<<r[i].getArea();
  }

  
}