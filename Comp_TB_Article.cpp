#include "Comp_TB_Article.h"

String^ CL_comp_article::SelectALL(void)
{
    return "SELECT * FROM dbo.article";
}

String^ CL_comp_article::Select(void)
{
    return "SELECT * FROM dbo.article WHERE  designation = '" + designation + "'";
}

String^ CL_comp_article::Insert(void)
{
    return "INSERT INTO dbo.article VALUES ('" + designation + "', '" + quantiteStock + "', '" + seuilReapro + "', '" + prixHT + "', '" + margeCommercial + "', '" + TVA + "', '" + prixTTC + "') ";
}

String^ CL_comp_article::Update(void)
{
    return "UPDATE dbo.article SET designation = '" + designation + "', quantiteStock = '" + quantiteStock + "', seuilReapro = '" + seuilReapro + "', prixHT = '" + prixHT + "', margeCommercial = '" + margeCommercial + "', TVA = '" + TVA + "', prixTTC = '" + prixTTC + "' WHERE designation = '" + designation + "' ";
}

String^ CL_comp_article::Delete(void)
{
    return "DELETE FROM dbo.article WHERE designation = '" + designation + "' ";
}

void CL_comp_article::setIdReference(int id)
{
    this->reference = id;
}

int CL_comp_article::getIdReference(void)
{
    return this->reference;
}

void CL_comp_article::setDesignation(String^ nom)
{
    this->designation = nom;
}

String^ CL_comp_article::getDesignation(void)
{
    return this->designation;
}

void CL_comp_article::setQuantiteStock(int quantite)
{
    this->quantiteStock = quantite;
}

int CL_comp_article::getQuantiteStock(void)
{
    return this->quantiteStock;
}

void CL_comp_article::setSeuilReapro(int seuil)
{
    this->seuilReapro = seuil;
}

int CL_comp_article::getSeuilReapro(void)
{
    return this->seuilReapro;
}

void CL_comp_article::setMargeCommercial(int marge)
{
    this->margeCommercial = marge;
}

int CL_comp_article::getMargeCommercial(void)
{
    return this->margeCommercial;
}

void CL_comp_article::setPrixHT(int prix)
{
    this->prixHT = prix;
}

int CL_comp_article::getPrixHT(void)
{
    return this->prixHT;
}

void CL_comp_article::setTVA(int tva)
{
    this->TVA = tva;
}

int CL_comp_article::getTVA(void)
{
    return this->TVA;
}

void CL_comp_article::setPrixTTC(int prix)
{
    this->prixTTC = prix;
}

int CL_comp_article::getPrixTTC(void)
{
    return this->prixTTC;
}
