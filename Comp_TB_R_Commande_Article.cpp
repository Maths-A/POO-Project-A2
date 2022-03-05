#include "Comp_TB_R_Commande_Article.h"

String^ CL_comp_r_commande_article::Select(void)
{
    return "";
}

String^ CL_comp_r_commande_article::Insert(void)
{
    return "INSERT INTO dbo.R_Commande_Article Values ((SELECT reference FROM dbo.article WHERE reference = (SELECT reference FROM dbo.article WHERE designation = '" + reference + "')), (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "'),'" + quantiteCommande + "');";
}

String^ CL_comp_r_commande_article::Update(void)
{
    return "UPDATE dbo.R_Commande_Article SET quantiteCommande = '" + quantiteCommande + "' WHERE referenceCommande ='" + referenceCommande + "' AND reference = (SELECT reference FROM dbo.article WHERE designation = '" + reference + "')";
}

String^ CL_comp_r_commande_article::Delete(void)
{
    return "DELETE FROM dbo.R_Commande_Article WHERE reference = (SELECT reference FROM dbo.article WHERE reference = (SELECT reference FROM dbo.article WHERE designation = '" + reference + "')) AND referenceCommande = (SELECT referenceCommande FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "')";
}

String^ CL_comp_r_commande_article::DeleteALL(void)
{
    return "DELETE FROM dbo.R_Commande_Article WHERE referenceCommande = '" + referenceCommande + "'";
}

void CL_comp_r_commande_article::setReference(String^ idArticle)
{
    this->reference = idArticle;
}

String^ CL_comp_r_commande_article::getReference(void)
{
    return this->reference;
}

void CL_comp_r_commande_article::setReferenceCommande(String^ idCommande)
{
    this->referenceCommande = idCommande;
}

String^ CL_comp_r_commande_article::getReferenceCommande(void)
{
    return this->referenceCommande;
}

void CL_comp_r_commande_article::setQuantiteCommande(int quantite)
{
    this->quantiteCommande = quantite;
}

int CL_comp_r_commande_article::getQuantiteCommande(void)
{
    return this->quantiteCommande;
}
