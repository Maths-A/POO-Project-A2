#pragma once
using namespace System;

ref class CL_comp_r_personne_date {
	int id_Personne;
	String^ typeDatePersonne;
	String^ date;
public:
	String^ Select(void);
	String^ Insert(String^);
	String^ Update(String^);
	String^ Delete(String^);
	void setIdPersonne(int);
	int getIdPersonne(void);
	void setTypeDatePersonne(String^);
	String^ getTypeDatePersonne(void);
	void setDate(String^);
	String^ getIdDate(void);
};