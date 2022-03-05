#include "Comp_TB_MoyenPaiement.h"

String^ CL_comp_moyenPaiement::Select(void)
{
	return "";
}

String^ CL_comp_moyenPaiement::Insert(void)
{
	return "INSERT INTO dbo.moyenPaiement VALUES ('" + moyenPaiement + "')";
}

String^ CL_comp_moyenPaiement::Update(void)
{
	return "";
}

String^ CL_comp_moyenPaiement::Delete(void)
{
	return "";
}

void CL_comp_moyenPaiement::setMoyenPaiement(String^ moyenPaiement)
{
	this->moyenPaiement = moyenPaiement;
}

String^ CL_comp_moyenPaiement::getMoyenPaiement(void)
{
	return this->moyenPaiement;
}
