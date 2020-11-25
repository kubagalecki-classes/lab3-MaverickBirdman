#pragma once

#include "Stocznia.hpp"
unsigned int transportujFlota(unsigned int towar)
		{
int unsigned liczbaZaglowcow=0;
int unsigned licznikPrzetransportowanegoSumarycznieTowaru=0;
	if (towar == 0)
{
	return 0;
}
	else
	{
	while (licznikPrzetransportowanegoSumarycznieTowaru < towar)
{
Stocznia stocznia{};
Statek* s1 = stocznia();
licznikPrzetransportowanegoSumarycznieTowaru = licznikPrzetransportowanegoSumarycznieTowaru + s1->transportuj();
	if (s1 == dynamic_cast<Zaglowiec*>(s1))
	{
	liczbaZaglowcow = ++liczbaZaglowcow;
	}
	delete s1;
}
	}
return liczbaZaglowcow;
		}
