#pragma once

#include <iostream>

#include "funcionario.hpp"

class Veterinario : public Funcionario
{
public:
	Veterinario();
	Veterinario(std::string, short, Status, std::string);
	~Veterinario();

	std::string getCRMV() const;

	void setCRMV(std::string);

	void print(std::ostream&);

private:
	std::string CRMV;
};