#include "Comp_TB_R_Personne_Adresse.h"

String^ CL_comp_r_personne_adresse::Select(void)
{
    return "";
}

String^ CL_comp_r_personne_adresse::Insert(String^ adresse, String^ ville, String^ pseudo)
{
    return "INSERT INTO dbo.R_Personne_Adresse VALUES ((SELECT TOP 1 id_Adresse FROM dbo.adresse WHERE adresse = '" + adresse + "' AND ville = '" + ville + "'), (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "'), '" + typeAdresse + "');";
}

String^ CL_comp_r_personne_adresse::Update(String^ adresse, String^ ville, String^ pseudo)
{
    return "UPDATE dbo.R_Personne_Adresse SET id_Adresse = (SELECT TOP 1 id_Adresse FROM dbo.adresse WHERE ville = '" + ville + "' AND adresse = '" + adresse + "') WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "') AND type_adresse = '" + typeAdresse + "';";
}

String^ CL_comp_r_personne_adresse::Delete(String^ pseudo)
{
    return "DELETE FROM dbo.R_Personne_Adresse WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "');";
}

String^ CL_comp_r_personne_adresse::DeleteAdresse(String^ pseudo, String^ adresse, String^ ville, String^ type)
{
    return "DELETE FROM dbo.R_Personne_Adresse WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "') AND type_adresse = '" + type + "' AND id_Adresse = (SELECT TOP 1 id_Adresse FROM dbo.adresse WHERE ville = '" + ville + "' AND adresse = '" + adresse + "');";
}

void CL_comp_r_personne_adresse::setIdPersonne(int id)
{
    this->id_Personne = id;
}

int CL_comp_r_personne_adresse::getIdPersonne(void)
{
    return this->id_Personne;
}

void CL_comp_r_personne_adresse::setTypeAdresse(String^ type)
{
    this->typeAdresse = type;
}

String^ CL_comp_r_personne_adresse::getTypeAdresse(void)
{
    return this->typeAdresse;
}

void CL_comp_r_personne_adresse::setIdAdresse(int id)
{
    this->id_Adresse = id;
}

int CL_comp_r_personne_adresse::getIdAdresse(void)
{
    return this->id_Adresse;
}
