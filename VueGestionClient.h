#pragma once
#include "Svc_Gestion_Client.h"

namespace VueGestionClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormVueGestionClient : public System::Windows::Forms::Form
	{
	public:
		MyFormVueGestionClient(void)
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
		~MyFormVueGestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView_Client;
	protected:

	private: System::Windows::Forms::Button^ btn_Client_Creer;
	private: System::Windows::Forms::Button^ btn_Client_Modifier;
	private: System::Windows::Forms::Button^ btn_Client_Supprimer;
	private: System::Windows::Forms::Button^ btn_Client_Afficher;

	private: System::Windows::Forms::TextBox^ txtbox_Client_Nom;
	private: System::Windows::Forms::TextBox^ txtbox_Client_Prenom;
	private: System::Windows::Forms::TextBox^ txtbox_Client_AdresseLivr;
	private: System::Windows::Forms::TextBox^ txtbox_Client_VilleLivr;
	private: System::Windows::Forms::TextBox^ txtbox_Client_AdresseFactu;
	private: System::Windows::Forms::TextBox^ txtbox_Client_VilleFactu;




	private: CL_svc_client^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oIs;




	private: System::Windows::Forms::Label^ lbl_Client_Nom;
	private: System::Windows::Forms::Label^ lbl_Client_Prenom;
	private: System::Windows::Forms::Label^ lbl_Client_AdresseLivr;
	private: System::Windows::Forms::Label^ lbl_Client_VilleLivr;
	private: System::Windows::Forms::Label^ lbl_Client_AdresseFactu;
	private: System::Windows::Forms::Label^ lbl_Client_VilleFactu;


	private: System::Windows::Forms::TextBox^ txtbox_Client_Message;
	private: System::Windows::Forms::Button^ btn_Client_ADD_Adresse;

	private: System::Windows::Forms::Label^ lbl_Client_DateAnniv;
	private: System::Windows::Forms::TextBox^ txtbox_Client_DateAnniv;
	private: System::Windows::Forms::TextBox^ txtbox_Client_Pseudo;

	private: System::Windows::Forms::Label^ lbl_Client_Pseudo;

	private: CL_svc_client^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ id;
	private: System::Windows::Forms::Button^ btn_Client_DEL_Adresse;


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
			this->dataGridView_Client = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Client_Creer = (gcnew System::Windows::Forms::Button());
			this->btn_Client_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Client_Supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_Client_Afficher = (gcnew System::Windows::Forms::Button());
			this->txtbox_Client_Nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_AdresseLivr = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_VilleLivr = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_AdresseFactu = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_VilleFactu = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Client_Nom = (gcnew System::Windows::Forms::Label());
			this->lbl_Client_Prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_Client_AdresseLivr = (gcnew System::Windows::Forms::Label());
			this->lbl_Client_VilleLivr = (gcnew System::Windows::Forms::Label());
			this->lbl_Client_AdresseFactu = (gcnew System::Windows::Forms::Label());
			this->lbl_Client_VilleFactu = (gcnew System::Windows::Forms::Label());
			this->txtbox_Client_Message = (gcnew System::Windows::Forms::TextBox());
			this->btn_Client_ADD_Adresse = (gcnew System::Windows::Forms::Button());
			this->lbl_Client_DateAnniv = (gcnew System::Windows::Forms::Label());
			this->txtbox_Client_DateAnniv = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Client_Pseudo = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Client_Pseudo = (gcnew System::Windows::Forms::Label());
			this->btn_Client_DEL_Adresse = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Client))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Client
			// 
			this->dataGridView_Client->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Client->Location = System::Drawing::Point(12, 12);
			this->dataGridView_Client->Name = L"dataGridView_Client";
			this->dataGridView_Client->RowHeadersWidth = 51;
			this->dataGridView_Client->Size = System::Drawing::Size(851, 176);
			this->dataGridView_Client->TabIndex = 0;
			// 
			// btn_Client_Creer
			// 
			this->btn_Client_Creer->Location = System::Drawing::Point(13, 194);
			this->btn_Client_Creer->Name = L"btn_Client_Creer";
			this->btn_Client_Creer->Size = System::Drawing::Size(75, 23);
			this->btn_Client_Creer->TabIndex = 1;
			this->btn_Client_Creer->Text = L"Créer";
			this->btn_Client_Creer->UseVisualStyleBackColor = true;
			this->btn_Client_Creer->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Personnel_Creer_Click);
			// 
			// btn_Client_Modifier
			// 
			this->btn_Client_Modifier->Location = System::Drawing::Point(93, 195);
			this->btn_Client_Modifier->Name = L"btn_Client_Modifier";
			this->btn_Client_Modifier->Size = System::Drawing::Size(75, 23);
			this->btn_Client_Modifier->TabIndex = 2;
			this->btn_Client_Modifier->Text = L"Modifier";
			this->btn_Client_Modifier->UseVisualStyleBackColor = true;
			this->btn_Client_Modifier->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Personnel_Modifier_Click);
			// 
			// btn_Client_Supprimer
			// 
			this->btn_Client_Supprimer->Location = System::Drawing::Point(174, 195);
			this->btn_Client_Supprimer->Name = L"btn_Client_Supprimer";
			this->btn_Client_Supprimer->Size = System::Drawing::Size(75, 23);
			this->btn_Client_Supprimer->TabIndex = 3;
			this->btn_Client_Supprimer->Text = L"Supprimer";
			this->btn_Client_Supprimer->UseVisualStyleBackColor = true;
			this->btn_Client_Supprimer->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Client_Supprimer_Click);
			// 
			// btn_Client_Afficher
			// 
			this->btn_Client_Afficher->Location = System::Drawing::Point(255, 194);
			this->btn_Client_Afficher->Name = L"btn_Client_Afficher";
			this->btn_Client_Afficher->Size = System::Drawing::Size(75, 23);
			this->btn_Client_Afficher->TabIndex = 4;
			this->btn_Client_Afficher->Text = L"Afficher";
			this->btn_Client_Afficher->UseVisualStyleBackColor = true;
			this->btn_Client_Afficher->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Client_Afficher_Click);
			// 
			// txtbox_Client_Nom
			// 
			this->txtbox_Client_Nom->Location = System::Drawing::Point(869, 67);
			this->txtbox_Client_Nom->Name = L"txtbox_Client_Nom";
			this->txtbox_Client_Nom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_Nom->TabIndex = 6;
			// 
			// txtbox_Client_Prenom
			// 
			this->txtbox_Client_Prenom->Location = System::Drawing::Point(869, 96);
			this->txtbox_Client_Prenom->Name = L"txtbox_Client_Prenom";
			this->txtbox_Client_Prenom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_Prenom->TabIndex = 7;
			// 
			// txtbox_Client_AdresseLivr
			// 
			this->txtbox_Client_AdresseLivr->Location = System::Drawing::Point(869, 126);
			this->txtbox_Client_AdresseLivr->Name = L"txtbox_Client_AdresseLivr";
			this->txtbox_Client_AdresseLivr->Size = System::Drawing::Size(184, 20);
			this->txtbox_Client_AdresseLivr->TabIndex = 8;
			// 
			// txtbox_Client_VilleLivr
			// 
			this->txtbox_Client_VilleLivr->Location = System::Drawing::Point(869, 155);
			this->txtbox_Client_VilleLivr->Name = L"txtbox_Client_VilleLivr";
			this->txtbox_Client_VilleLivr->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_VilleLivr->TabIndex = 9;
			// 
			// txtbox_Client_AdresseFactu
			// 
			this->txtbox_Client_AdresseFactu->Location = System::Drawing::Point(869, 183);
			this->txtbox_Client_AdresseFactu->Name = L"txtbox_Client_AdresseFactu";
			this->txtbox_Client_AdresseFactu->Size = System::Drawing::Size(184, 20);
			this->txtbox_Client_AdresseFactu->TabIndex = 10;
			// 
			// txtbox_Client_VilleFactu
			// 
			this->txtbox_Client_VilleFactu->Location = System::Drawing::Point(869, 212);
			this->txtbox_Client_VilleFactu->Name = L"txtbox_Client_VilleFactu";
			this->txtbox_Client_VilleFactu->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_VilleFactu->TabIndex = 11;
			// 
			// lbl_Client_Nom
			// 
			this->lbl_Client_Nom->AutoSize = true;
			this->lbl_Client_Nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_Nom->Location = System::Drawing::Point(974, 69);
			this->lbl_Client_Nom->Name = L"lbl_Client_Nom";
			this->lbl_Client_Nom->Size = System::Drawing::Size(29, 13);
			this->lbl_Client_Nom->TabIndex = 13;
			this->lbl_Client_Nom->Text = L"Nom";
			// 
			// lbl_Client_Prenom
			// 
			this->lbl_Client_Prenom->AutoSize = true;
			this->lbl_Client_Prenom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_Prenom->Location = System::Drawing::Point(974, 97);
			this->lbl_Client_Prenom->Name = L"lbl_Client_Prenom";
			this->lbl_Client_Prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_Client_Prenom->TabIndex = 14;
			this->lbl_Client_Prenom->Text = L"Prenom";
			// 
			// lbl_Client_AdresseLivr
			// 
			this->lbl_Client_AdresseLivr->AutoSize = true;
			this->lbl_Client_AdresseLivr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_AdresseLivr->Location = System::Drawing::Point(1058, 129);
			this->lbl_Client_AdresseLivr->Name = L"lbl_Client_AdresseLivr";
			this->lbl_Client_AdresseLivr->Size = System::Drawing::Size(105, 13);
			this->lbl_Client_AdresseLivr->TabIndex = 15;
			this->lbl_Client_AdresseLivr->Text = L"Adresse de Livraison";
			// 
			// lbl_Client_VilleLivr
			// 
			this->lbl_Client_VilleLivr->AutoSize = true;
			this->lbl_Client_VilleLivr->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_VilleLivr->Location = System::Drawing::Point(974, 158);
			this->lbl_Client_VilleLivr->Name = L"lbl_Client_VilleLivr";
			this->lbl_Client_VilleLivr->Size = System::Drawing::Size(86, 13);
			this->lbl_Client_VilleLivr->TabIndex = 16;
			this->lbl_Client_VilleLivr->Text = L"Ville de Livraison";
			// 
			// lbl_Client_AdresseFactu
			// 
			this->lbl_Client_AdresseFactu->AutoSize = true;
			this->lbl_Client_AdresseFactu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_AdresseFactu->Location = System::Drawing::Point(1058, 185);
			this->lbl_Client_AdresseFactu->Name = L"lbl_Client_AdresseFactu";
			this->lbl_Client_AdresseFactu->Size = System::Drawing::Size(116, 13);
			this->lbl_Client_AdresseFactu->TabIndex = 17;
			this->lbl_Client_AdresseFactu->Text = L"Adresse de Facturation";
			// 
			// lbl_Client_VilleFactu
			// 
			this->lbl_Client_VilleFactu->AutoSize = true;
			this->lbl_Client_VilleFactu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_VilleFactu->Location = System::Drawing::Point(974, 216);
			this->lbl_Client_VilleFactu->Name = L"lbl_Client_VilleFactu";
			this->lbl_Client_VilleFactu->Size = System::Drawing::Size(97, 13);
			this->lbl_Client_VilleFactu->TabIndex = 18;
			this->lbl_Client_VilleFactu->Text = L"Ville de Facturation";
			// 
			// txtbox_Client_Message
			// 
			this->txtbox_Client_Message->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Client_Message->Location = System::Drawing::Point(12, 223);
			this->txtbox_Client_Message->Multiline = true;
			this->txtbox_Client_Message->Name = L"txtbox_Client_Message";
			this->txtbox_Client_Message->ReadOnly = true;
			this->txtbox_Client_Message->Size = System::Drawing::Size(318, 37);
			this->txtbox_Client_Message->TabIndex = 19;
			// 
			// btn_Client_ADD_Adresse
			// 
			this->btn_Client_ADD_Adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->btn_Client_ADD_Adresse->Location = System::Drawing::Point(409, 196);
			this->btn_Client_ADD_Adresse->Name = L"btn_Client_ADD_Adresse";
			this->btn_Client_ADD_Adresse->Size = System::Drawing::Size(81, 20);
			this->btn_Client_ADD_Adresse->TabIndex = 22;
			this->btn_Client_ADD_Adresse->Text = L"ADD adresse";
			this->btn_Client_ADD_Adresse->UseVisualStyleBackColor = true;
			this->btn_Client_ADD_Adresse->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Client_ADD_Adresse_Click);
			// 
			// lbl_Client_DateAnniv
			// 
			this->lbl_Client_DateAnniv->AutoSize = true;
			this->lbl_Client_DateAnniv->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_DateAnniv->Location = System::Drawing::Point(974, 244);
			this->lbl_Client_DateAnniv->Name = L"lbl_Client_DateAnniv";
			this->lbl_Client_DateAnniv->Size = System::Drawing::Size(98, 13);
			this->lbl_Client_DateAnniv->TabIndex = 24;
			this->lbl_Client_DateAnniv->Text = L"Date d\'anniversaire";
			// 
			// txtbox_Client_DateAnniv
			// 
			this->txtbox_Client_DateAnniv->Location = System::Drawing::Point(869, 241);
			this->txtbox_Client_DateAnniv->Name = L"txtbox_Client_DateAnniv";
			this->txtbox_Client_DateAnniv->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_DateAnniv->TabIndex = 23;
			this->txtbox_Client_DateAnniv->Text = L"AAAA-MM-JJ";
			// 
			// txtbox_Client_Pseudo
			// 
			this->txtbox_Client_Pseudo->Location = System::Drawing::Point(869, 38);
			this->txtbox_Client_Pseudo->Name = L"txtbox_Client_Pseudo";
			this->txtbox_Client_Pseudo->Size = System::Drawing::Size(100, 20);
			this->txtbox_Client_Pseudo->TabIndex = 25;
			// 
			// lbl_Client_Pseudo
			// 
			this->lbl_Client_Pseudo->AutoSize = true;
			this->lbl_Client_Pseudo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Client_Pseudo->Location = System::Drawing::Point(974, 41);
			this->lbl_Client_Pseudo->Name = L"lbl_Client_Pseudo";
			this->lbl_Client_Pseudo->Size = System::Drawing::Size(43, 13);
			this->lbl_Client_Pseudo->TabIndex = 26;
			this->lbl_Client_Pseudo->Text = L"Pseudo";
			// 
			// btn_Client_DEL_Adresse
			// 
			this->btn_Client_DEL_Adresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->btn_Client_DEL_Adresse->Location = System::Drawing::Point(409, 222);
			this->btn_Client_DEL_Adresse->Name = L"btn_Client_DEL_Adresse";
			this->btn_Client_DEL_Adresse->Size = System::Drawing::Size(81, 20);
			this->btn_Client_DEL_Adresse->TabIndex = 27;
			this->btn_Client_DEL_Adresse->Text = L"DEL adresse";
			this->btn_Client_DEL_Adresse->UseVisualStyleBackColor = true;
			this->btn_Client_DEL_Adresse->Click += gcnew System::EventHandler(this, &MyFormVueGestionClient::btn_Client_DEL_Adresse_Click);
			// 
			// MyFormVueGestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1178, 269);
			this->Controls->Add(this->btn_Client_DEL_Adresse);
			this->Controls->Add(this->lbl_Client_Pseudo);
			this->Controls->Add(this->txtbox_Client_Pseudo);
			this->Controls->Add(this->lbl_Client_DateAnniv);
			this->Controls->Add(this->txtbox_Client_DateAnniv);
			this->Controls->Add(this->btn_Client_ADD_Adresse);
			this->Controls->Add(this->txtbox_Client_Message);
			this->Controls->Add(this->lbl_Client_VilleFactu);
			this->Controls->Add(this->lbl_Client_AdresseFactu);
			this->Controls->Add(this->lbl_Client_VilleLivr);
			this->Controls->Add(this->lbl_Client_AdresseLivr);
			this->Controls->Add(this->lbl_Client_Prenom);
			this->Controls->Add(this->lbl_Client_Nom);
			this->Controls->Add(this->txtbox_Client_VilleFactu);
			this->Controls->Add(this->txtbox_Client_AdresseFactu);
			this->Controls->Add(this->txtbox_Client_VilleLivr);
			this->Controls->Add(this->txtbox_Client_AdresseLivr);
			this->Controls->Add(this->txtbox_Client_Prenom);
			this->Controls->Add(this->txtbox_Client_Nom);
			this->Controls->Add(this->btn_Client_Afficher);
			this->Controls->Add(this->btn_Client_Supprimer);
			this->Controls->Add(this->btn_Client_Modifier);
			this->Controls->Add(this->btn_Client_Creer);
			this->Controls->Add(this->dataGridView_Client);
			this->Name = L"MyFormVueGestionClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Client";
			this->Load += gcnew System::EventHandler(this, &MyFormVueGestionClient::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Client))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ds = gcnew Data::DataSet();
		this->oSvc = gcnew CL_svc_client;
	}
	private: System::Void btn_Personnel_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->modifierClient(this->txtbox_Client_Pseudo->Text, this->txtbox_Client_Nom->Text, this->txtbox_Client_Prenom->Text, this->txtbox_Client_AdresseLivr->Text, this->txtbox_Client_VilleLivr->Text, this->txtbox_Client_AdresseFactu->Text, this->txtbox_Client_VilleFactu->Text, this->txtbox_Client_DateAnniv->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Client_Message->Text = "Modification réussite !";
		}
	}
	private: System::Void btn_Personnel_Creer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->ajouterClient(this->txtbox_Client_Pseudo->Text, this->txtbox_Client_Nom->Text, this->txtbox_Client_Prenom->Text, this->txtbox_Client_AdresseLivr->Text, this->txtbox_Client_VilleLivr->Text, this->txtbox_Client_AdresseFactu->Text, this->txtbox_Client_VilleFactu->Text, this->txtbox_Client_DateAnniv->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Client_Message->Text = "Création réussite !";
		}
	}
	private: System::Void btn_Client_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->supprimerClient(this->txtbox_Client_Pseudo->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Client_Message->Text = "Supression réussite !";
		}
	}
	private: System::Void btn_Client_Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Pseudo;
		Pseudo = this->txtbox_Client_Pseudo->Text;
		if (Pseudo != "") {
			this->dataGridView_Client->Refresh();
			this->oDs = this->oSvc->afficherUNClient("AP1", Pseudo);
			this->dataGridView_Client->DataSource = this->oDs;
			this->dataGridView_Client->DataMember = "AP1";
		}
		else {
			this->dataGridView_Client->Refresh();
			this->oDs = this->oSvc->afficherClient("AP2");
			this->dataGridView_Client->DataSource = this->oDs;
			this->dataGridView_Client->DataMember = "AP2";
		}
	}
	private: System::Void btn_Client_ADD_Adresse_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		String^ VilleLivr;
		VilleLivr = this->txtbox_Client_VilleLivr->Text;
		String^ AdresseLivr;
		AdresseLivr = this->txtbox_Client_AdresseLivr->Text;
		String^ VilleFactu;
		VilleFactu = this->txtbox_Client_VilleFactu->Text;
		String^ AdresseFactu;
		AdresseFactu = this->txtbox_Client_AdresseFactu->Text;

		if (VilleLivr != "" && AdresseLivr != "")
		{
			erreur = this->oSvc->ajouterAdresse(this->txtbox_Client_Pseudo->Text, VilleLivr, AdresseLivr, "Livr");
			if (erreur != "") {
				MessageBox::Show(erreur);
			}
			else {
				this->txtbox_Client_Message->Text = "Ajout adresse réussit !";
			}
		}
		else if (VilleFactu != "" && AdresseFactu != "") {
			erreur = this->oSvc->ajouterAdresse(this->txtbox_Client_Pseudo->Text, VilleFactu, AdresseFactu, "Factu");
			if (erreur != "") {
				MessageBox::Show(erreur);
			}
			else {
				this->txtbox_Client_Message->Text = "Ajout adresse réussit !";
			}
		}
	}
	private: System::Void btn_Client_DEL_Adresse_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		String^ VilleLivr;
		VilleLivr = this->txtbox_Client_VilleLivr->Text;
		String^ AdresseLivr;
		AdresseLivr = this->txtbox_Client_AdresseLivr->Text;
		String^ VilleFactu;
		VilleFactu = this->txtbox_Client_VilleFactu->Text;
		String^ AdresseFactu;
		AdresseFactu = this->txtbox_Client_AdresseFactu->Text;

		if (VilleLivr != "" && AdresseLivr != "")
		{
			erreur = this->oSvc->supprimerAdresse(this->txtbox_Client_Pseudo->Text, AdresseLivr, VilleLivr, "Livr");
			if (erreur != "") {
				MessageBox::Show(erreur);
			}
			else {
				this->txtbox_Client_Message->Text = "Suprrimer adresse réussit !";
			}
		}
		else if (VilleFactu != "" && AdresseFactu != "") {
			erreur = this->oSvc->supprimerAdresse(this->txtbox_Client_Pseudo->Text, AdresseFactu, VilleFactu, "Factu");
			if (erreur != "") {
				MessageBox::Show(erreur);
			}
			else {
				this->txtbox_Client_Message->Text = "Supprimer adresse réussit !";
			}
		}
	}
};
}