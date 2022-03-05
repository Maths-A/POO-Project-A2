#pragma once
#include "Comp_TB_Personne.h"
#include "Comp_TB_Adresse.h"
#include "Comp_TB_Type.h"
#include "Comp_TB_Ville.h"
#include "Comp_TB_Date.h"
#include "Comp_TB_R_Personne_Adresse.h"
#include "Comp_TB_R_Personne_Date.h"
#include "CAD.h"

ref class CL_svc_client {
	CL_comp_personne^ oTBpersonne;
	CL_comp_adresse^ oTBadresse;
	CL_comp_type^ oTBtype;
	CL_comp_ville^ oTBville;
	CL_comp_date^ oTBdate;
	CL_comp_r_personne_adresse^ oTBrPersonneAdresse;
	CL_comp_r_personne_date^ oTBrPersonneDate;
	CL_comp_CAD^ oCAD;
	DataSet^ ds;
public:
	CL_svc_client(void);
	System::Data::DataSet^ afficherClient(String^);
	System::Data::DataSet^ afficherUNClient(String^, String^);
	String^ ajouterClient(String^, String^, String^, String^, String^, String^, String^, String^);
	String^ modifierClient(String^, String^, String^, String^, String^, String^, String^, String^);
	String^ supprimerClient(String^);
	String^ ajouterAdresse(String^, String^, String^, String^);
	String^ supprimerAdresse(String^, String^, String^, String^);
};