#include <iostream>

using namespace std;
class Point {
private:
  double xCoord;
  double yCoord;

//public interface
public:
  //default constructor, no parameters
  Point();
  Point(double, double);

  //acesser function
  // this function should not change the value
  void display() const;
};

Point::Point (){
  xCoord = 0.0;
  yCoord = 0.0;
}

Point::Point (double x, double y){
  xCoord = x;
  yCoord = y;
}
//scope resolution 
// member function
void Point::display() const {
  cout << '(' << xCoord << ',' << yCoord << ')';
}

int main(){
  Point p1;
  
  cout << "p1: ";
  p1.display();
  cout << endl;
  
  
  Point p2;
  cout << "p2: ";
  p2.display();
  cout << endl;
  
  return 0;

}