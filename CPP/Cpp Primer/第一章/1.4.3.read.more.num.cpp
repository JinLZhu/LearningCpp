#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // 读取数据直到文件末尾，计算所有读入值的和
    std::cout << "请输入数字(输入e结束)" << std::endl;

    while(std::cin >> value){
        if (value != 'e'){
            sum += value; //等价于sum = sum + value
            std::cout << "Sum is: " << sum << std::endl;
        }else{
            break;
        }
    }

    return 0;
}

