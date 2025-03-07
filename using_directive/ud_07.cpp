namespace nec
{
	int x;
	//...
}

namespace erg
{
	using namespace nec;
	//...
}

using namespace erg;

int main()
{
	x = 10;			// valid
}

// "using namespace erg" direktifi ile erg isim alanı içerisindeki isimler global isim alanında görülür olur
//Böylece isim alanındaki "using namespace nec" direktifi de sanki global isim alanındaymış gibi etkiye sahip olur.
// Bu etki de nec isim alanı içerisindekilerin global isim alanına enjekte edilmesine yol açar.
