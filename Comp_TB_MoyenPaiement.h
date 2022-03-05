#pragma once
using namespace System;

ref class CL_comp_moyenPaiement {
	String^ moyenPaiement;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	void setMoyenPaiement(String^);
	String^ getMoyenPaiement(void);
};