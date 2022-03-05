#include "Svc_Gestion_Commande.h"

CL_svc_commande::CL_svc_commande(void)
{
	this->oCAD = gcnew CL_comp_CAD;
	//this->ds = gcnew DataSet;
    this->oTBpersonne = gcnew CL_comp_personne;
    this->oTBadresse = gcnew CL_comp_adresse;
    this->oTBcommande = gcnew CL_comp_commande;
    this->oTBrCommandeArticle = gcnew CL_comp_r_commande_article;
    this->oTBrCommandeDate = gcnew CL_comp_r_commande_date;
    this->oTBdate = gcnew CL_comp_date;
    this->oTBrCommandeTotal = gcnew CL_comp_r_commande_total;
    this->oTBmoyenPaiement = gcnew CL_comp_moyenPaiement;
    this->oTBtotal = gcnew CL_comp_total;
}

System::Data::DataSet^ CL_svc_commande::afficherCommande(String^ dataTableName, String^ reference)
{
    this->oTBcommande->setReferenceCommande(reference);

    this->ds = this->oCAD->getRows((this->oTBcommande->Select()), dataTableName);
    return this->ds;
}

String^ CL_svc_commande::ajouterCommande(String^ reference, String^ pseudo, String^ moyenPaiement, String^ dateEmission, String^ dateLivraison, String^ datePaiement)
{
    String^ sql;
    String^ erreur = "";
    this->oTBcommande->setReferenceCommande(reference);
    this->oTBcommande->setMoyenPaiement(moyenPaiement);
    this->oTBdate->setDate(dateEmission);
    this->oTBrCommandeDate->setReferenceCommande(reference);
    this->oTBrCommandeDate->setTypeDateCommande("Emiss");
    this->oTBrCommandeDate->setDate(dateEmission);

    sql = this->oTBcommande->Insert(pseudo);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! La référence est déjà utilisé !";
        return erreur;
    }

    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert R commande Date dateEmiss)!";
        return erreur;
    }

    this->oTBdate->setDate(dateLivraison);
    this->oTBrCommandeDate->setTypeDateCommande("Livr");
    this->oTBrCommandeDate->setDate(dateLivraison);
    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert R commande Date dateLivr)!";
        return erreur;
    }

    this->oTBdate->setDate(datePaiement);
    this->oTBrCommandeDate->setTypeDateCommande("Paiem");
    this->oTBrCommandeDate->setDate(datePaiement);
    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert R commande Date paiement)!";
        return erreur;
    }

    int total = 0;

    this->oTBrCommandeTotal->setReferenceCommande(reference);
    this->oTBrCommandeTotal->setTypeTotal("TotalTTC");
    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeTotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert total TTC)!";
        return erreur;
    }

    total = 1;
    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    this->oTBrCommandeTotal->setTypeTotal("TotalHT");
    sql = this->oTBrCommandeTotal->Insert(total);
    /*try
    {*/
        this->oCAD->actionRows(sql);
    /*}
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert total HT)!";
        return erreur;
    }*/

    return erreur;
}

String^ CL_svc_commande::ajouterArticleCommande(String^ reference, String^ designation, int quantite)
{
    String^ sql;
    String^ erreur = "";
    this->oTBrCommandeArticle->setReference(designation);
    this->oTBrCommandeArticle->setReferenceCommande(reference);
    this->oTBrCommandeArticle->setQuantiteCommande(quantite);
    this->oTBrCommandeTotal->setReferenceCommande(reference);

    sql = this->oTBrCommandeArticle->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert R commande article)!";
        return erreur;
    }

    int total;
    sql = this->oTBtotal->SelectHT(reference);
    try
    {
        total = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {
        
    }

    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    this->oTBrCommandeTotal->setTypeTotal("TotalHT");
    sql = this->oTBrCommandeTotal->Update(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert total)!";
        return erreur;
    }

    sql = this->oTBtotal->SelectTTC(reference);
    try
    {
        total = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {
        
    }

    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    this->oTBrCommandeTotal->setTypeTotal("TotalTTC");
    sql = this->oTBrCommandeTotal->Update(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Création non réussite (Code : Insert total)!";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_commande::modifierCommande(String^ reference, String^ pseudo, String^ moyenPaiement, String^ dateEmission, String^ dateLivraison, String^ datePaiement)
{
    String^ sql;
    String^ erreur = "";
    this->oTBcommande->setReferenceCommande(reference);
    this->oTBcommande->setMoyenPaiement(moyenPaiement);
    this->oTBdate->setDate(dateEmission);
    this->oTBrCommandeDate->setReferenceCommande(reference);
    this->oTBrCommandeDate->setTypeDateCommande("Emiss");
    this->oTBrCommandeDate->setDate(dateEmission);
    this->oTBmoyenPaiement->setMoyenPaiement(moyenPaiement);

    sql = this->oTBmoyenPaiement->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBcommande->Update();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification non réussite (Code : Update commande)!";
        return erreur;
    }

    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Update();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification non réussite (Code : Update R commande date Emiss)!";
        return erreur;
    }

    this->oTBdate->setDate(dateLivraison);
    this->oTBrCommandeDate->setTypeDateCommande("Livr");
    this->oTBrCommandeDate->setDate(dateLivraison);

    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Update();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification non réussite (Code : Update R commande date Livr)!";
        return erreur;
    }

    this->oTBdate->setDate(datePaiement);
    this->oTBrCommandeDate->setTypeDateCommande("Paiem");
    this->oTBrCommandeDate->setDate(datePaiement);

    sql = this->oTBdate->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeDate->Update();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification non réussite (Code : Update R commande date Livr) !";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_commande::modifierArticleCommande(String^ reference, String^ designation, int quantite)
{
    String^ sql;
    String^ erreur = "";
    this->oTBrCommandeArticle->setReference(designation);
    this->oTBrCommandeArticle->setReferenceCommande(reference);
    this->oTBrCommandeArticle->setQuantiteCommande(quantite);
    this->oTBrCommandeTotal->setReferenceCommande(reference);

    sql = this->oTBrCommandeArticle->Update();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification Article non réussite !";
        return erreur;
    }

    int total;
    this->oTBrCommandeTotal->setTypeTotal("TotalHT");
    sql = this->oTBtotal->SelectHT(reference);
    try
    {
        total = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {

    }

    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeTotal->Update(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification Article non réussite !";
        return erreur;
    }

    this->oTBrCommandeTotal->setTypeTotal("TotalTTC");
    sql = this->oTBtotal->SelectTTC(reference);
    try
    {
        total = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {

    }

    sql = this->oTBtotal->Insert(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeTotal->Update(total);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Modification Article non réussite !";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_commande::supprimerCommande(String^ reference)
{
    String^ sql;
    String^ erreur = "";
    this->oTBrCommandeTotal->setReferenceCommande(reference);
    this->oTBrCommandeDate->setReferenceCommande(reference);
    this->oTBrCommandeArticle->setReferenceCommande(reference);

    sql = this->oTBrCommandeDate->Delete();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Supression non réussite (Code : Delete R commande Date)!";
        return erreur;
    }

    sql = this->oTBrCommandeTotal->Delete();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Supression non réussite (Code : Delete R commande Total)!";
        return erreur;
    }


    sql = this->oTBrCommandeArticle->DeleteALL();
    /*try
    {*/
        this->oCAD->actionRows(sql);
    /*}
    catch (...)
    {
        erreur = "! Erreur ! Supression non réussite (Code : Delete R commande Article)!";
        return erreur;
    }*/

    this->oTBcommande->setReferenceCommande(reference);
    sql = this->oTBcommande->Delete();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Supression non réussite (Code : Delete commande) !";
        return erreur;
    }

    return erreur;
}

String^ CL_svc_commande::supprimerArticleCommande(String^ reference, String^ designation)
{
    String^ sql;
    String^ erreur = "";
    this->oTBrCommandeArticle->setReference(designation);
    this->oTBrCommandeArticle->setReferenceCommande(reference);
    this->oTBrCommandeTotal->setReferenceCommande(reference);

    sql = this->oTBrCommandeArticle->Delete();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Suppression Article non réussite !";
        return erreur;
    }

    int totalHT;
    this->oTBrCommandeTotal->setTypeTotal("TotalHT");
    sql = this->oTBtotal->SelectHT(reference);
    try
    {
        totalHT = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {

    }

    sql = this->oTBtotal->Insert(totalHT);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeTotal->Update(totalHT);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Suppression Article réussite !";
        return erreur;
    }

    int totalTTC;
    this->oTBrCommandeTotal->setTypeTotal("TotalTTC");
    sql = this->oTBtotal->SelectTTC(reference);
    try
    {
        totalTTC = Convert::ToInt32(this->oCAD->actionRowsID(sql));
    }
    catch (...)
    {

    }

    sql = this->oTBtotal->Insert(totalTTC);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBrCommandeTotal->Update(totalTTC);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Suppression Article réussite !";
        return erreur;
    }
    return erreur;
}

