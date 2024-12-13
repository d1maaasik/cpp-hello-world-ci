#include <iostream>
#include "version.h"  // Подключаем сгенерированный заголовок

int main() {
    std::cout << "Hello, World! Version " << PROJECT_VERSION << std::endl;
    return 0;
}
