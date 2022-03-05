#pragma once
using namespace System;

ref class CL_comp_r_commande_date {
	String^ date;
	String^ referenceCommande;
	String^ typeDateCommande;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setDate(String^);
	String^ getDate(void);
	void setReferenceCommande(String^);
	String^ getReferenceCommande(void);
	void setTypeDateCommande(String^);
	String^ getTypeDateCommande(void);
};