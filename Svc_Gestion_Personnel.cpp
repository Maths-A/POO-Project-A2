#include "Svc_Gestion_Personnel.h"

CL_svc_personnel::CL_svc_personnel(void)
{
    this->oCAD = gcnew CL_comp_CAD;
    this->ds = gcnew DataSet;
    this->oTBpersonne = gcnew CL_comp_personne;
    this->oTBadresse = gcnew CL_comp_adresse;
    this->oTBtype = gcnew CL_comp_type;
    this->oTBville = gcnew CL_comp_ville;
    this->oTBdate = gcnew CL_comp_date;
    this->oTBrPersonneAdresse = gcnew CL_comp_r_personne_adresse;
    this->oTBrPersonneDate = gcnew CL_comp_r_personne_date;
    this->oTBsuperieur = gcnew CL_comp_superieur;
}

System::Data::DataSet^ CL_svc_personnel::afficherPersonnel(String^ dataTableName)
{
    this->oTBpersonne->setType("pers");

    this->ds = this->oCAD->getRows((this->oTBpersonne->SelectALL()), dataTableName);
    return this->ds;
}

System::Data::DataSet^ CL_svc_personnel::afficherUNPersonnel(String^ dataTableName, String^ pseudo)
{
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBpersonne->setType("pers");

    this->ds = this->oCAD->getRows((this->oTBpersonne->Select()), dataTableName);
    return this->ds;
}

String^ CL_svc_personnel::ajouterPersonnel(String^ pseudo, String^ nom, String^ prenom, String^ adresse, String^ ville, String^ date, String^ typeAdresse, String^ pseudoS)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBpersonne->setNom(nom);
    this->oTBpersonne->setPrenom(prenom);
    this->oTBpersonne->setType("pers");
    this->oTBtype->setType("pers");
    this->oTBadresse->setAdresse(adresse);
    this->oTBadresse->setVille(ville);
    this->oTBville->setVille(ville);
    this->oTBdate->setDate(date);
    this->oTBrPersonneDate->setDate(date);
    this->oTBrPersonneAdresse->setTypeAdresse(typeAdresse);
    this->oTBrPersonneDate->setTypeDatePersonne("Embauche");

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
        erreur = "! Erreur ! création non réussite (Code : Insert adresse)!";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Insert(adresse, ville, pseudo);
    /*try
    {*/
    this->oCAD->actionRows(sql);
    /*}
    catch (...)
    {
        erreur = "! Erreur ! création non réussite (Code : Insert personne adresse)!";
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
        erreur = "! Erreur ! création non réussite (Code : Insert personne date)!";
        return erreur;
    }

    sql = this->oTBsuperieur->Insert(pseudo, pseudoS);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Attention ! création non complète (Code : Supérieur absent !)!";
        return erreur;
    }
    return erreur;
}

String^ CL_svc_personnel::modifierPersonnel(String^ pseudo, String^ nom, String^ prenom, String^ adresse, String^ ville, String^ date, String^ typeAdresse, String^ pseudoS)
{
    String^ sql;
    String^ erreur = "";
    this->oTBpersonne->setPseudo(pseudo);
    this->oTBpersonne->setNom(nom);
    this->oTBpersonne->setPrenom(prenom);
    this->oTBadresse->setAdresse(adresse);
    this->oTBadresse->setVille(ville);
    this->oTBville->setVille(ville);
    this->oTBdate->setDate(date);
    this->oTBrPersonneAdresse->setTypeAdresse(typeAdresse);
    this->oTBrPersonneDate->setTypeDatePersonne("Embauche");
    this->oTBrPersonneDate->setDate(date);

    sql = this->oTBpersonne->Update();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! mdodification non réussite (Code : update personne)!";
        return erreur;
    }

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
        erreur = "! Erreur ! mdodification non réussite (Code : Update adresse)!";
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
        erreur = "! Erreur ! mdodification non réussite (Code : Update Personne Date)!";
        return erreur;
    }

    sql = this->oTBsuperieur->Update(pseudo, pseudoS);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! mdodification non réussite ! (Code : update Superieur) ";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Update(adresse, ville, pseudo);
    try
    {
        this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! mdodification non réussite (Code : Update adresse)!";
        return erreur;
    }

    return erreur;
}

String^ CL_svc_personnel::supprimerPersonnel(String^ pseudo)
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
        erreur = "! Erreur ! suppression non réussite (Code : supprimer personne date)!";
        return erreur;
    }

    sql = this->oTBrPersonneAdresse->Delete(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! suppression non réussite (Code : supprimer personne adresse)!";
        return erreur;
    }

    sql = this->oTBsuperieur->Delete(pseudo);
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! suppression non réussite (Code : supprimer R suprieur)!";
        return erreur;
    }

    sql = this->oTBpersonne->Delete();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! suppression non réussite (Code : personne déjà supprimé)!";
        return erreur;
    }
    return erreur;
}

int CL_svc_personnel::effectifPersonnel(void)
{
    String^ sql;
    int id;
    sql = this->oTBpersonne->COUNT();
    id = Convert::ToInt16(this->oCAD->actionRowsID(sql));
    return id;
}


