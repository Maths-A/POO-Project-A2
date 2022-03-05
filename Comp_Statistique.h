#pragma once
using namespace System;

ref class CL_comp_statistique {
public:
	String^ afficherCalculerPanierMoyenAvecRemise(void);
	String^ afficherCalculerChiffreAffaireMois(String^);
	String^ afficherProduitSousSeuilReapro(void);
	String^ afficherCalculerMontantTotalAchatClient(String^);
	String^ afficher10ArticlesPlusVendus(void);
	String^ afficher10ArticlesMoinsVendus(void);
	String^ afficherValeurCommercialeStock(void);
	String^ afficherValeurAchatStock(void);
	String^ afficherSimulerValeurCommercial(int, int, int, int);
};