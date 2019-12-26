//
// Created by ASUS on 2019/12/25.
//

#include "Circle.hpp"
Circle::Circle()
 {
  this->r=5.0;
 }
 
 Circle::Circle(double R)
 {
  this->r=R;
 }
 
double Circle:: Area()
 {
  return 3.14*r*r;
 }