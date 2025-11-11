#include <print>

inline namespace {
int mult(int a, int b) {
    return a * b;
}
} // namespace

void unsafe_example() {
    int buffer[10];
    buffer[15] = 5; // 缓冲区溢出

    int* ptr = (int*)malloc(sizeof(int)); // C风格转换
    // 可能忘记释放内存
}

class BadClass {
    int data;

public:
    BadClass() {
    } // 未初始化成员

    void process() {
        goto error; // 使用goto
    error:
        return;
    }
};

int main() {
    int i = mult(3, 2);
    std::print("{}", i);
}
