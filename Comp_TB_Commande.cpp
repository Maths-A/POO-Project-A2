#include "Comp_TB_Commande.h"

String^ CL_comp_commande::Select(void)
{
    return "SELECT DISTINCT pseudo, nom, prenom, moyenPaiement, adresse, ville, DatePaiement = (SELECT date FROM R_Commande_Date WHERE typeDateCommande = 'Paiem' AND referenceCommande = '" + referenceCommande + "'), DateEmission = (SELECT date FROM R_Commande_Date WHERE typeDateCommande = 'Emiss' AND referenceCommande = '" + referenceCommande + "'), DateLivraison = (SELECT date FROM R_Commande_Date WHERE typeDateCommande = 'Livr' AND referenceCommande = '" + referenceCommande + "'),  designation, quantiteCommande, TotalHT = (SELECT total FROM R_Commande_Total WHERE typeTotal = 'TotalHT' AND referenceCommande = '" + referenceCommande + "'), TotalTTC = (SELECT total FROM R_Commande_Total WHERE typeTotal = 'TotalHT' AND referenceCommande = '" + referenceCommande + "') FROM dbo.commande INNER JOIN dbo.personne ON personne.id_Personne = commande.id_Personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse INNER JOIN dbo.R_Commande_Date ON R_Commande_Date.referenceCommande = commande.referenceCommande INNER JOIN dbo.R_Commande_Article ON R_Commande_Article.referenceCommande = commande.referenceCommande INNER JOIN dbo.article ON article.reference = R_Commande_Article.reference INNER JOIN dbo.R_Commande_Total ON R_Commande_Total.referenceCommande = commande.referenceCommande WHERE commande.referenceCommande = '" + referenceCommande + "'";
}

String^ CL_comp_commande::Insert(String^ pseudo)
{
    return "INSERT INTO dbo.commande VALUES ('" + referenceCommande + "', '" + moyenPaiement + "', (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "'), (SELECT TOP 1 id_Adresse FROM dbo.adresse WHERE id_Adresse = (SELECT id_Adresse FROM dbo.R_Personne_Adresse WHERE id_personne = (SELECT id_Personne FROM dbo.personne WHERE pseudo = '" + pseudo + "')AND type_adresse = 'Livr')));";
}

String^ CL_comp_commande::Update(void)
{
    return "UPDATE dbo.commande SET moyenPaiement = '" + moyenPaiement + "' WHERE referenceCommande = '" + referenceCommande + "';";
}

String^ CL_comp_commande::Delete(void)
{
    return "DELETE FROM dbo.commande WHERE referenceCommande = '" + referenceCommande + "';";
}

void CL_comp_commande::setReferenceCommande(String^ id)
{
    this->referenceCommande = id;
}

String^ CL_comp_commande::getReferenceCommande(void)
{
    return this->referenceCommande;
}

void CL_comp_commande::setMoyenPaiement(String^ moyenPaiement)
{
    this->moyenPaiement = moyenPaiement;
}

String^ CL_comp_commande::getMoyenPaiement(void)
{
    return this->moyenPaiement;
}

void CL_comp_commande::setId_Personne(int id)
{
    this->id_Personne = id;
}

int CL_comp_commande::getId_Personne(void)
{
    return this->id_Personne;
}

void CL_comp_commande::setId_Adresse(int id)
{
    this->id_Adresse = id;
}

int CL_comp_commande::getId_Adresse(void)
{
    return this->id_Adresse;
}
