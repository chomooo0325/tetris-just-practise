#include <iostream>

void decode(int v) {
    std::cout << "正在解密数字: " << v << std::endl;
    
    // 根据 tinytetris 的规则：每个点占 4 位 (2位给X, 2位给Y)
    // 我们循环 4 次来提取 4 个点的坐标
    for (int i = 0; i < 4; i++) {
        // 右移并取最后两位得到 X
        int x = (v >> (i * 4 + 4)) & 3;
        // 再往后看两位得到 Y
        int y = (v >> (i * 4 + 6)) & 3;
        
        std::cout << "第 " << i + 1 << " 个小格子的位置: (" << x << ", " << y << ")" << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
}

int main() {
    // 尝试解密你刚才看到的几个数字
    decode(431424); // 某种方块的形态
    decode(598356); // 另一种形态
    
    return 0;
}