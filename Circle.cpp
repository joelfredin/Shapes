#include<iostream>

#include"Circle.h"

namespace shapes
{
    Circle::Circle(float r) : radius(r) {}

    float Circle::get_radius() const
    {
        return radius;
    }
}