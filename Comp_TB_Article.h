#pragma once
using namespace System;

ref class CL_comp_article {
	int reference;
	String^ designation;
	int quantiteStock;
	int seuilReapro;
	int margeCommercial;
	int prixHT;
	int TVA;
	int prixTTC;
public:
	String^ SelectALL(void);
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setIdReference(int);
	int getIdReference(void);
	void setDesignation(String^);
	String^ getDesignation(void);
	void setQuantiteStock(int);
	int getQuantiteStock(void);
	void setSeuilReapro(int);
	int getSeuilReapro(void);
	void setMargeCommercial(int);
	int getMargeCommercial(void);
	void setPrixHT(int);
	int getPrixHT(void);
	void setTVA(int);
	int getTVA(void);
	void setPrixTTC(int);
	int getPrixTTC(void);
}; 