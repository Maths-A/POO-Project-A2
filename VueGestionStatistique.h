#pragma once
#include "Svc_Gestion_Statistique.h"

namespace VueGestionStat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormVuegestionStat : public System::Windows::Forms::Form
	{
	public:
		MyFormVuegestionStat(void)
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
		~MyFormVuegestionStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView_Stat;
	private: System::Windows::Forms::Button^ btn_Stat_PanierMoy;
	protected:

	private: CL_svc_statistique^ oSvc;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oIs;
	private: CL_svc_statistique^ processusPersonnes;
	private: Data::DataSet^ ds;
	private: String^ id;
	private: System::Windows::Forms::TextBox^ txtbox_Stat_Remise;
	private: System::Windows::Forms::TextBox^ txtbox_Stat_Demarque;



	private: System::Windows::Forms::Label^ lbl_Stat_Remise;


	private: System::Windows::Forms::Label^ lbl_Stat_marge;
	private: System::Windows::Forms::Label^ lbl_Stat_demarque;


	private: System::Windows::Forms::Label^ lbl_Stat_TVA;
	private: System::Windows::Forms::TextBox^ txtbox_Stat_TVA;


	private: System::Windows::Forms::TextBox^ txtbox_Stat_Marge;

	private: System::Windows::Forms::Button^ btn_Stat_ChiffreAffaire;
	private: System::Windows::Forms::Button^ btn_Stat_seuilReappro;
	private: System::Windows::Forms::Button^ btn_Stat_MontantTotalAchat;
	private: System::Windows::Forms::Button^ btn_Stat_Plusvendu;
	private: System::Windows::Forms::Button^ btn_Stat_moinsVendu;
	private: System::Windows::Forms::Button^ btn_Stat_ValeurCommercialStock;
	private: System::Windows::Forms::Button^ btn_Stat_ValeurAchatStock;
	private: System::Windows::Forms::Button^ btn_Stat_Simulation;
	private: System::Windows::Forms::TextBox^ txtbox_Stat_Mois;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtbox_Stat_Pseudo;

	private: System::Windows::Forms::Label^ label2;





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
			this->dataGridView_Stat = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Stat_PanierMoy = (gcnew System::Windows::Forms::Button());
			this->txtbox_Stat_Remise = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Stat_Demarque = (gcnew System::Windows::Forms::TextBox());
			this->lbl_Stat_Remise = (gcnew System::Windows::Forms::Label());
			this->lbl_Stat_marge = (gcnew System::Windows::Forms::Label());
			this->lbl_Stat_demarque = (gcnew System::Windows::Forms::Label());
			this->lbl_Stat_TVA = (gcnew System::Windows::Forms::Label());
			this->txtbox_Stat_TVA = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Stat_Marge = (gcnew System::Windows::Forms::TextBox());
			this->btn_Stat_ChiffreAffaire = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_seuilReappro = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_MontantTotalAchat = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_Plusvendu = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_moinsVendu = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_ValeurCommercialStock = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_ValeurAchatStock = (gcnew System::Windows::Forms::Button());
			this->btn_Stat_Simulation = (gcnew System::Windows::Forms::Button());
			this->txtbox_Stat_Mois = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtbox_Stat_Pseudo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Stat))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_Stat
			// 
			this->dataGridView_Stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Stat->Location = System::Drawing::Point(12, 12);
			this->dataGridView_Stat->Name = L"dataGridView_Stat";
			this->dataGridView_Stat->RowHeadersWidth = 51;
			this->dataGridView_Stat->Size = System::Drawing::Size(318, 176);
			this->dataGridView_Stat->TabIndex = 0;
			// 
			// btn_Stat_PanierMoy
			// 
			this->btn_Stat_PanierMoy->Location = System::Drawing::Point(350, 12);
			this->btn_Stat_PanierMoy->Name = L"btn_Stat_PanierMoy";
			this->btn_Stat_PanierMoy->Size = System::Drawing::Size(68, 73);
			this->btn_Stat_PanierMoy->TabIndex = 4;
			this->btn_Stat_PanierMoy->Text = L"Panier Moyen";
			this->btn_Stat_PanierMoy->UseVisualStyleBackColor = true;
			this->btn_Stat_PanierMoy->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_PanierMoy_Click);
			// 
			// txtbox_Stat_Remise
			// 
			this->txtbox_Stat_Remise->Location = System::Drawing::Point(170, 240);
			this->txtbox_Stat_Remise->Name = L"txtbox_Stat_Remise";
			this->txtbox_Stat_Remise->Size = System::Drawing::Size(100, 20);
			this->txtbox_Stat_Remise->TabIndex = 7;
			// 
			// txtbox_Stat_Demarque
			// 
			this->txtbox_Stat_Demarque->Location = System::Drawing::Point(170, 201);
			this->txtbox_Stat_Demarque->Name = L"txtbox_Stat_Demarque";
			this->txtbox_Stat_Demarque->Size = System::Drawing::Size(100, 20);
			this->txtbox_Stat_Demarque->TabIndex = 9;
			// 
			// lbl_Stat_Remise
			// 
			this->lbl_Stat_Remise->AutoSize = true;
			this->lbl_Stat_Remise->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Stat_Remise->Location = System::Drawing::Point(274, 243);
			this->lbl_Stat_Remise->Name = L"lbl_Stat_Remise";
			this->lbl_Stat_Remise->Size = System::Drawing::Size(53, 13);
			this->lbl_Stat_Remise->TabIndex = 14;
			this->lbl_Stat_Remise->Text = L"% Remise";
			// 
			// lbl_Stat_marge
			// 
			this->lbl_Stat_marge->AutoSize = true;
			this->lbl_Stat_marge->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Stat_marge->Location = System::Drawing::Point(116, 243);
			this->lbl_Stat_marge->Name = L"lbl_Stat_marge";
			this->lbl_Stat_marge->Size = System::Drawing::Size(48, 13);
			this->lbl_Stat_marge->TabIndex = 16;
			this->lbl_Stat_marge->Text = L"% Marge";
			// 
			// lbl_Stat_demarque
			// 
			this->lbl_Stat_demarque->AutoSize = true;
			this->lbl_Stat_demarque->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Stat_demarque->Location = System::Drawing::Point(274, 203);
			this->lbl_Stat_demarque->Name = L"lbl_Stat_demarque";
			this->lbl_Stat_demarque->Size = System::Drawing::Size(67, 13);
			this->lbl_Stat_demarque->TabIndex = 28;
			this->lbl_Stat_demarque->Text = L"% Démarque";
			// 
			// lbl_Stat_TVA
			// 
			this->lbl_Stat_TVA->AutoSize = true;
			this->lbl_Stat_TVA->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Stat_TVA->Location = System::Drawing::Point(117, 203);
			this->lbl_Stat_TVA->Name = L"lbl_Stat_TVA";
			this->lbl_Stat_TVA->Size = System::Drawing::Size(28, 13);
			this->lbl_Stat_TVA->TabIndex = 30;
			this->lbl_Stat_TVA->Text = L"TVA";
			// 
			// txtbox_Stat_TVA
			// 
			this->txtbox_Stat_TVA->BackColor = System::Drawing::Color::White;
			this->txtbox_Stat_TVA->Location = System::Drawing::Point(12, 199);
			this->txtbox_Stat_TVA->Name = L"txtbox_Stat_TVA";
			this->txtbox_Stat_TVA->Size = System::Drawing::Size(100, 20);
			this->txtbox_Stat_TVA->TabIndex = 29;
			// 
			// txtbox_Stat_Marge
			// 
			this->txtbox_Stat_Marge->BackColor = System::Drawing::Color::White;
			this->txtbox_Stat_Marge->Location = System::Drawing::Point(12, 240);
			this->txtbox_Stat_Marge->Name = L"txtbox_Stat_Marge";
			this->txtbox_Stat_Marge->Size = System::Drawing::Size(100, 20);
			this->txtbox_Stat_Marge->TabIndex = 27;
			// 
			// btn_Stat_ChiffreAffaire
			// 
			this->btn_Stat_ChiffreAffaire->Location = System::Drawing::Point(424, 12);
			this->btn_Stat_ChiffreAffaire->Name = L"btn_Stat_ChiffreAffaire";
			this->btn_Stat_ChiffreAffaire->Size = System::Drawing::Size(68, 73);
			this->btn_Stat_ChiffreAffaire->TabIndex = 31;
			this->btn_Stat_ChiffreAffaire->Text = L"Chiffre d\'affaire (mois)";
			this->btn_Stat_ChiffreAffaire->UseVisualStyleBackColor = true;
			this->btn_Stat_ChiffreAffaire->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_ChiffreAffaire_Click);
			// 
			// btn_Stat_seuilReappro
			// 
			this->btn_Stat_seuilReappro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F));
			this->btn_Stat_seuilReappro->Location = System::Drawing::Point(498, 12);
			this->btn_Stat_seuilReappro->Name = L"btn_Stat_seuilReappro";
			this->btn_Stat_seuilReappro->Size = System::Drawing::Size(116, 73);
			this->btn_Stat_seuilReappro->TabIndex = 32;
			this->btn_Stat_seuilReappro->Text = L"Seuil Réapprovisionnement";
			this->btn_Stat_seuilReappro->UseVisualStyleBackColor = true;
			this->btn_Stat_seuilReappro->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_seuilReappro_Click);
			// 
			// btn_Stat_MontantTotalAchat
			// 
			this->btn_Stat_MontantTotalAchat->Location = System::Drawing::Point(350, 92);
			this->btn_Stat_MontantTotalAchat->Name = L"btn_Stat_MontantTotalAchat";
			this->btn_Stat_MontantTotalAchat->Size = System::Drawing::Size(87, 73);
			this->btn_Stat_MontantTotalAchat->TabIndex = 33;
			this->btn_Stat_MontantTotalAchat->Text = L"Montant total Achat";
			this->btn_Stat_MontantTotalAchat->UseVisualStyleBackColor = true;
			this->btn_Stat_MontantTotalAchat->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_MontantTotalAchat_Click);
			// 
			// btn_Stat_Plusvendu
			// 
			this->btn_Stat_Plusvendu->Location = System::Drawing::Point(443, 92);
			this->btn_Stat_Plusvendu->Name = L"btn_Stat_Plusvendu";
			this->btn_Stat_Plusvendu->Size = System::Drawing::Size(79, 73);
			this->btn_Stat_Plusvendu->TabIndex = 34;
			this->btn_Stat_Plusvendu->Text = L"Articles les plus vendus";
			this->btn_Stat_Plusvendu->UseVisualStyleBackColor = true;
			this->btn_Stat_Plusvendu->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_Plusvendu_Click);
			// 
			// btn_Stat_moinsVendu
			// 
			this->btn_Stat_moinsVendu->Location = System::Drawing::Point(528, 92);
			this->btn_Stat_moinsVendu->Name = L"btn_Stat_moinsVendu";
			this->btn_Stat_moinsVendu->Size = System::Drawing::Size(86, 73);
			this->btn_Stat_moinsVendu->TabIndex = 35;
			this->btn_Stat_moinsVendu->Text = L"Articles les moins vendus";
			this->btn_Stat_moinsVendu->UseVisualStyleBackColor = true;
			this->btn_Stat_moinsVendu->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_moinsVendu_Click);
			// 
			// btn_Stat_ValeurCommercialStock
			// 
			this->btn_Stat_ValeurCommercialStock->Location = System::Drawing::Point(350, 171);
			this->btn_Stat_ValeurCommercialStock->Name = L"btn_Stat_ValeurCommercialStock";
			this->btn_Stat_ValeurCommercialStock->Size = System::Drawing::Size(87, 73);
			this->btn_Stat_ValeurCommercialStock->TabIndex = 36;
			this->btn_Stat_ValeurCommercialStock->Text = L"Valeur Commercial Stock";
			this->btn_Stat_ValeurCommercialStock->UseVisualStyleBackColor = true;
			this->btn_Stat_ValeurCommercialStock->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_ValeurCommercialStock_Click);
			// 
			// btn_Stat_ValeurAchatStock
			// 
			this->btn_Stat_ValeurAchatStock->Location = System::Drawing::Point(443, 171);
			this->btn_Stat_ValeurAchatStock->Name = L"btn_Stat_ValeurAchatStock";
			this->btn_Stat_ValeurAchatStock->Size = System::Drawing::Size(79, 73);
			this->btn_Stat_ValeurAchatStock->TabIndex = 37;
			this->btn_Stat_ValeurAchatStock->Text = L"Valeur Achat Stock";
			this->btn_Stat_ValeurAchatStock->UseVisualStyleBackColor = true;
			this->btn_Stat_ValeurAchatStock->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_ValeurAchatStock_Click);
			// 
			// btn_Stat_Simulation
			// 
			this->btn_Stat_Simulation->Location = System::Drawing::Point(528, 171);
			this->btn_Stat_Simulation->Name = L"btn_Stat_Simulation";
			this->btn_Stat_Simulation->Size = System::Drawing::Size(86, 73);
			this->btn_Stat_Simulation->TabIndex = 38;
			this->btn_Stat_Simulation->Text = L"Simulation Variation Commercial";
			this->btn_Stat_Simulation->UseVisualStyleBackColor = true;
			this->btn_Stat_Simulation->Click += gcnew System::EventHandler(this, &MyFormVuegestionStat::btn_Stat_Simulation_Click);
			// 
			// txtbox_Stat_Mois
			// 
			this->txtbox_Stat_Mois->BackColor = System::Drawing::Color::White;
			this->txtbox_Stat_Mois->Location = System::Drawing::Point(382, 250);
			this->txtbox_Stat_Mois->Name = L"txtbox_Stat_Mois";
			this->txtbox_Stat_Mois->Size = System::Drawing::Size(36, 20);
			this->txtbox_Stat_Mois->TabIndex = 39;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(347, 253);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Mois";
			// 
			// txtbox_Stat_Pseudo
			// 
			this->txtbox_Stat_Pseudo->BackColor = System::Drawing::Color::White;
			this->txtbox_Stat_Pseudo->Location = System::Drawing::Point(528, 250);
			this->txtbox_Stat_Pseudo->Name = L"txtbox_Stat_Pseudo";
			this->txtbox_Stat_Pseudo->Size = System::Drawing::Size(85, 20);
			this->txtbox_Stat_Pseudo->TabIndex = 41;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(479, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Pseudo";
			// 
			// MyFormVuegestionStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(625, 278);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbox_Stat_Pseudo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbox_Stat_Mois);
			this->Controls->Add(this->btn_Stat_Simulation);
			this->Controls->Add(this->btn_Stat_ValeurAchatStock);
			this->Controls->Add(this->btn_Stat_ValeurCommercialStock);
			this->Controls->Add(this->btn_Stat_moinsVendu);
			this->Controls->Add(this->btn_Stat_Plusvendu);
			this->Controls->Add(this->btn_Stat_MontantTotalAchat);
			this->Controls->Add(this->btn_Stat_seuilReappro);
			this->Controls->Add(this->btn_Stat_ChiffreAffaire);
			this->Controls->Add(this->lbl_Stat_TVA);
			this->Controls->Add(this->txtbox_Stat_TVA);
			this->Controls->Add(this->lbl_Stat_demarque);
			this->Controls->Add(this->txtbox_Stat_Marge);
			this->Controls->Add(this->lbl_Stat_marge);
			this->Controls->Add(this->lbl_Stat_Remise);
			this->Controls->Add(this->txtbox_Stat_Demarque);
			this->Controls->Add(this->txtbox_Stat_Remise);
			this->Controls->Add(this->btn_Stat_PanierMoy);
			this->Controls->Add(this->dataGridView_Stat);
			this->Name = L"MyFormVuegestionStat";
			this->Text = L"Gestion Statistique";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyFormVuegestionStat::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Stat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ds = gcnew Data::DataSet();
		this->oSvc = gcnew CL_svc_statistique;
	}
	private: System::Void btn_Stat_PanierMoy_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherCalculerPanierMoyenAvecRemise("AP1");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP1";
	}
	private: System::Void btn_Stat_ChiffreAffaire_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherCalculerChiffreAffaireMois("AP2", this->txtbox_Stat_Mois->Text);
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP2";
	}
	private: System::Void btn_Stat_seuilReappro_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherProduitSousSeuilReapro("AP5");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP5";
	}
	private: System::Void btn_Stat_MontantTotalAchat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherCalculerMontantTotalAchatClient("AP3", this->txtbox_Stat_Pseudo->Text);
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP3";
	}
	private: System::Void btn_Stat_Plusvendu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficher10ArticlesPlusVendus("AP4");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP4";
	}
	private: System::Void btn_Stat_moinsVendu_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficher10ArticlesMoinsVendus("AP6");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP6";
	}
	private: System::Void btn_Stat_ValeurCommercialStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherValeurCommercialeStock("AP7");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP7";
	}
	private: System::Void btn_Stat_ValeurAchatStock_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherValeurAchatStock("AP8");
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP8";
	}
	private: System::Void btn_Stat_Simulation_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView_Stat->Refresh();
		this->oDs = this->oSvc->afficherSimulerValeurCommercial("AP9", Convert::ToInt32(this->txtbox_Stat_TVA->Text), Convert::ToInt32(this->txtbox_Stat_Marge->Text), Convert::ToInt32(this->txtbox_Stat_Remise->Text), Convert::ToInt32(this->txtbox_Stat_Demarque->Text));
		this->dataGridView_Stat->DataSource = this->oDs;
		this->dataGridView_Stat->DataMember = "AP9";
	}
};
}