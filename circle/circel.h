#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.h"  // 包含基类 Shape 的头文件

// Circle 类的声明
class Circle : public Shape {
private:
    int radius;  // 圆的半径

public:
    explicit Circle(int r);  // 构造函数声明，初始化半径

    // 重写基类的虚函数，计算圆的面积
    int area() override;
};

#endif // CIRCLE_HPP
