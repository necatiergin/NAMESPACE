#include <iostream>

int main()
{
	std::cout << "Necati Ergin\n"; 
	operator<<(std::cout, "Tekin Aslan\n"); 
	//std::cout << endl; 
	endl(std::cout); 
	//(endl)(std::cout); 
}


/*
std::cout << "Necati Ergin\n"; 
Burada çağrılan operator<< işlevi std isim alanı içinde bildirilmesine karşın isim arama ile bulunuyor.
Fonksiyona gönderilen argüman olan std::cout std isim alanı içinde olduğundan operator<< işlev ismi std isim alanında da aranıyor.
operator<<(std::cout, "Tekin Aslan\n");   
Aynı durum burada da geçerli. operator<< ADL nedeniyle std isim alanında aranıyor.
std::cout << endl; 
Burada ADL devreye girmiyor. Çünkü çağrılan işlev endl işlevi değil. endl operator<< işlevine argüman olarak gönderiliyor.
(endl)(std::cout); 
Burada da endl fonksiyonu doğrudan çağrılmıyor. ADL devreye girmiyor.
*/
