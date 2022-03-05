#pragma once
#include "Comp_TB_Article.h"
#include "CAD.h"

namespace NS_Comp_Svc_article
{
	ref class CL_svc_article {
		CL_comp_article^ oTBarticle;
		CL_comp_CAD^ oCAD;
		System::Data::DataSet^ ds;
	public:
		CL_svc_article(void);
		System::Data::DataSet^ afficherArticle(String^);
		System::Data::DataSet^ afficherUNArticle(String^, String^);
		String^ ajouterArticle(String^, int, int, int, int, int); // prix TTC remplie par calcul
		String^ modifierArticle(String^, int, int, int, int, int);
		String^ supprimerArticle(String^);
	};

}