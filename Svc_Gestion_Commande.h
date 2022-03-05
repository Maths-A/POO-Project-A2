#pragma once
#include "Comp_TB_Commande.h"
#include "Comp_TB_Article.h"
#include "Comp_TB_Personne.h"
#include "Comp_TB_Adresse.h"
#include "Comp_TB_Date.h"
#include "Comp_TB_R_Commande_Article.h"
#include "Comp_TB_R_Commande_Date.h"
#include "Comp_TB_R_Commande_Total.h"
#include "Comp_TB_Total.h"
#include "Comp_TB_MoyenPaiement.h"
#include "CAD.h"

ref class CL_svc_commande {
	CL_comp_personne^ oTBpersonne;
	CL_comp_adresse^ oTBadresse;
	CL_comp_commande^ oTBcommande;
	CL_comp_r_commande_article^ oTBrCommandeArticle;
	CL_comp_r_commande_date^ oTBrCommandeDate;
	CL_comp_date^ oTBdate;
	CL_comp_r_commande_total^ oTBrCommandeTotal;
	CL_comp_moyenPaiement^ oTBmoyenPaiement;
	CL_comp_total^ oTBtotal;
	CL_comp_CAD^ oCAD;
	DataSet^ ds;
public:
	CL_svc_commande(void);
	System::Data::DataSet^ afficherCommande(String^, String^);
	String^ ajouterCommande(String^, String^, String^, String^, String^, String^); // il faut d'abors créer la commande et ensuite ajouter les article
	String^ ajouterArticleCommande(String^, String^, int);
	String^ modifierCommande(String^, String^, String^, String^, String^, String^);
	String^ modifierArticleCommande(String^, String^, int);
	String^ supprimerCommande(String^);
	String^ supprimerArticleCommande(String^, String^);
};