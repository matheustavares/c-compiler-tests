int main() {
    {
        goto out;
        return 3;
    }
    out:
    return 2;
}
