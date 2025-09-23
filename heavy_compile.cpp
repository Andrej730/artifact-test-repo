#include <iostream>

#define DEFINE_HEAVY(name) \
template<int N> struct name { \
    static constexpr long long value = name<N-1>::value + N * 1LL * N; \
}; \
template<> struct name<0> { static constexpr long long value = 0; };

DEFINE_HEAVY(Heavy)
DEFINE_HEAVY(Heavy2)
DEFINE_HEAVY(Heavy3)
DEFINE_HEAVY(Heavy4)
DEFINE_HEAVY(Heavy5)
DEFINE_HEAVY(Heavy6)
DEFINE_HEAVY(Heavy7)
DEFINE_HEAVY(Heavy8)
DEFINE_HEAVY(Heavy9)
DEFINE_HEAVY(Heavy10)
DEFINE_HEAVY(Heavy11)
DEFINE_HEAVY(Heavy12)
DEFINE_HEAVY(Heavy13)
DEFINE_HEAVY(Heavy14)
DEFINE_HEAVY(Heavy15)
DEFINE_HEAVY(Heavy16)

int main() {
    std::cout << "Result: " << Heavy<50000>::value + Heavy2<50000>::value + Heavy3<50000>::value + Heavy4<50000>::value + Heavy5<50000>::value + Heavy6<50000>::value + Heavy7<50000>::value + Heavy8<50000>::value + Heavy9<50000>::value + Heavy10<50000>::value + Heavy11<50000>::value + Heavy12<50000>::value + Heavy13<50000>::value + Heavy14<50000>::value + Heavy15<50000>::value + Heavy16<50000>::value << std::endl;
    std::cout << "Hello World" << std::endl;
}