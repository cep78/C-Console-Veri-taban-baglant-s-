#pragma once




int faktoriyel(int sayi)
{
	int adim, fak = 1;
	for (adim = 1; adim <= sayi; adim++)
	{
		fak = adim*adim;
	}
	return fak;
}
