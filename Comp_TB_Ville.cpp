#include "Comp_TB_Ville.h"

String^ CL_comp_ville::Select(void)
{
	return "";
}

String^ CL_comp_ville::Insert(void)
{
	return "INSERT INTO dbo.ville VALUES ('" + ville + "');";
}

String^ CL_comp_ville::Update(void)
{
	return "";
}

String^ CL_comp_ville::Delete(void)
{
	return "";
}

void CL_comp_ville::setVille(String^ ville)
{
	this->ville = ville;
}

String^ CL_comp_ville::getVille(void)
{
	return this->ville;
}
