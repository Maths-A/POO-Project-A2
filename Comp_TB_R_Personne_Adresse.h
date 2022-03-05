#pragma once
using namespace System;

ref class CL_comp_r_personne_adresse {
	int id_Personne;
	String^ typeAdresse;
	int id_Adresse;
public:
	String^ Select(void);
	String^ Insert(String^, String^, String^);
	String^ Update(String^, String^, String^);
	String^ Delete(String^);
	String^ DeleteAdresse(String^, String^, String^, String^);
	void setIdPersonne(int);
	int getIdPersonne(void);
	void setTypeAdresse(String^);
	String^ getTypeAdresse(void);
	void setIdAdresse(int);
	int getIdAdresse(void);
};