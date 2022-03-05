#include "Comp_Statistique.h"

String^ CL_comp_statistique::afficherCalculerPanierMoyenAvecRemise(void)
{
    return "SELECT referenceCommande, avg(total) as PanierMoyen FROM dbo.R_Commande_Total group by referenceCommande;";
}

String^ CL_comp_statistique::afficherCalculerChiffreAffaireMois(String^ date)
{
    return "SELECT SUM(total) AS chiffreAffaireMois FROM dbo.commande INNER JOIN dbo.R_Commande_Date ON commande.referenceCommande = R_Commande_Date.referenceCommande INNER JOIN dbo.R_Commande_Total ON commande.referenceCommande = R_Commande_Total.referenceCommande WHERE MONTH(date) = MONTH('"+date+"') AND typeDateCommande = 'Paiem' AND typeTotal = 'totalTTC'";
}

String^ CL_comp_statistique::afficherProduitSousSeuilReapro(void)
{
    return "SELECT designation, seuilReapro, quantiteStock FROM dbo.article WHERE seuilReapro>quantiteStock;";
}

String^ CL_comp_statistique::afficherCalculerMontantTotalAchatClient(String^ pseudo)
{
    return "SELECT SUM(total) AS montantTotal FROM dbo.personne INNER JOIN dbo.commande ON personne.id_Personne = commande.id_Personne INNER JOIN dbo.R_Commande_Total ON commande.referenceCommande = R_Commande_Total.referenceCommande WHERE pseudo = '" + pseudo + "' AND typeTotal = 'ToTTC';";
}

String^ CL_comp_statistique::afficher10ArticlesPlusVendus(void)
{
    return "SELECT TOP 10 designation FROM (SELECT reference, SUM (quantiteCommande) AS produitPlusVendus FROM dbo.R_Commande_Article GROUP BY reference) AS T1 INNER JOIN dbo.article ON dbo.article.reference = T1.reference ORDER BY designation ASC;";
}

String^ CL_comp_statistique::afficher10ArticlesMoinsVendus(void)
{
    return "SELECT TOP 10 designation FROM (SELECT reference, SUM (quantiteCommande) AS produitPlusVendus FROM dbo.R_Commande_Article GROUP BY reference) AS T1 INNER JOIN dbo.article ON dbo.article.reference = T1.reference ORDER BY designation DESC;";
}

String^ CL_comp_statistique::afficherValeurCommercialeStock(void)
{
    return "SELECT SUM(quantiteStock*prixTTC) AS valeurCommercialStock FROM dbo.article;";
}

String^ CL_comp_statistique::afficherValeurAchatStock(void)
{
    return "SELECT SUM (prixHT*quantiteStock) AS valeurachatStock FROM dbo.article;";
}

String^ CL_comp_statistique::afficherSimulerValeurCommercial(int TVA, int margeCommercial, int remiseCommerciale, int demarqueInconnues)
{
    return "SELECT (SUM(quantiteStock*prixHT)+('"+TVA+"'*SUM(quantiteStock*prixHT)/100)+('" + margeCommercial + "'*SUM(quantiteStock*prixHT)/100)-('" + remiseCommerciale + "'*SUM(quantiteStock*prixHT)/100)-('" + demarqueInconnues + "'*SUM(quantiteStock*prixHT)/100)) AS valeurStockTTC FROM dbo.article;";
}
