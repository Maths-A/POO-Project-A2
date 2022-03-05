#include "Comp_TB_R_Commande_Total.h"

String^ CL_comp_r_commande_total::Select(void)
{
    return "";
}

String^ CL_comp_r_commande_total::Insert(int total)
{
    return "INSERT INTO dbo.R_Commande_Total Values ((SELECT total FROM dbo.total WHERE total = '" + total + "'), (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "'),'"+typeTotal+"');";
}

String^ CL_comp_r_commande_total::Update(int total)
{
    return "UPDATE dbo.R_Commande_Total SET total = '" + total + "' WHERE referenceCommande = '" + referenceCommande + "' AND typeTotal = '" + typeTotal + "'";
}

String^ CL_comp_r_commande_total::Delete(void)
{
    return "DELETE FROM dbo.R_Commande_Total WHERE referenceCommande = (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "');";
}

void CL_comp_r_commande_total::setTotal(int total)
{
    this->total = total;
}

int CL_comp_r_commande_total::getTotal(void)
{
    return this->total;
}

void CL_comp_r_commande_total::setReferenceCommande(String^ id)
{
    this->referenceCommande = id;
}

String^ CL_comp_r_commande_total::getReferenceCommande(void)
{
    return this->referenceCommande;
}

void CL_comp_r_commande_total::setTypeTotal(String^ type)
{
    this->typeTotal = type;
}

String^ CL_comp_r_commande_total::getTypeTotal(void)
{
    return this->typeTotal;
}
