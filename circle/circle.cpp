#include "circel.h"

// Circle 类的构造函数实现
Circle::Circle(int r) : radius(r) {
}

// Circle 类的成员函数实现，计算圆的面积
int Circle::area() {
    return 3 * radius * radius;
}
