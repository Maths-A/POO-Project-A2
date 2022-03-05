#include "Comp_TB_Superieur.h"

String^ CL_comp_superieur::Select(void)
{
    return "";
}

String^ CL_comp_superieur::Insert(String^ pseudoE, String^ pseudoS)
{
    return "INSERT INTO dbo.superieur VALUES ((SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudoE + "'), (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudoS + "'));";
}

String^ CL_comp_superieur::Update(String^ pseudoE, String^ pseudoS)
{
    return "UPDATE dbo.superieur SET id_personne_personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudoE + "') WHERE id_personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudoS + "');";
}

String^ CL_comp_superieur::Delete(String^ pseudoE)
{
    return "DELETE FROM dbo.superieur WHERE id_Personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudoE + "')";
}

void CL_comp_superieur::setIdPersonne(int id)
{
    this->id_Personne = id;
}

int CL_comp_superieur::getIdPersonne(void)
{
    return this->id_Personne;
}

void CL_comp_superieur::setIdPersonnePersonne(int id)
{
    this->id_Personne_Personne = id;
}

int CL_comp_superieur::getIdPersonnePersonne(void)
{
    return this->id_Personne_Personne;
}
