namespace A {
    struct A { operator int(); };
    void f(A);
}
namespace B {
    void f(int);
    void f(double);
    void test() {
        A::A a;
        void (*fp)(int) = f;  // OK, no ADL
        void (*gp)(A::A) = f; // ERROR, no ADL, fails to find A::f
        f(a);     // ADL, calls A::f(A)
        (&f)(a);  // no ADL, calls B::f(int)
        (f)(a);   // no ADL, calls B::f(int)
    }
}
