consteval long fib(unsigned n) {
    if (n <= 1) {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main() {
    static constinit long x = fib(32);
}
