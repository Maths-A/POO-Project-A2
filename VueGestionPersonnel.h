#pragma once
#include "Svc_Gestion_Personnel.h"

namespace VueGestionPersonnel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormVueGestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormVueGestionPersonnel(void)
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
		~MyFormVueGestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ btn_Personnel_Creer;
	private: System::Windows::Forms::Button^ btn_Personnel_Modifier;
	private: System::Windows::Forms::Button^ btn_Personnel_Supprimer;
	private: System::Windows::Forms::Button^ btn_Personnel_Afficher;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_ID;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Nom;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Prenom;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Adresse;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Ville;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Supérieur;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_DateEmbauche;





	private: CL_svc_personnel^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oIs;

	private: System::Windows::Forms::Label^ lbl_Personnel_ID;
	private: System::Windows::Forms::Label^ lbl_Personnel_Nom;
	private: System::Windows::Forms::Label^ lbl_Personnel_Prenom;
	private: System::Windows::Forms::Label^ lbl_Personnel_Adresse;
	private: System::Windows::Forms::Label^ lbl_Personne_Ville;
	private: System::Windows::Forms::Label^ lbl_Personnel_Superieur;
	private: System::Windows::Forms::Label^ lbl_Personnel_DateEmbauche;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Message;


	private: System::Windows::Forms::Label^ lbl_Personnel_Effectif;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Effectif;
	private: System::Windows::Forms::TextBox^ txtbox_Personnel_Pseudo;
	private: System::Windows::Forms::Label^ lbl_Personnel_Pseudo;

	private: CL_svc_personnel^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ id;








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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Personnel_Creer = (gcnew System::Windows::Forms::Button());
			this->btn_Personnel_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Personnel_Supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_Personnel_Afficher = (gcnew System::Windows::Forms::Button());
			this->txtbox_Personnel_ID = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Adresse = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Ville = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Supérieur = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_DateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Personnel_ID = (gcnew System::Windows::Forms::Label());
			this->lbl_Personnel_Nom = (gcnew System::Windows::Forms::Label());
			this->lbl_Personnel_Prenom = (gcnew System::Windows::Forms::Label());
			this->lbl_Personnel_Adresse = (gcnew System::Windows::Forms::Label());
			this->lbl_Personne_Ville = (gcnew System::Windows::Forms::Label());
			this->lbl_Personnel_Superieur = (gcnew System::Windows::Forms::Label());
			this->lbl_Personnel_DateEmbauche = (gcnew System::Windows::Forms::Label());
			this->txtbox_Personnel_Message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Personnel_Effectif = (gcnew System::Windows::Forms::Label());
			this->txtbox_Personnel_Effectif = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Personnel_Pseudo = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Personnel_Pseudo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(945, 176);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_Personnel_Creer
			// 
			this->btn_Personnel_Creer->Location = System::Drawing::Point(13, 194);
			this->btn_Personnel_Creer->Name = L"btn_Personnel_Creer";
			this->btn_Personnel_Creer->Size = System::Drawing::Size(75, 23);
			this->btn_Personnel_Creer->TabIndex = 1;
			this->btn_Personnel_Creer->Text = L"Créer";
			this->btn_Personnel_Creer->UseVisualStyleBackColor = true;
			this->btn_Personnel_Creer->Click += gcnew System::EventHandler(this, &MyFormVueGestionPersonnel::btn_Personnel_Creer_Click);
			// 
			// btn_Personnel_Modifier
			// 
			this->btn_Personnel_Modifier->Location = System::Drawing::Point(94, 194);
			this->btn_Personnel_Modifier->Name = L"btn_Personnel_Modifier";
			this->btn_Personnel_Modifier->Size = System::Drawing::Size(75, 23);
			this->btn_Personnel_Modifier->TabIndex = 2;
			this->btn_Personnel_Modifier->Text = L"Modifier";
			this->btn_Personnel_Modifier->UseVisualStyleBackColor = true;
			this->btn_Personnel_Modifier->Click += gcnew System::EventHandler(this, &MyFormVueGestionPersonnel::btn_Personnel_Modifier_Click);
			// 
			// btn_Personnel_Supprimer
			// 
			this->btn_Personnel_Supprimer->Location = System::Drawing::Point(175, 194);
			this->btn_Personnel_Supprimer->Name = L"btn_Personnel_Supprimer";
			this->btn_Personnel_Supprimer->Size = System::Drawing::Size(75, 23);
			this->btn_Personnel_Supprimer->TabIndex = 3;
			this->btn_Personnel_Supprimer->Text = L"Supprimer";
			this->btn_Personnel_Supprimer->UseVisualStyleBackColor = true;
			this->btn_Personnel_Supprimer->Click += gcnew System::EventHandler(this, &MyFormVueGestionPersonnel::btn_Personnel_Supprimer_Click);
			// 
			// btn_Personnel_Afficher
			// 
			this->btn_Personnel_Afficher->Location = System::Drawing::Point(255, 194);
			this->btn_Personnel_Afficher->Name = L"btn_Personnel_Afficher";
			this->btn_Personnel_Afficher->Size = System::Drawing::Size(75, 23);
			this->btn_Personnel_Afficher->TabIndex = 4;
			this->btn_Personnel_Afficher->Text = L"Afficher";
			this->btn_Personnel_Afficher->UseVisualStyleBackColor = true;
			this->btn_Personnel_Afficher->Click += gcnew System::EventHandler(this, &MyFormVueGestionPersonnel::btn_Personnel_Afficher_Click);
			// 
			// txtbox_Personnel_ID
			// 
			this->txtbox_Personnel_ID->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Personnel_ID->Location = System::Drawing::Point(947, 427);
			this->txtbox_Personnel_ID->Name = L"txtbox_Personnel_ID";
			this->txtbox_Personnel_ID->ReadOnly = true;
			this->txtbox_Personnel_ID->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_ID->TabIndex = 5;
			// 
			// txtbox_Personnel_Nom
			// 
			this->txtbox_Personnel_Nom->Location = System::Drawing::Point(963, 75);
			this->txtbox_Personnel_Nom->Name = L"txtbox_Personnel_Nom";
			this->txtbox_Personnel_Nom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_Nom->TabIndex = 6;
			// 
			// txtbox_Personnel_Prenom
			// 
			this->txtbox_Personnel_Prenom->Location = System::Drawing::Point(963, 110);
			this->txtbox_Personnel_Prenom->Name = L"txtbox_Personnel_Prenom";
			this->txtbox_Personnel_Prenom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_Prenom->TabIndex = 7;
			// 
			// txtbox_Personnel_Adresse
			// 
			this->txtbox_Personnel_Adresse->Location = System::Drawing::Point(963, 146);
			this->txtbox_Personnel_Adresse->Name = L"txtbox_Personnel_Adresse";
			this->txtbox_Personnel_Adresse->Size = System::Drawing::Size(184, 20);
			this->txtbox_Personnel_Adresse->TabIndex = 8;
			// 
			// txtbox_Personnel_Ville
			// 
			this->txtbox_Personnel_Ville->Location = System::Drawing::Point(963, 181);
			this->txtbox_Personnel_Ville->Name = L"txtbox_Personnel_Ville";
			this->txtbox_Personnel_Ville->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_Ville->TabIndex = 9;
			// 
			// txtbox_Personnel_Supérieur
			// 
			this->txtbox_Personnel_Supérieur->Location = System::Drawing::Point(963, 218);
			this->txtbox_Personnel_Supérieur->Name = L"txtbox_Personnel_Supérieur";
			this->txtbox_Personnel_Supérieur->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_Supérieur->TabIndex = 10;
			// 
			// txtbox_Personnel_DateEmbauche
			// 
			this->txtbox_Personnel_DateEmbauche->Location = System::Drawing::Point(963, 251);
			this->txtbox_Personnel_DateEmbauche->Name = L"txtbox_Personnel_DateEmbauche";
			this->txtbox_Personnel_DateEmbauche->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_DateEmbauche->TabIndex = 11;
			this->txtbox_Personnel_DateEmbauche->Text = L"AAAA-MM-JJ";
			// 
			// lbl_Personnel_ID
			// 
			this->lbl_Personnel_ID->AutoSize = true;
			this->lbl_Personnel_ID->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_ID->Location = System::Drawing::Point(1054, 428);
			this->lbl_Personnel_ID->Name = L"lbl_Personnel_ID";
			this->lbl_Personnel_ID->Size = System::Drawing::Size(18, 13);
			this->lbl_Personnel_ID->TabIndex = 12;
			this->lbl_Personnel_ID->Text = L"ID";
			// 
			// lbl_Personnel_Nom
			// 
			this->lbl_Personnel_Nom->AutoSize = true;
			this->lbl_Personnel_Nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Nom->Location = System::Drawing::Point(1070, 78);
			this->lbl_Personnel_Nom->Name = L"lbl_Personnel_Nom";
			this->lbl_Personnel_Nom->Size = System::Drawing::Size(29, 13);
			this->lbl_Personnel_Nom->TabIndex = 13;
			this->lbl_Personnel_Nom->Text = L"Nom";
			// 
			// lbl_Personnel_Prenom
			// 
			this->lbl_Personnel_Prenom->AutoSize = true;
			this->lbl_Personnel_Prenom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Prenom->Location = System::Drawing::Point(1069, 113);
			this->lbl_Personnel_Prenom->Name = L"lbl_Personnel_Prenom";
			this->lbl_Personnel_Prenom->Size = System::Drawing::Size(43, 13);
			this->lbl_Personnel_Prenom->TabIndex = 14;
			this->lbl_Personnel_Prenom->Text = L"Prenom";
			// 
			// lbl_Personnel_Adresse
			// 
			this->lbl_Personnel_Adresse->AutoSize = true;
			this->lbl_Personnel_Adresse->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Adresse->Location = System::Drawing::Point(1153, 149);
			this->lbl_Personnel_Adresse->Name = L"lbl_Personnel_Adresse";
			this->lbl_Personnel_Adresse->Size = System::Drawing::Size(45, 13);
			this->lbl_Personnel_Adresse->TabIndex = 15;
			this->lbl_Personnel_Adresse->Text = L"Adresse";
			// 
			// lbl_Personne_Ville
			// 
			this->lbl_Personne_Ville->AutoSize = true;
			this->lbl_Personne_Ville->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personne_Ville->Location = System::Drawing::Point(1070, 184);
			this->lbl_Personne_Ville->Name = L"lbl_Personne_Ville";
			this->lbl_Personne_Ville->Size = System::Drawing::Size(26, 13);
			this->lbl_Personne_Ville->TabIndex = 16;
			this->lbl_Personne_Ville->Text = L"Ville";
			// 
			// lbl_Personnel_Superieur
			// 
			this->lbl_Personnel_Superieur->AutoSize = true;
			this->lbl_Personnel_Superieur->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Superieur->Location = System::Drawing::Point(1069, 218);
			this->lbl_Personnel_Superieur->Name = L"lbl_Personnel_Superieur";
			this->lbl_Personnel_Superieur->Size = System::Drawing::Size(52, 13);
			this->lbl_Personnel_Superieur->TabIndex = 17;
			this->lbl_Personnel_Superieur->Text = L"Supérieur";
			// 
			// lbl_Personnel_DateEmbauche
			// 
			this->lbl_Personnel_DateEmbauche->AutoSize = true;
			this->lbl_Personnel_DateEmbauche->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_DateEmbauche->Location = System::Drawing::Point(1070, 254);
			this->lbl_Personnel_DateEmbauche->Name = L"lbl_Personnel_DateEmbauche";
			this->lbl_Personnel_DateEmbauche->Size = System::Drawing::Size(91, 13);
			this->lbl_Personnel_DateEmbauche->TabIndex = 18;
			this->lbl_Personnel_DateEmbauche->Text = L"Date d\'embauche";
			// 
			// txtbox_Personnel_Message
			// 
			this->txtbox_Personnel_Message->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Personnel_Message->Location = System::Drawing::Point(12, 223);
			this->txtbox_Personnel_Message->Multiline = true;
			this->txtbox_Personnel_Message->Name = L"txtbox_Personnel_Message";
			this->txtbox_Personnel_Message->ReadOnly = true;
			this->txtbox_Personnel_Message->Size = System::Drawing::Size(250, 37);
			this->txtbox_Personnel_Message->TabIndex = 19;
			// 
			// lbl_Personnel_Effectif
			// 
			this->lbl_Personnel_Effectif->AutoSize = true;
			this->lbl_Personnel_Effectif->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Effectif->Location = System::Drawing::Point(279, 246);
			this->lbl_Personnel_Effectif->Name = L"lbl_Personnel_Effectif";
			this->lbl_Personnel_Effectif->Size = System::Drawing::Size(40, 13);
			this->lbl_Personnel_Effectif->TabIndex = 21;
			this->lbl_Personnel_Effectif->Text = L"Effectif";
			// 
			// txtbox_Personnel_Effectif
			// 
			this->txtbox_Personnel_Effectif->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Personnel_Effectif->Location = System::Drawing::Point(270, 223);
			this->txtbox_Personnel_Effectif->Name = L"txtbox_Personnel_Effectif";
			this->txtbox_Personnel_Effectif->ReadOnly = true;
			this->txtbox_Personnel_Effectif->Size = System::Drawing::Size(60, 20);
			this->txtbox_Personnel_Effectif->TabIndex = 20;
			// 
			// txtbox_Personnel_Pseudo
			// 
			this->txtbox_Personnel_Pseudo->Location = System::Drawing::Point(963, 44);
			this->txtbox_Personnel_Pseudo->Name = L"txtbox_Personnel_Pseudo";
			this->txtbox_Personnel_Pseudo->Size = System::Drawing::Size(100, 20);
			this->txtbox_Personnel_Pseudo->TabIndex = 22;
			// 
			// lbl_Personnel_Pseudo
			// 
			this->lbl_Personnel_Pseudo->AutoSize = true;
			this->lbl_Personnel_Pseudo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Personnel_Pseudo->Location = System::Drawing::Point(1068, 46);
			this->lbl_Personnel_Pseudo->Name = L"lbl_Personnel_Pseudo";
			this->lbl_Personnel_Pseudo->Size = System::Drawing::Size(43, 13);
			this->lbl_Personnel_Pseudo->TabIndex = 23;
			this->lbl_Personnel_Pseudo->Text = L"Pseudo";
			// 
			// MyFormVueGestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(1200, 286);
			this->Controls->Add(this->lbl_Personnel_Pseudo);
			this->Controls->Add(this->txtbox_Personnel_Pseudo);
			this->Controls->Add(this->lbl_Personnel_Effectif);
			this->Controls->Add(this->txtbox_Personnel_Effectif);
			this->Controls->Add(this->txtbox_Personnel_Message);
			this->Controls->Add(this->lbl_Personnel_DateEmbauche);
			this->Controls->Add(this->lbl_Personnel_Superieur);
			this->Controls->Add(this->lbl_Personne_Ville);
			this->Controls->Add(this->lbl_Personnel_Adresse);
			this->Controls->Add(this->lbl_Personnel_Prenom);
			this->Controls->Add(this->lbl_Personnel_Nom);
			this->Controls->Add(this->lbl_Personnel_ID);
			this->Controls->Add(this->txtbox_Personnel_DateEmbauche);
			this->Controls->Add(this->txtbox_Personnel_Supérieur);
			this->Controls->Add(this->txtbox_Personnel_Ville);
			this->Controls->Add(this->txtbox_Personnel_Adresse);
			this->Controls->Add(this->txtbox_Personnel_Prenom);
			this->Controls->Add(this->txtbox_Personnel_Nom);
			this->Controls->Add(this->txtbox_Personnel_ID);
			this->Controls->Add(this->btn_Personnel_Afficher);
			this->Controls->Add(this->btn_Personnel_Supprimer);
			this->Controls->Add(this->btn_Personnel_Modifier);
			this->Controls->Add(this->btn_Personnel_Creer);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormVueGestionPersonnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Personnel";
			this->Load += gcnew System::EventHandler(this, &MyFormVueGestionPersonnel::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ds = gcnew Data::DataSet();
		this->oSvc = gcnew CL_svc_personnel;
	}

	private: System::Void btn_Personnel_Creer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->ajouterPersonnel(this->txtbox_Personnel_Pseudo->Text, this->txtbox_Personnel_Nom->Text, this->txtbox_Personnel_Prenom->Text, this->txtbox_Personnel_Adresse->Text, this->txtbox_Personnel_Ville->Text, this->txtbox_Personnel_DateEmbauche->Text, "Habit", this->txtbox_Personnel_Supérieur->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Personnel_Message->Text = "Création réussite !";
		}
	}
	private: System::Void btn_Personnel_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->modifierPersonnel(this->txtbox_Personnel_Pseudo->Text, this->txtbox_Personnel_Nom->Text, this->txtbox_Personnel_Prenom->Text, this->txtbox_Personnel_Adresse->Text, this->txtbox_Personnel_Ville->Text, this->txtbox_Personnel_DateEmbauche->Text, "Habit", this->txtbox_Personnel_Supérieur->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Personnel_Message->Text = "Modification réussite !";
		}
	}
	private: System::Void btn_Personnel_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->supprimerPersonnel(this->txtbox_Personnel_Pseudo->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Personnel_Message->Text = "Suprression réussite !";
		}
	}
	private: System::Void btn_Personnel_Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Pseudo;
		Pseudo = this->txtbox_Personnel_Pseudo->Text;
		if (Pseudo != "") {
			this->dataGridView1->Refresh();
			this->oDs = this->oSvc->afficherUNPersonnel("AP1", Pseudo);
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "AP1";
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oSvc->afficherPersonnel("AP2");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "AP2";
		}
		this->txtbox_Personnel_Effectif->Text = Convert::ToString(this->oSvc->effectifPersonnel());
	}
};
}