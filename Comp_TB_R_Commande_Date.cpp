#include "Comp_TB_R_Commande_Date.h"

String^ CL_comp_r_commande_date::Select(void)
{
    return "";
}

String^ CL_comp_r_commande_date::Insert(void)
{
    return "INSERT INTO dbo.R_Commande_Date VALUES ((SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "'), (SELECT date FROM dbo.date WHERE date = '" + date + "'),'" + typeDateCommande + "');";
}

String^ CL_comp_r_commande_date::Update(void)
{
    return "UPDATE dbo.R_Commande_Date SET date = '" + date + "' WHERE date = (SELECT date FROM dbo.R_Commande_Date WHERE referenceCommande = (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "') AND typeDateCommande = '" + typeDateCommande + "')";
}

String^ CL_comp_r_commande_date::Delete(void)
{
    return "DELETE FROM dbo.R_Commande_Date  WHERE referenceCommande = (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "');";
}

void CL_comp_r_commande_date::setDate(String^ date)
{
    this->date = date;
}

String^ CL_comp_r_commande_date::getDate(void)
{
    return this->date;
}

void CL_comp_r_commande_date::setReferenceCommande(String^ id)
{
    this->referenceCommande = id;
}

String^ CL_comp_r_commande_date::getReferenceCommande(void)
{
    return this->referenceCommande;
}

void CL_comp_r_commande_date::setTypeDateCommande(String^ type)
{
    this->typeDateCommande = type;
}

String^ CL_comp_r_commande_date::getTypeDateCommande(void)
{
    return this->typeDateCommande;
}
