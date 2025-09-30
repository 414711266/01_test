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