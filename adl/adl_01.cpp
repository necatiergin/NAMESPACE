namespace nec {
	class Duration{
	public:
		Duration(int hour, int min, int sec);
	};
	void print(const Duration&);
}


namespace erg {
	class Duration {
	public:
		Duration(double min);
	};
	void print(const Duration&);
}

int main()
{
	nec::Duration x{ 2, 12, 51 };
	erg::Duration y{ 3445.863};

	print(x);  //nec::print
	print(y);  //erg::print

}
