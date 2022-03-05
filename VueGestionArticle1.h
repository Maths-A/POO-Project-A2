#pragma once
#include "Svc_Gestion_Article.h"

namespace VueGestionArticle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormVueGestionArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormVueGestionArticle(void)
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
		~MyFormVueGestionArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView_Article;
	private: System::Windows::Forms::Button^ btn_Article_Creer;
	private: System::Windows::Forms::Button^ btn_Article_Modifier;
	private: System::Windows::Forms::Button^ btn_Article_Supprimer;
	private: System::Windows::Forms::Button^ btn_Article_Afficher;
	private: System::Windows::Forms::TextBox^ txtbox_Article_Reference;
	private: System::Windows::Forms::TextBox^ txtbox_Article_Nom;
	private: System::Windows::Forms::TextBox^ txtbox_Article_Quantite;
	private: System::Windows::Forms::Label^ lbl_Article_Reference;
	private: System::Windows::Forms::Label^ lbl_Article_Nom;
	private: System::Windows::Forms::Label^ lbl_Article_Quantite;


	private: NS_Comp_Svc_article::CL_svc_article^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oIs;

	private: NS_Comp_Svc_article::CL_svc_article^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ id;


	private: System::Windows::Forms::TextBox^ txtbox_Article_Message;
	private: System::Windows::Forms::Label^ lbl_Article_PrixHT;


	private: System::Windows::Forms::TextBox^ txtbox_Article_PrixHT;
	private: System::Windows::Forms::Label^ lbl_Article_PrixTTC;


	private: System::Windows::Forms::TextBox^ txtbox_Article_PrixTTC;
	private: System::Windows::Forms::TextBox^ txtbox_Article_MargeCommercial;

	private: System::Windows::Forms::TextBox^ txtbox_Article_TVA;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtbox_Article_SeuilReapro;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;



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
			this->dataGridView_Article = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Article_Creer = (gcnew System::Windows::Forms::Button());
			this->btn_Article_Modifier = (gcnew System::Windows::Forms::Button());
			this->btn_Article_Supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_Article_Afficher = (gcnew System::Windows::Forms::Button());
			this->txtbox_Article_Reference = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Article_Nom = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Article_Quantite = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Article_Reference = (gcnew System::Windows::Forms::Label());
			this->lbl_Article_Nom = (gcnew System::Windows::Forms::Label());
			this->lbl_Article_Quantite = (gcnew System::Windows::Forms::Label());
			this->txtbox_Article_Message = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Article_PrixHT = (gcnew System::Windows::Forms::Label());
			this->txtbox_Article_PrixHT = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Article_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->txtbox_Article_PrixTTC = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Article_MargeCommercial = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Article_TVA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtbox_Article_SeuilReapro = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Article))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Article
			// 
			this->dataGridView_Article->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Article->Location = System::Drawing::Point(12, 12);
			this->dataGridView_Article->Name = L"dataGridView_Article";
			this->dataGridView_Article->RowHeadersWidth = 51;
			this->dataGridView_Article->Size = System::Drawing::Size(318, 176);
			this->dataGridView_Article->TabIndex = 0;
			// 
			// btn_Article_Creer
			// 
			this->btn_Article_Creer->Location = System::Drawing::Point(13, 194);
			this->btn_Article_Creer->Name = L"btn_Article_Creer";
			this->btn_Article_Creer->Size = System::Drawing::Size(75, 23);
			this->btn_Article_Creer->TabIndex = 1;
			this->btn_Article_Creer->Text = L"Créer";
			this->btn_Article_Creer->UseVisualStyleBackColor = true;
			this->btn_Article_Creer->Click += gcnew System::EventHandler(this, &MyFormVueGestionArticle::btn_Article_Creer_Click);
			// 
			// btn_Article_Modifier
			// 
			this->btn_Article_Modifier->Location = System::Drawing::Point(93, 195);
			this->btn_Article_Modifier->Name = L"btn_Article_Modifier";
			this->btn_Article_Modifier->Size = System::Drawing::Size(75, 23);
			this->btn_Article_Modifier->TabIndex = 2;
			this->btn_Article_Modifier->Text = L"Modifier";
			this->btn_Article_Modifier->UseVisualStyleBackColor = true;
			this->btn_Article_Modifier->Click += gcnew System::EventHandler(this, &MyFormVueGestionArticle::btn_Article_Modifier_Click);
			// 
			// btn_Article_Supprimer
			// 
			this->btn_Article_Supprimer->Location = System::Drawing::Point(174, 195);
			this->btn_Article_Supprimer->Name = L"btn_Article_Supprimer";
			this->btn_Article_Supprimer->Size = System::Drawing::Size(75, 23);
			this->btn_Article_Supprimer->TabIndex = 3;
			this->btn_Article_Supprimer->Text = L"Supprimer";
			this->btn_Article_Supprimer->UseVisualStyleBackColor = true;
			this->btn_Article_Supprimer->Click += gcnew System::EventHandler(this, &MyFormVueGestionArticle::btn_Article_Supprimer_Click);
			// 
			// btn_Article_Afficher
			// 
			this->btn_Article_Afficher->Location = System::Drawing::Point(255, 194);
			this->btn_Article_Afficher->Name = L"btn_Article_Afficher";
			this->btn_Article_Afficher->Size = System::Drawing::Size(75, 23);
			this->btn_Article_Afficher->TabIndex = 4;
			this->btn_Article_Afficher->Text = L"Afficher";
			this->btn_Article_Afficher->UseVisualStyleBackColor = true;
			this->btn_Article_Afficher->Click += gcnew System::EventHandler(this, &MyFormVueGestionArticle::btn_Article_Afficher_Click);
			// 
			// txtbox_Article_Reference
			// 
			this->txtbox_Article_Reference->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Article_Reference->Location = System::Drawing::Point(338, 341);
			this->txtbox_Article_Reference->Name = L"txtbox_Article_Reference";
			this->txtbox_Article_Reference->ReadOnly = true;
			this->txtbox_Article_Reference->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_Reference->TabIndex = 5;
			// 
			// txtbox_Article_Nom
			// 
			this->txtbox_Article_Nom->Location = System::Drawing::Point(348, 49);
			this->txtbox_Article_Nom->Name = L"txtbox_Article_Nom";
			this->txtbox_Article_Nom->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_Nom->TabIndex = 7;
			// 
			// txtbox_Article_Quantite
			// 
			this->txtbox_Article_Quantite->Location = System::Drawing::Point(347, 82);
			this->txtbox_Article_Quantite->Name = L"txtbox_Article_Quantite";
			this->txtbox_Article_Quantite->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_Quantite->TabIndex = 9;
			// 
			// lbl_Article_Reference
			// 
			this->lbl_Article_Reference->AutoSize = true;
			this->lbl_Article_Reference->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Article_Reference->Location = System::Drawing::Point(443, 345);
			this->lbl_Article_Reference->Name = L"lbl_Article_Reference";
			this->lbl_Article_Reference->Size = System::Drawing::Size(57, 13);
			this->lbl_Article_Reference->TabIndex = 12;
			this->lbl_Article_Reference->Text = L"Référence";
			// 
			// lbl_Article_Nom
			// 
			this->lbl_Article_Nom->AutoSize = true;
			this->lbl_Article_Nom->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Article_Nom->Location = System::Drawing::Point(454, 52);
			this->lbl_Article_Nom->Name = L"lbl_Article_Nom";
			this->lbl_Article_Nom->Size = System::Drawing::Size(29, 13);
			this->lbl_Article_Nom->TabIndex = 14;
			this->lbl_Article_Nom->Text = L"Nom";
			// 
			// lbl_Article_Quantite
			// 
			this->lbl_Article_Quantite->AutoSize = true;
			this->lbl_Article_Quantite->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Article_Quantite->Location = System::Drawing::Point(455, 85);
			this->lbl_Article_Quantite->Name = L"lbl_Article_Quantite";
			this->lbl_Article_Quantite->Size = System::Drawing::Size(47, 13);
			this->lbl_Article_Quantite->TabIndex = 16;
			this->lbl_Article_Quantite->Text = L"Quantité";
			// 
			// txtbox_Article_Message
			// 
			this->txtbox_Article_Message->BackColor = System::Drawing::Color::Silver;
			this->txtbox_Article_Message->Location = System::Drawing::Point(12, 223);
			this->txtbox_Article_Message->Multiline = true;
			this->txtbox_Article_Message->Name = L"txtbox_Article_Message";
			this->txtbox_Article_Message->ReadOnly = true;
			this->txtbox_Article_Message->Size = System::Drawing::Size(319, 37);
			this->txtbox_Article_Message->TabIndex = 19;
			// 
			// lbl_Article_PrixHT
			// 
			this->lbl_Article_PrixHT->AutoSize = true;
			this->lbl_Article_PrixHT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Article_PrixHT->Location = System::Drawing::Point(454, 206);
			this->lbl_Article_PrixHT->Name = L"lbl_Article_PrixHT";
			this->lbl_Article_PrixHT->Size = System::Drawing::Size(42, 13);
			this->lbl_Article_PrixHT->TabIndex = 28;
			this->lbl_Article_PrixHT->Text = L"Prix HT";
			// 
			// txtbox_Article_PrixHT
			// 
			this->txtbox_Article_PrixHT->BackColor = System::Drawing::Color::White;
			this->txtbox_Article_PrixHT->Location = System::Drawing::Point(348, 203);
			this->txtbox_Article_PrixHT->Name = L"txtbox_Article_PrixHT";
			this->txtbox_Article_PrixHT->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_PrixHT->TabIndex = 27;
			// 
			// lbl_Article_PrixTTC
			// 
			this->lbl_Article_PrixTTC->AutoSize = true;
			this->lbl_Article_PrixTTC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Article_PrixTTC->Location = System::Drawing::Point(448, 322);
			this->lbl_Article_PrixTTC->Name = L"lbl_Article_PrixTTC";
			this->lbl_Article_PrixTTC->Size = System::Drawing::Size(48, 13);
			this->lbl_Article_PrixTTC->TabIndex = 30;
			this->lbl_Article_PrixTTC->Text = L"Prix TTC";
			// 
			// txtbox_Article_PrixTTC
			// 
			this->txtbox_Article_PrixTTC->BackColor = System::Drawing::Color::White;
			this->txtbox_Article_PrixTTC->Location = System::Drawing::Point(338, 315);
			this->txtbox_Article_PrixTTC->Name = L"txtbox_Article_PrixTTC";
			this->txtbox_Article_PrixTTC->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_PrixTTC->TabIndex = 29;
			// 
			// txtbox_Article_MargeCommercial
			// 
			this->txtbox_Article_MargeCommercial->Location = System::Drawing::Point(347, 142);
			this->txtbox_Article_MargeCommercial->Name = L"txtbox_Article_MargeCommercial";
			this->txtbox_Article_MargeCommercial->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_MargeCommercial->TabIndex = 31;
			// 
			// txtbox_Article_TVA
			// 
			this->txtbox_Article_TVA->Location = System::Drawing::Point(348, 171);
			this->txtbox_Article_TVA->Name = L"txtbox_Article_TVA";
			this->txtbox_Article_TVA->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_TVA->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(455, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"TVA";
			// 
			// txtbox_Article_SeuilReapro
			// 
			this->txtbox_Article_SeuilReapro->Location = System::Drawing::Point(348, 112);
			this->txtbox_Article_SeuilReapro->Name = L"txtbox_Article_SeuilReapro";
			this->txtbox_Article_SeuilReapro->Size = System::Drawing::Size(100, 20);
			this->txtbox_Article_SeuilReapro->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(455, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Marge Commercial";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(455, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Seuil Réapro";
			// 
			// MyFormVueGestionArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(551, 269);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbox_Article_SeuilReapro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbox_Article_TVA);
			this->Controls->Add(this->txtbox_Article_MargeCommercial);
			this->Controls->Add(this->lbl_Article_PrixTTC);
			this->Controls->Add(this->txtbox_Article_PrixTTC);
			this->Controls->Add(this->lbl_Article_PrixHT);
			this->Controls->Add(this->txtbox_Article_PrixHT);
			this->Controls->Add(this->txtbox_Article_Message);
			this->Controls->Add(this->lbl_Article_Quantite);
			this->Controls->Add(this->lbl_Article_Nom);
			this->Controls->Add(this->lbl_Article_Reference);
			this->Controls->Add(this->txtbox_Article_Quantite);
			this->Controls->Add(this->txtbox_Article_Nom);
			this->Controls->Add(this->txtbox_Article_Reference);
			this->Controls->Add(this->btn_Article_Afficher);
			this->Controls->Add(this->btn_Article_Supprimer);
			this->Controls->Add(this->btn_Article_Modifier);
			this->Controls->Add(this->btn_Article_Creer);
			this->Controls->Add(this->dataGridView_Article);
			this->Name = L"MyFormVueGestionArticle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Article";
			this->Load += gcnew System::EventHandler(this, &MyFormVueGestionArticle::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Article))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ds = gcnew Data::DataSet();
		this->oSvc = gcnew NS_Comp_Svc_article::CL_svc_article;
	}
	private: System::Void btn_Article_Creer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->ajouterArticle(this->txtbox_Article_Nom->Text, Convert::ToInt32(this->txtbox_Article_Quantite->Text), Convert::ToInt32(this->txtbox_Article_SeuilReapro->Text), Convert::ToInt32(this->txtbox_Article_MargeCommercial->Text), Convert::ToInt32(this->txtbox_Article_PrixHT->Text), Convert::ToInt32(this->txtbox_Article_TVA->Text));
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Article_Message->Text = "Création réussite !";
		}
	}
	private: System::Void btn_Article_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->modifierArticle(this->txtbox_Article_Nom->Text, Convert::ToInt32(this->txtbox_Article_Quantite->Text), Convert::ToInt32(this->txtbox_Article_SeuilReapro->Text), Convert::ToInt32(this->txtbox_Article_MargeCommercial->Text), Convert::ToInt32(this->txtbox_Article_PrixHT->Text), Convert::ToInt32(this->txtbox_Article_TVA->Text));
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Article_Message->Text = "Modification réussite !";
		}
	}
	private: System::Void btn_Article_Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ erreur;
		erreur = this->oSvc->supprimerArticle(this->txtbox_Article_Nom->Text);
		if (erreur != "") {
			MessageBox::Show(erreur);
		}
		else {
			this->txtbox_Article_Message->Text = "Supprimer réussite !";
		}
	}
	private: System::Void btn_Article_Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Nom;
		Nom = this->txtbox_Article_Nom->Text;
		if (Nom != "") {
			this->dataGridView_Article->Refresh();
			this->oDs = this->oSvc->afficherUNArticle("AP1", Nom);
			this->dataGridView_Article->DataSource = this->oDs;
			this->dataGridView_Article->DataMember = "AP1";
		}
		else {
			this->dataGridView_Article->Refresh();
			this->oDs = this->oSvc->afficherArticle("AP2");
			this->dataGridView_Article->DataSource = this->oDs;
			this->dataGridView_Article->DataMember = "AP2";
		}
	}
};
}