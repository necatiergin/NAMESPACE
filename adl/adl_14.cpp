struct Nec {
    Nec(int) {}
    friend void foo(Nec) {};
};

int main() 
{
    Nec nec{ 34 };
    foo(nec);       // ADL, calls foo defined in friend declaration
    foo(99);        // Error: foo not found, as int is not Nec
    ::foo(nec);     // Error: foo not found as ADL not triggered with qualifed name
}
