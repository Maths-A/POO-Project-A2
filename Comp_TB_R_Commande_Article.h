#pragma once
using namespace System;

ref class CL_comp_r_commande_article {
	String^ reference;
	String^ referenceCommande;
	int quantiteCommande;
public:
	String^ Select(void);
	String^ Insert();
	String^ Update(void);
	String^ Delete(void);
	String^ DeleteALL(void);
	void setReference(String^);
	String^ getReference(void);
	void setReferenceCommande(String^);
	String^ getReferenceCommande(void);
	void setQuantiteCommande(int);
	int getQuantiteCommande(void);
};