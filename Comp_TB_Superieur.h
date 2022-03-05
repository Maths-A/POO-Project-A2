#pragma once
using namespace System;

ref class CL_comp_superieur {
	int id_Personne;
	int id_Personne_Personne;
public:
	String^ Select(void);
	String^ Insert(String^, String^);
	String^ Update(String^, String^);
	String^ Delete(String^);
	void setIdPersonne(int);
	int getIdPersonne(void);
	void setIdPersonnePersonne(int);
	int getIdPersonnePersonne(void);
};