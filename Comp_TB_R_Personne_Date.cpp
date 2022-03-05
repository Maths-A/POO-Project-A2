#include "Comp_TB_R_Personne_Date.h"

String^ CL_comp_r_personne_date::Select(void)
{
    return "";
}

String^ CL_comp_r_personne_date::Insert(String^ pseudo)
{
    return "INSERT INTO dbo.R_Personne_Date VALUES ((SELECT date FROM dbo.date WHERE date = '" + date + "'), (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "'), '" + typeDatePersonne + "');";
}

String^ CL_comp_r_personne_date::Update(String^ pseudo)
{
    return "UPDATE dbo.R_Personne_Date SET date = '" + date + "' WHERE  id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "') AND typeDatePersonne = '"+typeDatePersonne+"';";
}

String^ CL_comp_r_personne_date::Delete(String^ pseudo)
{
    return "DELETE FROM dbo.R_Personne_Date WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "');";
}

void CL_comp_r_personne_date::setIdPersonne(int id)
{
    this->id_Personne = id;
}

int CL_comp_r_personne_date::getIdPersonne(void)
{
    return this->id_Personne;
}

void CL_comp_r_personne_date::setTypeDatePersonne(String^ type)
{
    this->typeDatePersonne = type;
}

String^ CL_comp_r_personne_date::getTypeDatePersonne(void)
{
    return this->typeDatePersonne;
}

void CL_comp_r_personne_date::setDate(String^ date)
{
    this->date = date;
}

String^ CL_comp_r_personne_date::getIdDate(void)
{
    return this->date;
}
