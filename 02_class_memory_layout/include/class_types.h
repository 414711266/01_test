#pragma once

// 1、 空类
class EmptyClass {};

// 2、包含成员变量的类
class MemberVariableClass
{
private:
    int int_member; // 4 bytes
    char char_member; // 1 byte
    double double_member; // 8 bytes
    bool bool_member; // 1 byte
};

// 3、包含成员函数的类
class MemberFunctionClass
{
private:
    int x;
    int y;
public:
    void set_values(int a, int b) 
    {
        x = a; 
        y = b;
    }
    int get_sum() const 
    {
        return x + y; 
    }

    static void static_function() 
    {
        // 静态成员函数，不占用对象内存
    }
};