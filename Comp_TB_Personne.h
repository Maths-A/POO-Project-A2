#pragma once

using namespace System;

ref class CL_comp_personne {
	int id_Personne;
	String^ pseudo;
	String^ nom;
	String^ prenom;
	String^ type;
public:
	String^ SelectALL(void);
	String^ Select(void);
	String^ Insert(void);
	String^ Update(void);
	String^ Delete(void);
	String^ COUNT(void);
	void setIdPersonne(int);
	int getIdPersonne(void);
	void setPseudo(String^);
	String^ getPseudo(void);
	void setNom(String^);
	String^ getNom(void);
	void setPrenom(String^);
	String^ getPrenom(void);
	void setType(String^);
	String^ getType(void);

	/*String^ SelectPseudo(void);
	String^ SelectNom(void);
	String^ SelectPrenom(void);
	String^ SelectAdresse(void);
	String^ SelectVille(void);
	String^ SelectDate(void);
	String^ SelectTypeAdresse(void);
	String^ SelectPseudoS(void);*/
};

