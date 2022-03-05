#include "Svc_Gestion_Statistique.h"

CL_svc_statistique::CL_svc_statistique(void)
{
	this->oCAD = gcnew CL_comp_CAD;
	//this->ds = gcnew DataSet;
	this->oStatistique = gcnew CL_comp_statistique;
}

System::Data::DataSet^ CL_svc_statistique::afficherCalculerPanierMoyenAvecRemise(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherCalculerPanierMoyenAvecRemise()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherCalculerChiffreAffaireMois(String^ dataTableName, String^ date)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherCalculerChiffreAffaireMois(date)), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherProduitSousSeuilReapro(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherProduitSousSeuilReapro()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherCalculerMontantTotalAchatClient(String^ dataTableName, String^ client)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherCalculerMontantTotalAchatClient(client)), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficher10ArticlesPlusVendus(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficher10ArticlesPlusVendus()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficher10ArticlesMoinsVendus(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficher10ArticlesMoinsVendus()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherValeurCommercialeStock(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherValeurCommercialeStock()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherValeurAchatStock(String^ dataTableName)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherValeurAchatStock()), dataTableName);
	return this->ds;
}

System::Data::DataSet^ CL_svc_statistique::afficherSimulerValeurCommercial(String^ dataTableName, int TVA, int margeCommercial, int remiseCommerciale, int demarqueInconnues)
{
	this->ds = this->oCAD->getRows((this->oStatistique->afficherSimulerValeurCommercial(TVA, margeCommercial, remiseCommerciale, demarqueInconnues)), dataTableName);
	return this->ds;
}
