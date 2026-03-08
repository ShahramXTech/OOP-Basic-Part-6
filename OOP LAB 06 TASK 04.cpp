#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
 
    virtual double calculateArea() const = 0;
    

    virtual void displayArea() const {
        cout << "Area: " << calculateArea() <<endl;
    }
    
 
    virtual ~Shape() = default;
};


class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double calculateArea() const  {//overiding
        return 3.14 * radius * radius;
    }
    
    void displayArea() const override {
        cout << "Circle with radius " << radius << " has area: " << calculateArea() << std::endl;
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;
    
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double calculateArea() const override {
        return length * width;
    }
    
    void displayArea() const override {
       cout << "Rectangle with length " << length << " and width " << width 
                  << " has area: " << calculateArea() <<endl;
    }
};

int main() {

    const int NUM = 4;
    Shape* shapes[NUM];
    
 
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(2.5);
    shapes[3] = new Rectangle(3.0, 7.0);
    

    for (int i = 0; i < NUM;i++) {
        shapes[i]->displayArea();  
    }
    

    for (int i = 0; i < NUM; ++i) {
        delete shapes[i];
    }
    
    return 0;
}