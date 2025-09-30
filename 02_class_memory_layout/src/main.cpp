#include "../include/class_types.h"
#include "../include/test_utils.h"
#include <windows.h>

void test_empty_class();

int main()
{
    SetConsoleOutputCP(CP_UTF8); // 设置控制台支持 UTF-8
    // SetConsoleCP(CP_UTF8);

    test_empty_class();
    system("pause");
    return 0;
}