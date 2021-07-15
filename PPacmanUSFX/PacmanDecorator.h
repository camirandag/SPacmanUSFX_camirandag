#pragma once
#include <iostream>
using namespace std;
class PacmanDecorator
{
protected:
    int velocidadRapido;
    int velocidadLento;

    int getVelocidadRapido(){return velocidadRapido;}
    void setVelocidadRapido(int _velocidadRapido) { velocidadRapido = _velocidadRapido; }
    int getVelocidadLento() { return velocidadLento; }
    void setVelocidadLento(int _velocidad) { velocidadLento = _velocidad; }
public:
    PacmanDecorator();
};

//// 1. "lowest common denominator"
//class Widget
//{
//public:
//    virtual void draw() = 0;
//};
//
//class TextField : public Widget
//{
//    // 3. "Core" class & "is a"
//    int width, height;
//public:
//    TextField(int w, int h)
//    {
//        width = w;
//        height = h;
//    }
//
//    /*virtual*/
//    void draw()
//    {
//        cout << "EL DRAW DESDE TEXT FIELD: " << width << ", " << height << '\n';
//    }
//};
//
//// 2. 2nd level base class
//class Decorator : public Widget  // 4. "is a" relationship
//{
//    Widget* wid; // 4. "has a" relationship
//public:
//    Decorator(Widget* w)
//    {
//        wid = w;
//    }
//
//    /*virtual*/
//    void draw()
//    {
//        wid->draw(); // 5. Delegation
//    }
//};
//
//class BorderDecorator : public Decorator
//{
//public:
//    // 6. Optional embellishment
//    BorderDecorator(Widget* w) : Decorator(w) {}
//
//    /*virtual*/
//    void draw()
//    {
//        // 7. Delegate to base class and add extra stuff
//        Decorator::draw();
//        cout << "   BorderDecorator" << '\n';
//    }
//};
//
//class ScrollDecorator : public Decorator
//{
//public:
//    // 6. Optional embellishment
//    ScrollDecorator(Widget* w) : Decorator(w) {}
//
//    /*virtual*/
//    void draw()
//    {
//        // 7. Delegate to base class and add extra stuff
//        Decorator::draw();
//        cout << "   ScrollDecorator" << '\n';
//    }
//};
//
//int main()
//{
//    // 8. Client has the responsibility to compose desired configurations
//    Widget* aWidget = new BorderDecorator(new ScrollDecorator(new TextField(80, 24)));
//    aWidget->draw();
//    system("pause");
//}
