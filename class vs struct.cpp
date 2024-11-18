 // classes example
 #include <iostream>
 using namespace std;
 class Rectangle1 {
 //private by default 
int width, height;
 public:
 ~Rectangle1(int x, int y){
 this.width =x ;
 this.height = y;
 }
 int area() {
 return width*height;
 }
 };
  struct Rectangle2 {
 //public by default 
int width, height;
 int area() {
 return width*height;
 }  };
 int main () {
 Rectangle1 rect1 = Reactangle1(3,4);   //constructor 
cout << "area 1: " << rect.area();
 Rectangle2 rect2 = {6, 5};
 cout << "area 2: " << rect2.area();
 return 0;
 }