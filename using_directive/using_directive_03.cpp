// using namespace directive may not be in class scope

namespace nec {

}

class Myclass {
	//...
	using namespace nec;   //error
};
