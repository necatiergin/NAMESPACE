namespace very_long_namespace_name::project::details {
    void func();
}

namespace details = very_long_namespace_name::project::details;

using details::func;

int main() 
{
    func(); // valid
}
