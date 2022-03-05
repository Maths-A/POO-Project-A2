#pragma once
#include "CAD.h"
#include "Comp_Statistique.h"


ref class CL_svc_statistique {
	CL_comp_statistique^ oStatistique;
	CL_comp_CAD^ oCAD;
	DataSet^ ds;
public:
	CL_svc_statistique(void);
	System::Data::DataSet^ afficherCalculerPanierMoyenAvecRemise(String^);
	System::Data::DataSet^ afficherCalculerChiffreAffaireMois(String^, String^);
	System::Data::DataSet^ afficherProduitSousSeuilReapro(String^);
	System::Data::DataSet^ afficherCalculerMontantTotalAchatClient(String^, String^);
	System::Data::DataSet^ afficher10ArticlesPlusVendus(String^);
	System::Data::DataSet^ afficher10ArticlesMoinsVendus(String^);
	System::Data::DataSet^ afficherValeurCommercialeStock(String^);
	System::Data::DataSet^ afficherValeurAchatStock(String^);
	System::Data::DataSet^ afficherSimulerValeurCommercial(String^, int, int, int, int);
};