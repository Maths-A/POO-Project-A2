#pragma once
using namespace System;

ref class CL_comp_commande {
	String^ referenceCommande;
	String^ moyenPaiement;
	int id_Personne;
	int id_Adresse;
public:
	String^ Select(void);
	String^ Insert(String^);
	String^ Update(void);
	String^ Delete(void);
	void setReferenceCommande(String^);
	String^ getReferenceCommande(void);
	void setMoyenPaiement(String^);
	String^ getMoyenPaiement(void);
	void setId_Personne(int);
	int getId_Personne(void);
	void setId_Adresse(int);
	int getId_Adresse(void);
};