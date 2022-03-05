#include "Comp_TB_Total.h"

String^ CL_comp_total::SelectHT(String^ referenceCommande)
{
	return "SELECT SUM(quantiteCommande * prixHT) AS PrixTotal FROM dbo.R_Commande_Article INNER JOIN dbo.article ON dbo.R_Commande_Article.reference = dbo.article.reference WHERE referenceCommande = '" + referenceCommande + "';";
}

String^ CL_comp_total::SelectTTC(String^ referenceCommande)
{
	return "SELECT SUM(quantiteCommande * prixTTC) AS PrixTotal FROM dbo.R_Commande_Article INNER JOIN dbo.article ON dbo.R_Commande_Article.reference = dbo.article.reference WHERE referenceCommande = '" + referenceCommande + "';";
}

String^ CL_comp_total::Insert(int total)
{
	return "INSERT INTO dbo.total VALUES ('" + total + "') ;";
}

String^ CL_comp_total::Update(void)
{
	return "";
}

String^ CL_comp_total::Delete(void)
{
	return "";
}

void CL_comp_total::setTotal(int total)
{
	this->total = total;
}

int CL_comp_total::getTotal(void)
{
	return this->total;
}
