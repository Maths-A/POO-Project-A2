#include "Svc_Gestion_Client.h"

CL_svc_client::CL_svc_client(void)
{
    this->oCAD = gcnew CL_comp_CAD;
    //this->ds = gcnew DataSet;
    this->oTBpersonne = gcnew CL_comp_personne;
    this->oTBadresse = gcnew CL_comp_adresse;
    this->oTBtype = gcnew CL_comp_type;
    this->oTBville = gcnew CL_comp_ville;
    this->oTBdate = gcnew CL_comp_date;
    this->oTBrPersonneAdresse = gcnew CL_comp_r_personne_adresse;
    this->oTBrPersonneDate = gcnew CL_comp_r_personne_date;
}

System::Data::DataSet^ CL_svc_client::afficherClient(String^ dataTableName)
{
    oTBpersonne->setType("clien");
    this->ds = this->oCAD->getRows((this->oTBpersonne->SelectALL()), dataTableName);
    return this->ds;
}

System::Data::DataSet^ CL_svc_client::afficherUNClient(String^ dataTableName, String^ pseudo)
{
    oTBpersonne->setPseudo(pseudo);
    oTBpersonne->setType("clien");
    this->ds = this->oCAD->getRows((this->oTBpersonne->Select()), dataTableName);
    return this->ds;
}

String^ CL_svc_client::ajouterClient(String^ pseudo, String^ nom, String^ prenom, String^ adresseLivr, String^ villeLivr, String^ adresseFactu, String^ villeFactu, String^ date)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBpersonne->setNom(nom);
    this->oTBpersonne->setPrenom(prenom);
    this->oTBpersonne->setType("clien");
    this->oTBtype->setType("clien");
    this->oTBdate->setDate(date);
    this->oTBrPersonneDate->setTypeDatePersonne("Anniversaire");
    this->oTBrPersonneDate->setDate(date);

    sql = this->oTBtype->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBpersonne->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Le pseudo est déjà utilisé !";
        return erreur;
    }

    this->oTBadresse->setAdresse(adresseLivr);
    this->oTBadresse->setVille(villeLivr);
    this->oTBville->setVille(villeLivr);
    this->oTBrPersonneAdresse->setTypeAdresse("Livr");

    sql = this->oTBville->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBadresse->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert adresse Livr)!";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Insert(adresseLivr, villeLivr, pseudo);
    /*try
    {*/
    this->oCAD->actionRows(sql);
    /*}
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert PersAdress Livr)!";
        return erreur;
    }*/

    this->oTBadresse->setAdresse(adresseFactu);
    this->oTBadresse->setVille(villeFactu);
    this->oTBville->setVille(villeFactu);
    this->oTBrPersonneAdresse->setTypeAdresse("Factu");

    sql = this->oTBville->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBadresse->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert adresse Factu)!";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Insert(adresseFactu, villeFactu, pseudo);
    /*try
    {*/
        this->oCAD->actionRows(sql);
    /*}
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert PersAdress Factu)!";
        return erreur;
    }*/

    sql = this->oTBdate->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
    
    }

    sql = this->oTBrPersonneDate->Insert(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert client date)!";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_client::modifierClient(String^ pseudo, String^ nom, String^ prenom, String^ adresseLivr, String^ villeLivr, String^ adresseFactu, String^ villeFactu, String^ date)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBpersonne->setNom(nom);
    this->oTBpersonne->setPrenom(prenom);
    this->oTBdate->setDate(date);

    sql = this->oTBpersonne->Update();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! modification non réussite (Code : Update client)!";
        return erreur;
    }

    this->oTBadresse->setAdresse(adresseFactu);
    this->oTBadresse->setVille(villeFactu);
    this->oTBville->setVille(villeFactu);
    this->oTBrPersonneAdresse->setTypeAdresse("Factu");

    sql = this->oTBville->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBadresse->Update(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! modification non réussite (Code : Update adresse Factu)!";
        return erreur;
    }

    this->oTBadresse->setAdresse(adresseLivr);
    this->oTBadresse->setVille(villeLivr);
    this->oTBville->setVille(villeLivr);
    this->oTBrPersonneAdresse->setTypeAdresse("Livr");

    sql = this->oTBville->Insert();
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBadresse->Update(pseudo);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! modification non réussite (Code : Update adresse Livr)!";
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

    sql = this->oTBrPersonneDate->Update(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! modification non réussite (Code : Update client )!";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_client::supprimerClient(String^ pseudo)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);

    sql = this->oTBrPersonneDate->Delete(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! supression non réussite !";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Delete(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! supression non réussite !";
        return erreur;
    }

    sql = this->oTBpersonne->Delete();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! supression non réussite !";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_client::ajouterAdresse(String^ pseudo, String^ adresse, String^ ville, String^ type)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBadresse->setAdresse(adresse);
    this->oTBadresse->setVille(ville);
    this->oTBville->setVille(ville);
    this->oTBrPersonneAdresse->setTypeAdresse(type);

    sql = this->oTBville->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {

    }

    sql = this->oTBadresse->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! création adresse non réussite (Code : Insert adresse) !";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Insert(adresse, ville, pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! création adresse non réussite (Code : Insert R Personne Adresse) !";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_client::supprimerAdresse(String^ pseudo, String^ adresse, String^ ville, String^ type)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBadresse->setAdresse(adresse);
    this->oTBadresse->setVille(ville);
    this->oTBville->setVille(ville);
    this->oTBrPersonneAdresse->setTypeAdresse(type);

    sql = this->oTBrPersonneAdresse->DeleteAdresse(pseudo, adresse, ville, type);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! supression adresse non réussite (Code : Delete R personne adresse)!";
        return erreur;
    }
    return erreur;
}
