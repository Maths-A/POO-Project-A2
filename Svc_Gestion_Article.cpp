#include "Svc_Gestion_Article.h"

NS_Comp_Svc_article::CL_svc_article::CL_svc_article(void)
{
    this->oTBarticle = gcnew CL_comp_article;
    this->oCAD = gcnew CL_comp_CAD;
    //this->ds = gcnew Data::DataSet();
}

System::Data::DataSet^ NS_Comp_Svc_article::CL_svc_article::afficherArticle(String^ dataTableName)
{
    this->ds = this->oCAD->getRows((this->oTBarticle->SelectALL()), dataTableName);
    return this->ds;
}

System::Data::DataSet^ NS_Comp_Svc_article::CL_svc_article::afficherUNArticle(String^ dataTableName, String^ designation)
{
    this->oTBarticle->setDesignation(designation);

    this->ds = this->oCAD->getRows((this->oTBarticle->Select()), dataTableName);
    return this->ds;
}

String^ NS_Comp_Svc_article::CL_svc_article::ajouterArticle(String^ designation, int quantiteStock, int seuilReapro, int margeCommercial, int prixHT, int tva)
{
    String^ sql;
    String^ erreur = "";
    int prixTTC;
    prixTTC = prixHT + ((tva * prixHT) / 100) + ((margeCommercial * prixHT) / 100);
    this->oTBarticle->setDesignation(designation);
    this->oTBarticle->setQuantiteStock(quantiteStock);
    this->oTBarticle->setSeuilReapro(seuilReapro);
    this->oTBarticle->setMargeCommercial(margeCommercial);
    this->oTBarticle->setPrixHT(prixHT);
    this->oTBarticle->setTVA(tva);
    this->oTBarticle->setPrixTTC(prixTTC);

    sql = this->oTBarticle->Insert();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! Article déjà créé !";
        return erreur;
    }
    return erreur;
}

String^ NS_Comp_Svc_article::CL_svc_article::modifierArticle(String^ designation, int quantiteStock, int seuilReapro, int margeCommercial, int prixHT, int tva)
{
    String^ sql;
    String^ erreur = "";
    int prixTTC;
    prixTTC = prixHT + ((tva * prixHT) / 100) + ((margeCommercial * prixHT) / 100);
    this->oTBarticle->setDesignation(designation);
    this->oTBarticle->setQuantiteStock(quantiteStock);
    this->oTBarticle->setSeuilReapro(seuilReapro);
    this->oTBarticle->setMargeCommercial(margeCommercial);
    this->oTBarticle->setPrixHT(prixHT);
    this->oTBarticle->setTVA(tva);
    this->oTBarticle->setPrixTTC(prixTTC);

    sql = this->oTBarticle->Update();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! suppression non réussite !";
        return erreur;
    }
    return erreur;
}

String^ NS_Comp_Svc_article::CL_svc_article::supprimerArticle(String^ designation)
{
    String^ sql;
    String^ erreur = "";
    this->oTBarticle->setDesignation(designation);

    sql = this->oTBarticle->Delete();
    try
    {
    this->oCAD->actionRows(sql);
    }
    catch (...)
    {
        erreur = "! Erreur ! suppression non réussite !";
        return erreur;
    }
    return erreur;
}
