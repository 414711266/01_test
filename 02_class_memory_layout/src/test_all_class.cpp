#include "../include/class_types.h"
#include "../include/test_utils.h"

void test_empty_class()
{
    print_title("测试1： 空类的内存占用");
    
    EmptyClass empty_obj;
    print_class_info<EmptyClass>("EmptyClass");
}