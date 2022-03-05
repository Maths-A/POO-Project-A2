#include "Comp_TB_Adresse.h"

String^ CL_comp_adresse::Select(void)
{
	return "";
}

String^ CL_comp_adresse::Insert(void)
{
	return "INSERT INTO dbo.adresse VALUES ('" + adresse + "', '" + ville + "') ";
}

String^ CL_comp_adresse::Update(String^ pseudo)
{
	return "UPDATE dbo.adresse SET adresse = '" + adresse + "', ville = '" + ville + "' WHERE id_Adresse = (SELECT id_adresse FROM dbo.R_Personne_Adresse WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "')) ";
}

String^ CL_comp_adresse::Delete(void)
{
	return "";
}

void CL_comp_adresse::setIdAdresse(int id)
{
	this->id_Adresse = id;
}

int CL_comp_adresse::getIdAdresse(void)
{
	return this->id_Adresse;
}

void CL_comp_adresse::setAdresse(String^ adresse)
{
	this->adresse = adresse;
}

String^ CL_comp_adresse::getAdresse(void)
{
	return this->adresse;
}

void CL_comp_adresse::setVille(String^ ville)
{
	this->ville = ville;
}

String^ CL_comp_adresse::getVille(void)
{
	return this->ville;
}
