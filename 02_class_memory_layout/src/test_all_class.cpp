#include "../include/class_types.h"
#include "../include/test_utils.h"

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