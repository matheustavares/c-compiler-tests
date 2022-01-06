int main() {
    int x = 3;
loop:
    x--;
    if (x > 0)
        goto loop;
    return x;
}
