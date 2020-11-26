#pragma once

#include "anfibio.hpp"
#include "exotico.hpp"

class AnfibioExotico: public Anfibio, public Exotico
{
public:
	AnfibioExotico(std::string especie, short id, char ameacadaExtincao, char perigoso, std::string NF, std::string territorio);
	~AnfibioExotico();
	
	void print(std::ostream&);
	
};