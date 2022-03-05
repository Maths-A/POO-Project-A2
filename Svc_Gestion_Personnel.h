#pragma once
#include <iostream>
#include "Comp_TB_Personne.h"
#include "Comp_TB_Adresse.h"
#include "Comp_TB_Type.h"
#include "Comp_TB_Ville.h"
#include "Comp_TB_Date.h"
#include "Comp_TB_R_Personne_Adresse.h"
#include "Comp_TB_R_Personne_Date.h"
#include "Comp_TB_Superieur.h"
#include "CAD.h"

ref class CL_svc_personnel {
	CL_comp_personne^ oTBpersonne;
	CL_comp_adresse^ oTBadresse;
	CL_comp_type^ oTBtype;
	CL_comp_ville^ oTBville;
	CL_comp_date^ oTBdate;
	CL_comp_r_personne_adresse^ oTBrPersonneAdresse;
	CL_comp_r_personne_date^ oTBrPersonneDate;
	CL_comp_superieur^ oTBsuperieur;
	CL_comp_CAD^ oCAD;
	DataSet^ ds;
public:
	CL_svc_personnel(void);
	System::Data::DataSet^ afficherPersonnel(String^);
	System::Data::DataSet^ afficherUNPersonnel(String^, String^);
	String^ ajouterPersonnel(String^, String^, String^, String^, String^, String^, String^, String^);
	String^ modifierPersonnel(String^, String^, String^, String^, String^, String^, String^, String^);
	String^ supprimerPersonnel(String^);
	int effectifPersonnel(void);
	//int TestCreaPersonnel(String^, String^, String^, String^, String^, String^, String^, String^);
};