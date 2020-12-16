
#include "mamifero.hpp"

Mamifero::Mamifero(const std::string& especie, Classe classe, Classificacao classificacao, short id, char ameacadaExtincao, char perigoso, const std::string& NF):
	Animal(especie, classe, classificacao, id, ameacadaExtincao, perigoso, NF)
{}

Mamifero::~Mamifero()
{}
