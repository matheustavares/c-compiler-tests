int main() {
    int a = 2;
    int b = 3;
    int c = 4;
    a *= b = c + 1;
    return a + b + c;
}
