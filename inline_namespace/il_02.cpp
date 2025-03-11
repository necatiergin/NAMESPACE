namespace Nec {
   namespace Nested {
        class C {
            //...
        };
        //...
   }
   using namespace Nested;
   void func(Nested::C);
}

int main()
{
    Nec::Nested::C x;
    func(x); //gecersiz
}


/*
namespace Nec {
   inline namespace Nested {
        class C {
            //...
        };
        //...
   }
   void func(Nested::C);
}
*/
