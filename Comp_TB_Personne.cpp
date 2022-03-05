#include "Comp_TB_Personne.h"

using namespace System;

String^ CL_comp_personne::SelectALL(void)
{
	return "SELECT pseudo, nom, prenom, type, type_adresse, adresse, ville, date, typeDatePersonne FROM dbo.personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse INNER JOIN dbo.R_Personne_Date ON dbo.R_Personne_Date.id_Personne = dbo.personne.id_Personne WHERE type = '" + type + "';";
}

String^ CL_comp_personne::Select(void)
{
	return "SELECT pseudo, nom, prenom, type, type_adresse, adresse, ville, date, typeDatePersonne FROM dbo.personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse INNER JOIN dbo.R_Personne_Date ON dbo.R_Personne_Date.id_Personne = dbo.personne.id_Personne WHERE type = '" + type + "' AND pseudo = '" + pseudo + "';";
}
String^ CL_comp_personne::Insert(void)
{
	return "INSERT INTO dbo.personne VALUES('" + this->pseudo + "', '" + this->nom + "', '" + this->prenom + "', '" + this->type+"');";
}
String^ CL_comp_personne::Update(void)
{
	return "UPDATE dbo.personne SET nom = '" + nom + "', prenom = '" + prenom + "', type = '" + type + "' WHERE pseudo = '" + pseudo + "';";
}
String^ CL_comp_personne::Delete(void)
{
	return "DELETE FROM dbo.personne WHERE pseudo = '" + pseudo + "';";
}
String^ CL_comp_personne::COUNT(void)
{
	return "SELECT COUNT(pseudo) AS Effectif FROM dbo.personne WHERE type = 'pers';";
}
void CL_comp_personne::setIdPersonne(int id) {
	this->id_Personne = id;
}
int CL_comp_personne::getIdPersonne(void) {
	return this->id_Personne;
}
void CL_comp_personne::setPseudo(String^ pseudo) {
	this->pseudo = pseudo;
}
String^ CL_comp_personne::getPseudo(void) {
	return this->pseudo;
}
void CL_comp_personne::setNom(String^ nom) {
	this->nom = nom;
}
String^ CL_comp_personne::getNom(void) {
	return this->nom;
}
void CL_comp_personne::setPrenom(String^ prenom) {
	this->prenom = prenom;
}
String^ CL_comp_personne::getPrenom(void) {
	return this->prenom;
}
void CL_comp_personne::setType(String^ type) {
	this->type = type;
}
String^ CL_comp_personne::getType(void) {
	return this->type;
}
//
//String^ CL_comp_personne::SelectPseudo(void)
//
//{
//
//	return"SELECT pseudo FROM dbo.personne WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectNom(void)
//
//{
//
//	return"SELECT nom FROM dbo.personne WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectPrenom(void)
//
//{
//
//	return"SELECT prenom FROM dbo.personne WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectAdresse(void)
//
//{
//
//	return"SELECT adresse FROM dbo.personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse  WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectVille(void)
//
//{
//
//	return"SELECT ville FROM dbo.personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse  WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectDate(void)
//
//{
//
//	return"SELECT date FROM dbo.personne INNER JOIN dbo.R_Personne_Date ON dbo.personne.id_Personne = dbo.R_Personne_Date.id_Personne WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectTypeAdresse(void)
//
//{
//
//	return"SELECT type_adresse FROM dbo.personne INNER JOIN dbo.R_Personne_Adresse ON dbo.personne.id_Personne = dbo.R_Personne_Adresse.id_Personne INNER JOIN dbo.adresse ON dbo.R_Personne_Adresse.id_Adresse = dbo.adresse.id_Adresse  WHERE pseudo = '" + pseudo + "';";
//
//}
//
//
//
//String^ CL_comp_personne::SelectPseudoS(void)
//
//{
//
//	return"SELECT pseudo AS Supérieur FROM dbo.personne WHERE id_personne = (SELECT id_personne_personne AS Superieur FROM dbo.personne INNER JOIN dbo.superieur ON dbo.superieur.id_personne = dbo.personne.id_Personne  WHERE pseudo = '" + pseudo + "');";
//
//}