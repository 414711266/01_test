#include "../include/class_types.h"
#include "../include/test_utils.h"

// 测试空类的内存占用
void test_empty_class()
{
    print_title("测试1： 空类的内存占用");
    
    print_class_info<EmptyClass>("EmptyClass");

    // 创建空类实例
    EmptyClass empty_obj;
    print_class_instance_info(empty_obj, "empty_obj");

    // 测试空类数组
    EmptyClass empty_array[5];
    std::cout << ANSI_BOLD << ANSI_CYAN << "空类数组测试:" << ANSI_RESET << std::endl;
    std::cout << "数组大小: " << sizeof(empty_array) << " bytes" << std::endl;
    std::cout << "单个元素大小: " << sizeof(empty_array[0]) << " bytes" << std::endl;

    // 打印数组中每个元素的地址
    for (int i = 0; i < 5; ++i) {
        std::cout << "empty_array[" << i << "] address: " << &empty_array[i] << std::endl;
    }

    print_separator();
}

void test_member_variable_class()
{
    print_title("测试2： 包含成员变量的类");

    print_class_info<MemberVariableClass>("MemberVariableClass");

    // 分析成员变量的内存分布
    std::cout << ANSI_BOLD << ANSI_YELLOW << "成员变量内存分布分析:" << ANSI_RESET << std::endl;
    std::cout << "int(4 bytes) + char(1 bytes) + double(8 bytes) + bool(1 bytes) = "
              << (4 + 1 + 8 + 1) << " bytes(理论值)" << std::endl;

    // 测试内存对齐
    MemberVariableClass obj;
    char* obj_ptr = reinterpret_cast<char*>(&obj);

    std::cout << ANSI_BOLD << ANSI_MAGENTA << "内存对齐测试" << ANSI_RESET << std::endl;
    std::cout << "对象地址: " << static_cast<void*>(obj_ptr) << std::endl;
    std::cout << "地址是否按 " << alignof(MemberVariableClass) << " 字节对齐: "
              << ((reinterpret_cast<std::uintptr_t>(obj_ptr) % alignof(MemberVariableClass)) == 0 ? "是" : "否") 
              << std::endl;

    print_separator();
}