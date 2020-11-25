#pragma once

#include "Stocznia.hpp"
unsigned int transportujFlota(unsigned int towar)
{
	int unsigned liczbaZaglowcow=0;
	int unsigned licznikPrzetransportowanegoSumarycznieTowaru=0;
	//#dod

	if (towar == 0)
		{
		return 0;
		}
	else
		{
		while (licznikPrzetransportowanegoSumarycznieTowaru < towar)
		{
	//#1
			Stocznia stocznia{};
			Statek* s1 = stocznia();
	//#2 + #3
			licznikPrzetransportowanegoSumarycznieTowaru = licznikPrzetransportowanegoSumarycznieTowaru + s1->transportuj();
	//#dod
	if (s1 == dynamic_cast<Zaglowiec*>(s1))
		{
		liczbaZaglowcow = ++liczbaZaglowcow;
		}
	//#4
	delete s1;
		}
	}
return liczbaZaglowcow;
}
}
