#pragma once

#include <iostream>
#include <string>
#include <typeinfo>
// 颜色定义
#define ANSI_RESET "\033[0m" // 重置颜色
#define ANSI_BLACK "\033[30m" // 黑色
#define ANSI_RED "\033[31m" // 红色
#define ANSI_GREEN "\033[32m" // 绿色
#define ANSI_YELLOW "\033[33m" // 黄色
#define ANSI_BLUE "\033[34m" // 蓝色
#define ANSI_MAGENTA "\033[35m" // 品红
#define ANSI_CYAN "\033[36m" // 青色
#define ANSI_WHITE "\033[37m" // 白色

// 样式定义
#define ANSI_BOLD "\033[1m" // 粗体
#define ANSI_UNDERLINE "\033[4m" // 下划线
#define ANSI_BLINK "\033[5m" // 闪烁
#define ANSI_REVERSE "\033[7m" // 反转

// 打印类的内存信息
template <typename T>
void print_class_info(const std::string& class_name)
{
    std::cout << ANSI_BOLD << ANSI_CYAN << "===" << class_name << "===" << ANSI_RESET << std::endl;
    std::cout << ANSI_GREEN << "Size: " << ANSI_RESET << sizeof(T) << " bytes" << std::endl; 
    std::cout << ANSI_YELLOW << "Alignment: " << ANSI_RESET << alignof(T) << " bytes" << std::endl;
    std::cout << ANSI_MAGENTA << "Type name: " << ANSI_RESET << typeid(T).name() << std::endl;
    std::cout << std::string(50, '-') << std::endl;
}

template <typename T>
void print_class_instance_info(const T& instance, const std::string& instance_name)
{
    std::cout << ANSI_BOLD << ANSI_YELLOW << "Instance: " << instance_name << ANSI_RESET << std::endl;
    std::cout << ANSI_GREEN << "Address: " << ANSI_RESET << &instance << std::endl;
    std::cout << ANSI_YELLOW << "Size: " << ANSI_RESET << sizeof(instance) << " bytes" << std::endl;
    std::cout << std::string(50, '-') << std::endl;
}

// 打印标题
inline void print_title(const std::string& title)
{
    std::cout << std::endl;
    std::cout << ANSI_BOLD << ANSI_REVERSE << ANSI_WHITE << " " << title << " " << ANSI_RESET << std::endl;
    std::cout << std::endl;
}

// 打印分隔线
inline void print_separator() {
    std::cout << ANSI_BOLD << ANSI_BLUE << std::string(60, '=') << ANSI_RESET << std::endl;
}