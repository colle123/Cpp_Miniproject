#include"PoP.h"	

POP::POP(BOM& temp)
{
	aaa = new BOM(temp);
}

void POP::showpop()
{
	aaa->Print_produt();
}
