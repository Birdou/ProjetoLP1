
#include "mamiferoDomestico.hpp"

/**
 * @brief Construtor parametrizado do MamiferoDomestico
 * @details Construtor parametrizado do MamiferoDomestico
 * @param especie :: Especifica a espécie do MamiferoDomestico
 * @param id :: Especifica o id do MamiferoDomestico
 * @param ameacadaExtincao :: Informa se o MamiferoDomestico está em risco de extinção
 * @param perigoso :: Informa se o MamiferoDomestico é perigoso
 * @param NF :: Nota fiscal do MamiferoDomestico
*/
MamiferoDomestico::MamiferoDomestico(std::string especie, Classe classe, Classificacao classificacao, short id, char ameacadaExtincao, char perigoso, std::string NF):
Mamifero(especie, classe, classificacao, id, ameacadaExtincao, perigoso, NF)
{
	Debug("MamiferoDomestico " << this->id << " [" << this << "] foi criado." << std::endl);
}

/**
 * @brief Destrutor padrão
*/
MamiferoDomestico::~MamiferoDomestico()
{}

/**
 * @brief Imprime os dados do Anfibio
 * @param o :: Stream de saída dos dados
*/
void MamiferoDomestico::print(std::ostream& o)
{
	//AQUI SERÃO APRESENTADOS DADOS RELEVANTES A RESPEITO DE MAMÍFEROS (DOMÉSTICOS)
	o
	 << "ESPECIE: " << this->especie << std::endl
	 << "ID: " << this->id << std::endl
	 << "CLASSE: Mamífero" << std::endl
	 << "CLASSIFICAÇÃO: Doméstico" << std::endl
	 << "AMEAÇADA DE EXTINÇÃO: " << (this->ameacadaExtincao ? "sim" : "não") << std::endl
	 << "PERIGOSO: " << (this->perigoso ? "sim" : "não") << std::endl
	 << "NOTA FISCAL: " << this->NF << std::endl
	 << "VETERINÁRIO RESPONSÁVEL: " << this->getVeterinario()->getNome() << std::endl
	 << "TRATADOR RESPONSÁVEL: " << this->getTratador()->getNome() << std::endl;
}

void MamiferoDomestico::save(std::ofstream& file)
{
	file
	 << this->id                   << ";"
	 << this->especie              << ";"
	 << this->classe               << ";"
	 << this->classificacao        << ";"
	 << this->ameacadaExtincao     << ";"
	 << this->perigoso             << ";"
	 << this->NF                   << ";"
	 << this->tratador->getId()    << ";"
	 << this->veterinario->getId() << ";"
	 << "-";
}