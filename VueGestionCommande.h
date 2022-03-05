#pragma once
#include "Svc_Gestion_Commande.h"

namespace VueGestionCommande {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormVueGestionCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormVueGestionCommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormVueGestionCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView_Commande;
	private: System::Windows::Forms::Button^ btn_Commande_Creer;
	private: System::Windows::Forms::Button^ btn_Commande_Modifier;
	private: System::Windows::Forms::Button^ btn_Commande_Supprimer;
	private: System::Windows::Forms::Button^ btn_Commande_Afficher;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_Reference;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_Pseudo;

	private: System::Windows::Forms::TextBox^ txtbox_Commande_Nom;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_Prenom;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_DateLivr;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_MoyPai;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_DateRegl;
	protected:

	private: System::Windows::Forms::Label^ lbl_Commande_Reference;
	private: System::Windows::Forms::Label^ lbl_Commande_Pseudo;


	private: System::Windows::Forms::Label^ lbl_Commande_Nom;
	private: System::Windows::Forms::Label^ lbl_Commande_Prenom;
	private: System::Windows::Forms::Label^ lbl_Commande_DateLivr;
	private: System::Windows::Forms::Label^ lbl_Commande_MoyPai;
	private: System::Windows::Forms::Label^ lbl_Commande_DateRegl;


	private: System::Windows::Forms::TextBox^ txtbox_Commande_Message;
	private: System::Windows::Forms::Label^ lbl_Commande_DateEmi;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_DateEmi;

	private: System::Windows::Forms::Label^ lbl_Commande_Reduction;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_Reduction;


	private: System::Windows::Forms::Label^ lbl_Commande_PrixHT;



	private: CL_svc_commande^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oIs;
	private: CL_svc_commande^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ id;


	private: System::Windows::Forms::Label^ lbl_Commande_PrixTTC;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_PrixTTC;


	private: System::Windows::Forms::TextBox^ Panelgris;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ lbl_Commande_DesigArticle;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_DesigArticle;
	private: System::Windows::Forms::Label^ lbl_Commande_QuantiteArticle;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_QuantiteArticle;
	private: System::Windows::Forms::Button^ btn_Commande_Ajouter;
	private: System::Windows::Forms::Button^ btn_Commande_ModifQuant;
	private: System::Windows::Forms::Button^ btn_Commande_SupprimerArticle;
	private: System::Windows::Forms::TextBox^ txtbox_Commande_PrixHT;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView_Commande = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Commande_Creer = (gcnew System::Windows::Forms::Button());
			this->btn_Commande_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Commande_Supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_Commande_Afficher = (gcnew System::Windows::Forms::Button());
			this->txtbox_Commande_Reference = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_Pseudo = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_Nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_DateLivr = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_MoyPai = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Commande_DateRegl = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Commande_Reference = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_Pseudo = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_Nom = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_Prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_DateLivr = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_MoyPai = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_DateRegl = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_Message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Commande_DateEmi = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_DateEmi = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Commande_Reduction = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_Reduction = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Commande_PrixHT = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_PrixTTC = (gcnew System::Windows::Forms::TextBox());
			this->Panelgris = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Commande_DesigArticle = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_DesigArticle = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Commande_QuantiteArticle = (gcnew System::Windows::Forms::Label());
			this->txtbox_Commande_QuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			this->btn_Commande_Ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_Commande_ModifQuant = (gcnew System::Windows::Forms::Button());
			this->btn_Commande_SupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->txtbox_Commande_PrixHT = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Commande))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Commande
			// 
			this->dataGridView_Commande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Commande->Location = System::Drawing::Point(12, 12);
			this->dataGridView_Commande->Name = L"dataGridView_Commande";
			this->dataGridView_Commande->RowHeadersWidth = 51;
			this->dataGridView_Commande->Size = System::Drawing::Size(318, 176);
			this->dataGridView_Commande->TabIndex = 0;
			// 
			// btn_Commande_Creer
			// 
			this->btn_Commande_Creer->Location = System::Drawing::Point(13, 194);
			this->btn_Commande_Creer->Name = L"btn_Commande_Creer";
			this->btn_Commande_Creer->Size = System::Drawing::Size(75, 23);
			this->btn_Commande_Creer->TabIndex = 1;
			this->btn_Commande_Creer->Text = L"Créer";
			this->btn_Commande_Creer->UseVisualStyleBackColor = true;
			this->btn_Commande_Creer->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_Creer_Click);
			// 
			// btn_Commande_Modifier
			// 
			this->btn_Commande_Modifier->Location = System::Drawing::Point(93, 195);
			this->btn_Commande_Modifier->Name = L"btn_Commande_Modifier";
			this->btn_Commande_Modifier->Size = System::Drawing::Size(75, 23);
			this->btn_Commande_Modifier->TabIndex = 2;
			this->btn_Commande_Modifier->Text = L"Modifier";
			this->btn_Commande_Modifier->UseVisualStyleBackColor = true;
			this->btn_Commande_Modifier->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_Modifier_Click);
			// 
			// btn_Commande_Supprimer
			// 
			this->btn_Commande_Supprimer->Location = System::Drawing::Point(174, 195);
			this->btn_Commande_Supprimer->Name = L"btn_Commande_Supprimer";
			this->btn_Commande_Supprimer->Size = System::Drawing::Size(75, 23);
			this->btn_Commande_Supprimer->TabIndex = 3;
			this->btn_Commande_Supprimer->Text = L"Supprimer";
			this->btn_Commande_Supprimer->UseVisualStyleBackColor = true;
			this->btn_Commande_Supprimer->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_Supprimer_Click);
			// 
			// btn_Commande_Afficher
			// 
			this->btn_Commande_Afficher->Location = System::Drawing::Point(255, 194);
			this->btn_Commande_Afficher->Name = L"btn_Commande_Afficher";
			this->btn_Commande_Afficher->Size = System::Drawing::Size(75, 23);
			this->btn_Commande_Afficher->TabIndex = 4;
			this->btn_Commande_Afficher->Text = L"Afficher";
			this->btn_Commande_Afficher->UseVisualStyleBackColor = true;
			this->btn_Commande_Afficher->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_Afficher_Click);
			// 
			// txtbox_Commande_Reference
			// 
			this->txtbox_Commande_Reference->BackColor = System::Drawing::Color::White;
			this->txtbox_Commande_Reference->Location = System::Drawing::Point(348, 12);
			this->txtbox_Commande_Reference->Name = L"txtbox_Commande_Reference";
			this->txtbox_Commande_Reference->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_Reference->TabIndex = 5;
			// 
			// txtbox_Commande_Pseudo
			// 
			this->txtbox_Commande_Pseudo->Location = System::Drawing::Point(348, 37);
			this->txtbox_Commande_Pseudo->Name = L"txtbox_Commande_Pseudo";
			this->txtbox_Commande_Pseudo->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_Pseudo->TabIndex = 6;
			// 
			// txtbox_Commande_Nom
			// 
			this->txtbox_Commande_Nom->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Commande_Nom->Location = System::Drawing::Point(596, 328);
			this->txtbox_Commande_Nom->Name = L"txtbox_Commande_Nom";
			this->txtbox_Commande_Nom->ReadOnly = true;
			this->txtbox_Commande_Nom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_Nom->TabIndex = 7;
			// 
			// txtbox_Commande_Prenom
			// 
			this->txtbox_Commande_Prenom->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Commande_Prenom->Location = System::Drawing::Point(596, 352);
			this->txtbox_Commande_Prenom->Name = L"txtbox_Commande_Prenom";
			this->txtbox_Commande_Prenom->ReadOnly = true;
			this->txtbox_Commande_Prenom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_Prenom->TabIndex = 8;
			// 
			// txtbox_Commande_DateLivr
			// 
			this->txtbox_Commande_DateLivr->Location = System::Drawing::Point(348, 63);
			this->txtbox_Commande_DateLivr->Name = L"txtbox_Commande_DateLivr";
			this->txtbox_Commande_DateLivr->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_DateLivr->TabIndex = 9;
			this->txtbox_Commande_DateLivr->Text = L"AAAA-MM-JJ";
			// 
			// txtbox_Commande_MoyPai
			// 
			this->txtbox_Commande_MoyPai->Location = System::Drawing::Point(348, 87);
			this->txtbox_Commande_MoyPai->Name = L"txtbox_Commande_MoyPai";
			this->txtbox_Commande_MoyPai->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_MoyPai->TabIndex = 10;
			// 
			// txtbox_Commande_DateRegl
			// 
			this->txtbox_Commande_DateRegl->Location = System::Drawing::Point(348, 112);
			this->txtbox_Commande_DateRegl->Name = L"txtbox_Commande_DateRegl";
			this->txtbox_Commande_DateRegl->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_DateRegl->TabIndex = 11;
			this->txtbox_Commande_DateRegl->Text = L"AAAA-MM-JJ";
			// 
			// lbl_Commande_Reference
			// 
			this->lbl_Commande_Reference->AutoSize = true;
			this->lbl_Commande_Reference->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_Reference->Location = System::Drawing::Point(453, 16);
			this->lbl_Commande_Reference->Name = L"lbl_Commande_Reference";
			this->lbl_Commande_Reference->Size = System::Drawing::Size(57, 13);
			this->lbl_Commande_Reference->TabIndex = 12;
			this->lbl_Commande_Reference->Text = L"Référence";
			// 
			// lbl_Commande_Pseudo
			// 
			this->lbl_Commande_Pseudo->AutoSize = true;
			this->lbl_Commande_Pseudo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_Pseudo->Location = System::Drawing::Point(453, 39);
			this->lbl_Commande_Pseudo->Name = L"lbl_Commande_Pseudo";
			this->lbl_Commande_Pseudo->Size = System::Drawing::Size(43, 13);
			this->lbl_Commande_Pseudo->TabIndex = 13;
			this->lbl_Commande_Pseudo->Text = L"Pseudo";
			// 
			// lbl_Commande_Nom
			// 
			this->lbl_Commande_Nom->AutoSize = true;
			this->lbl_Commande_Nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_Nom->Location = System::Drawing::Point(703, 330);
			this->lbl_Commande_Nom->Name = L"lbl_Commande_Nom";
			this->lbl_Commande_Nom->Size = System::Drawing::Size(29, 13);
			this->lbl_Commande_Nom->TabIndex = 14;
			this->lbl_Commande_Nom->Text = L"Nom";
			// 
			// lbl_Commande_Prenom
			// 
			this->lbl_Commande_Prenom->AutoSize = true;
			this->lbl_Commande_Prenom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_Prenom->Location = System::Drawing::Point(701, 355);
			this->lbl_Commande_Prenom->Name = L"lbl_Commande_Prenom";
			this->lbl_Commande_Prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_Commande_Prenom->TabIndex = 15;
			this->lbl_Commande_Prenom->Text = L"Prenom";
			// 
			// lbl_Commande_DateLivr
			// 
			this->lbl_Commande_DateLivr->AutoSize = true;
			this->lbl_Commande_DateLivr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_DateLivr->Location = System::Drawing::Point(453, 65);
			this->lbl_Commande_DateLivr->Name = L"lbl_Commande_DateLivr";
			this->lbl_Commande_DateLivr->Size = System::Drawing::Size(90, 13);
			this->lbl_Commande_DateLivr->TabIndex = 16;
			this->lbl_Commande_DateLivr->Text = L"Date de Livraison";
			// 
			// lbl_Commande_MoyPai
			// 
			this->lbl_Commande_MoyPai->AutoSize = true;
			this->lbl_Commande_MoyPai->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_MoyPai->Location = System::Drawing::Point(453, 87);
			this->lbl_Commande_MoyPai->Name = L"lbl_Commande_MoyPai";
			this->lbl_Commande_MoyPai->Size = System::Drawing::Size(101, 13);
			this->lbl_Commande_MoyPai->TabIndex = 17;
			this->lbl_Commande_MoyPai->Text = L"Moyen de Paiement";
			// 
			// lbl_Commande_DateRegl
			// 
			this->lbl_Commande_DateRegl->AutoSize = true;
			this->lbl_Commande_DateRegl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_DateRegl->Location = System::Drawing::Point(453, 112);
			this->lbl_Commande_DateRegl->Name = L"lbl_Commande_DateRegl";
			this->lbl_Commande_DateRegl->Size = System::Drawing::Size(94, 13);
			this->lbl_Commande_DateRegl->TabIndex = 18;
			this->lbl_Commande_DateRegl->Text = L"Date de réglement";
			// 
			// txtbox_Commande_Message
			// 
			this->txtbox_Commande_Message->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Commande_Message->Location = System::Drawing::Point(348, 194);
			this->txtbox_Commande_Message->Multiline = true;
			this->txtbox_Commande_Message->Name = L"txtbox_Commande_Message";
			this->txtbox_Commande_Message->ReadOnly = true;
			this->txtbox_Commande_Message->Size = System::Drawing::Size(199, 23);
			this->txtbox_Commande_Message->TabIndex = 19;
			// 
			// lbl_Commande_DateEmi
			// 
			this->lbl_Commande_DateEmi->AutoSize = true;
			this->lbl_Commande_DateEmi->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_DateEmi->Location = System::Drawing::Point(453, 138);
			this->lbl_Commande_DateEmi->Name = L"lbl_Commande_DateEmi";
			this->lbl_Commande_DateEmi->Size = System::Drawing::Size(82, 13);
			this->lbl_Commande_DateEmi->TabIndex = 24;
			this->lbl_Commande_DateEmi->Text = L"Date d\'Emission";
			// 
			// txtbox_Commande_DateEmi
			// 
			this->txtbox_Commande_DateEmi->Location = System::Drawing::Point(348, 136);
			this->txtbox_Commande_DateEmi->Name = L"txtbox_Commande_DateEmi";
			this->txtbox_Commande_DateEmi->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_DateEmi->TabIndex = 23;
			this->txtbox_Commande_DateEmi->Text = L"AAAA-MM-JJ";
			// 
			// lbl_Commande_Reduction
			// 
			this->lbl_Commande_Reduction->AutoSize = true;
			this->lbl_Commande_Reduction->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_Reduction->Location = System::Drawing::Point(453, 163);
			this->lbl_Commande_Reduction->Name = L"lbl_Commande_Reduction";
			this->lbl_Commande_Reduction->Size = System::Drawing::Size(56, 13);
			this->lbl_Commande_Reduction->TabIndex = 26;
			this->lbl_Commande_Reduction->Text = L"Réduction";
			// 
			// txtbox_Commande_Reduction
			// 
			this->txtbox_Commande_Reduction->Location = System::Drawing::Point(348, 160);
			this->txtbox_Commande_Reduction->Name = L"txtbox_Commande_Reduction";
			this->txtbox_Commande_Reduction->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_Reduction->TabIndex = 25;
			// 
			// lbl_Commande_PrixHT
			// 
			this->lbl_Commande_PrixHT->AutoSize = true;
			this->lbl_Commande_PrixHT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_PrixHT->Location = System::Drawing::Point(699, 380);
			this->lbl_Commande_PrixHT->Name = L"lbl_Commande_PrixHT";
			this->lbl_Commande_PrixHT->Size = System::Drawing::Size(69, 13);
			this->lbl_Commande_PrixHT->TabIndex = 28;
			this->lbl_Commande_PrixHT->Text = L"Prix Total HT";
			// 
			// lbl_Commande_PrixTTC
			// 
			this->lbl_Commande_PrixTTC->AutoSize = true;
			this->lbl_Commande_PrixTTC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Commande_PrixTTC->Location = System::Drawing::Point(699, 404);
			this->lbl_Commande_PrixTTC->Name = L"lbl_Commande_PrixTTC";
			this->lbl_Commande_PrixTTC->Size = System::Drawing::Size(75, 13);
			this->lbl_Commande_PrixTTC->TabIndex = 30;
			this->lbl_Commande_PrixTTC->Text = L"Prix Total TTC";
			// 
			// txtbox_Commande_PrixTTC
			// 
			this->txtbox_Commande_PrixTTC->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Commande_PrixTTC->Location = System::Drawing::Point(594, 402);
			this->txtbox_Commande_PrixTTC->Name = L"txtbox_Commande_PrixTTC";
			this->txtbox_Commande_PrixTTC->ReadOnly = true;
			this->txtbox_Commande_PrixTTC->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_PrixTTC->TabIndex = 29;
			// 
			// Panelgris
			// 
			this->Panelgris->BackColor = System::Drawing::Color::Silver;
			this->Panelgris->Location = System::Drawing::Point(559, 10);
			this->Panelgris->Multiline = true;
			this->Panelgris->Name = L"Panelgris";
			this->Panelgris->ReadOnly = true;
			this->Panelgris->Size = System::Drawing::Size(205, 208);
			this->Panelgris->TabIndex = 31;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(634, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Article";
			// 
			// lbl_Commande_DesigArticle
			// 
			this->lbl_Commande_DesigArticle->AutoSize = true;
			this->lbl_Commande_DesigArticle->BackColor = System::Drawing::Color::Silver;
			this->lbl_Commande_DesigArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_Commande_DesigArticle->Location = System::Drawing::Point(633, 61);
			this->lbl_Commande_DesigArticle->Name = L"lbl_Commande_DesigArticle";
			this->lbl_Commande_DesigArticle->Size = System::Drawing::Size(63, 13);
			this->lbl_Commande_DesigArticle->TabIndex = 38;
			this->lbl_Commande_DesigArticle->Text = L"Désignation";
			// 
			// txtbox_Commande_DesigArticle
			// 
			this->txtbox_Commande_DesigArticle->Location = System::Drawing::Point(577, 78);
			this->txtbox_Commande_DesigArticle->Name = L"txtbox_Commande_DesigArticle";
			this->txtbox_Commande_DesigArticle->Size = System::Drawing::Size(165, 20);
			this->txtbox_Commande_DesigArticle->TabIndex = 37;
			// 
			// lbl_Commande_QuantiteArticle
			// 
			this->lbl_Commande_QuantiteArticle->AutoSize = true;
			this->lbl_Commande_QuantiteArticle->BackColor = System::Drawing::Color::Silver;
			this->lbl_Commande_QuantiteArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_Commande_QuantiteArticle->Location = System::Drawing::Point(637, 104);
			this->lbl_Commande_QuantiteArticle->Name = L"lbl_Commande_QuantiteArticle";
			this->lbl_Commande_QuantiteArticle->Size = System::Drawing::Size(47, 13);
			this->lbl_Commande_QuantiteArticle->TabIndex = 40;
			this->lbl_Commande_QuantiteArticle->Text = L"Quantité";
			// 
			// txtbox_Commande_QuantiteArticle
			// 
			this->txtbox_Commande_QuantiteArticle->Location = System::Drawing::Point(577, 121);
			this->txtbox_Commande_QuantiteArticle->Name = L"txtbox_Commande_QuantiteArticle";
			this->txtbox_Commande_QuantiteArticle->Size = System::Drawing::Size(165, 20);
			this->txtbox_Commande_QuantiteArticle->TabIndex = 39;
			// 
			// btn_Commande_Ajouter
			// 
			this->btn_Commande_Ajouter->Location = System::Drawing::Point(566, 151);
			this->btn_Commande_Ajouter->Name = L"btn_Commande_Ajouter";
			this->btn_Commande_Ajouter->Size = System::Drawing::Size(62, 63);
			this->btn_Commande_Ajouter->TabIndex = 41;
			this->btn_Commande_Ajouter->Text = L"Ajouter";
			this->btn_Commande_Ajouter->UseVisualStyleBackColor = true;
			this->btn_Commande_Ajouter->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_Ajouter_Click);
			// 
			// btn_Commande_ModifQuant
			// 
			this->btn_Commande_ModifQuant->Location = System::Drawing::Point(632, 151);
			this->btn_Commande_ModifQuant->Name = L"btn_Commande_ModifQuant";
			this->btn_Commande_ModifQuant->Size = System::Drawing::Size(62, 63);
			this->btn_Commande_ModifQuant->TabIndex = 42;
			this->btn_Commande_ModifQuant->Text = L"Modifier Quantité";
			this->btn_Commande_ModifQuant->UseVisualStyleBackColor = true;
			this->btn_Commande_ModifQuant->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_ModifQuant_Click);
			// 
			// btn_Commande_SupprimerArticle
			// 
			this->btn_Commande_SupprimerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Commande_SupprimerArticle->Location = System::Drawing::Point(696, 151);
			this->btn_Commande_SupprimerArticle->Name = L"btn_Commande_SupprimerArticle";
			this->btn_Commande_SupprimerArticle->Size = System::Drawing::Size(62, 63);
			this->btn_Commande_SupprimerArticle->TabIndex = 43;
			this->btn_Commande_SupprimerArticle->Text = L"Supprimer";
			this->btn_Commande_SupprimerArticle->UseVisualStyleBackColor = true;
			this->btn_Commande_SupprimerArticle->Click += gcnew System::EventHandler(this, &MyFormVueGestionCommande::btn_Commande_SupprimerArticle_Click);
			// 
			// txtbox_Commande_PrixHT
			// 
			this->txtbox_Commande_PrixHT->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Commande_PrixHT->Location = System::Drawing::Point(594, 378);
			this->txtbox_Commande_PrixHT->Name = L"txtbox_Commande_PrixHT";
			this->txtbox_Commande_PrixHT->ReadOnly = true;
			this->txtbox_Commande_PrixHT->Size = System::Drawing::Size(100, 20);
			this->txtbox_Commande_PrixHT->TabIndex = 27;
			// 
			// MyFormVueGestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(773, 226);
			this->Controls->Add(this->btn_Commande_SupprimerArticle);
			this->Controls->Add(this->btn_Commande_ModifQuant);
			this->Controls->Add(this->btn_Commande_Ajouter);
			this->Controls->Add(this->lbl_Commande_QuantiteArticle);
			this->Controls->Add(this->txtbox_Commande_QuantiteArticle);
			this->Controls->Add(this->lbl_Commande_DesigArticle);
			this->Controls->Add(this->txtbox_Commande_DesigArticle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Panelgris);
			this->Controls->Add(this->lbl_Commande_PrixTTC);
			this->Controls->Add(this->txtbox_Commande_PrixTTC);
			this->Controls->Add(this->lbl_Commande_PrixHT);
			this->Controls->Add(this->txtbox_Commande_PrixHT);
			this->Controls->Add(this->lbl_Commande_Reduction);
			this->Controls->Add(this->txtbox_Commande_Reduction);
			this->Controls->Add(this->lbl_Commande_DateEmi);
			this->Controls->Add(this->txtbox_Commande_DateEmi);
			this->Controls->Add(this->txtbox_Commande_Message);
			this->Controls->Add(this->lbl_Commande_DateRegl);
			this->Controls->Add(this->lbl_Commande_MoyPai);
			this->Controls->Add(this->lbl_Commande_DateLivr);
			this->Controls->Add(this->lbl_Commande_Prenom);
			this->Controls->Add(this->lbl_Commande_Nom);
			this->Controls->Add(this->lbl_Commande_Pseudo);
			this->Controls->Add(this->lbl_Commande_Reference);
			this->Controls->Add(this->txtbox_Commande_DateRegl);
			this->Controls->Add(this->txtbox_Commande_MoyPai);
			this->Controls->Add(this->txtbox_Commande_DateLivr);
			this->Controls->Add(this->txtbox_Commande_Prenom);
			this->Controls->Add(this->txtbox_Commande_Nom);
			this->Controls->Add(this->txtbox_Commande_Pseudo);
			this->Controls->Add(this->txtbox_Commande_Reference);
			this->Controls->Add(this->btn_Commande_Afficher);
			this->Controls->Add(this->btn_Commande_Supprimer);
			this->Controls->Add(this->btn_Commande_Modifier);
			this->Controls->Add(this->btn_Commande_Creer);
			this->Controls->Add(this->dataGridView_Commande);
			this->Name = L"MyFormVueGestionCommande";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Commande";
			this->Load += gcnew System::EventHandler(this, &MyFormVueGestionCommande::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Commande))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ds = gcnew Data::DataSet();
		this->oSvc = gcnew CL_svc_commande;
	}
	private: System::Void btn_Commande_Creer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->ajouterCommande(this->txtbox_Commande_Reference->Text, this->txtbox_Commande_Pseudo->Text, this->txtbox_Commande_MoyPai->Text, this->txtbox_Commande_DateEmi->Text, this->txtbox_Commande_DateLivr->Text, this->txtbox_Commande_DateRegl->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Création réussite !";
		}
	}
	private: System::Void btn_Commande_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->modifierCommande(this->txtbox_Commande_Reference->Text, this->txtbox_Commande_Pseudo->Text, this->txtbox_Commande_MoyPai->Text, this->txtbox_Commande_DateEmi->Text, this->txtbox_Commande_DateLivr->Text, this->txtbox_Commande_DateRegl->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Modification réussite !";
		}
	}
	private: System::Void btn_Commande_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->supprimerCommande(this->txtbox_Commande_Reference->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Suprression réussite !";
		}
	}
	private: System::Void btn_Commande_Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Commande->Refresh();
		this->oDs = this->oSvc->afficherCommande("AP1", this->txtbox_Commande_Reference->Text);
		this->dataGridView_Commande->DataSource = this->oDs;
		this->dataGridView_Commande->DataMember = "AP1";
	}
	private: System::Void btn_Commande_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->ajouterArticleCommande(this->txtbox_Commande_Reference->Text, this->txtbox_Commande_DesigArticle->Text, Convert::ToInt32(this->txtbox_Commande_QuantiteArticle->Text));
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Ajout réussite !";
		}
	}
	private: System::Void btn_Commande_ModifQuant_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->modifierArticleCommande(this->txtbox_Commande_Reference->Text, this->txtbox_Commande_DesigArticle->Text, Convert::ToInt32(this->txtbox_Commande_QuantiteArticle->Text));
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Modification réussite !";
		}
	}
	private: System::Void btn_Commande_SupprimerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->supprimerArticleCommande(this->txtbox_Commande_Reference->Text, this->txtbox_Commande_DesigArticle->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Commande_Message->Text = "Supprimer réussite !";
		}
	}
};
}