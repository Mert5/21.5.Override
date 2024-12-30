#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

int main(){

    Circle circle1{6.2,"circle1"};
    Oval oval1{7.6,3.5,"oval1"};
    Circle circle2{4.8,"circle2"};
    Oval oval2{17.3,7.7,"oval2"};
    Circle circle3{9.3,"circle3"};
    Oval oval3{4.1,1.2,"oval3"};

    // Raw pointers => is going to work
    Shape* shapes3[] {&circle1,&oval1,&circle2,&oval2,&circle3,&oval3};

    for(Shape* shape_ptr : shapes3){
        shape_ptr->draw();
        std::cout << std::endl;
    }
    

    return 0;
}