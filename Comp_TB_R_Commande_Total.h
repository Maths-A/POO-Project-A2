#pragma once
using namespace System;

ref class CL_comp_r_commande_total {
	int total;
	String^ referenceCommande;
	String^ typeTotal;
public:
	String^ Select(void);
	String^ Insert(int);
	String^ Update(int);
	String^ Delete(void);
	void setTotal(int);
	int getTotal(void);
	void setReferenceCommande(String^);
	String^ getReferenceCommande(void);
	void setTypeTotal(String^);
	String^ getTypeTotal(void);
};