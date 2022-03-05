#pragma once

using namespace System;

ref class CL_comp_adresse {
	int id_Adresse;
	String^ adresse;
	String^ ville;
public:
	String^ Select(void);
	String^ Insert(void);
	String^ Update(String^);
	String^ Delete(void);
	void setIdAdresse(int);
	int getIdAdresse(void);
	void setAdresse(String^);
	String^ getAdresse(void);
	void setVille(String^);
	String^ getVille(void);
};