#pragma once
#include "VueGestionPersonnel.h"
#include "VueGestionClient.h"
#include "VueGestionArticle1.h"
#include "VueGestionStatistique.h"
#include "VueGestionCommande.h"

namespace VuePrincipal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_Personnel;
	private: System::Windows::Forms::Button^ btn_Client;
	private: System::Windows::Forms::Button^ btn_Commande;
	private: System::Windows::Forms::Button^ btn_Article;
	private: System::Windows::Forms::Button^ btn_Stat;


	private: VueGestionPersonnel::MyFormVueGestionPersonnel^ oVueGestionPersonnel;
	private: VueGestionClient::MyFormVueGestionClient^ oVueGestionClient;
	private: VueGestionArticle::MyFormVueGestionArticle^ oVueGestionArticle;
	private: VueGestionStat::MyFormVuegestionStat^ oVueGestionStat;
	private: VueGestionCommande::MyFormVueGestionCommande^ oVueGestionCommande;
	private: System::Windows::Forms::Label^ label1;


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
			this->btn_Personnel = (gcnew System::Windows::Forms::Button());
			this->btn_Client = (gcnew System::Windows::Forms::Button());
			this->btn_Commande = (gcnew System::Windows::Forms::Button());
			this->btn_Article = (gcnew System::Windows::Forms::Button());
			this->btn_Stat = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_Personnel
			// 
			this->btn_Personnel->Location = System::Drawing::Point(8, 74);
			this->btn_Personnel->Margin = System::Windows::Forms::Padding(2);
			this->btn_Personnel->Name = L"btn_Personnel";
			this->btn_Personnel->Size = System::Drawing::Size(106, 54);
			this->btn_Personnel->TabIndex = 0;
			this->btn_Personnel->Text = L"Gestion Personnel";
			this->btn_Personnel->UseVisualStyleBackColor = true;
			this->btn_Personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_Personnel_Click);
			// 
			// btn_Client
			// 
			this->btn_Client->Location = System::Drawing::Point(136, 74);
			this->btn_Client->Margin = System::Windows::Forms::Padding(2);
			this->btn_Client->Name = L"btn_Client";
			this->btn_Client->Size = System::Drawing::Size(106, 54);
			this->btn_Client->TabIndex = 1;
			this->btn_Client->Text = L"Gestion Client";
			this->btn_Client->UseVisualStyleBackColor = true;
			this->btn_Client->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// btn_Commande
			// 
			this->btn_Commande->Location = System::Drawing::Point(262, 74);
			this->btn_Commande->Margin = System::Windows::Forms::Padding(2);
			this->btn_Commande->Name = L"btn_Commande";
			this->btn_Commande->Size = System::Drawing::Size(106, 54);
			this->btn_Commande->TabIndex = 2;
			this->btn_Commande->Text = L"Gestion Commande";
			this->btn_Commande->UseVisualStyleBackColor = true;
			this->btn_Commande->Click += gcnew System::EventHandler(this, &MyForm::btn_Commande_Click);
			// 
			// btn_Article
			// 
			this->btn_Article->Location = System::Drawing::Point(71, 152);
			this->btn_Article->Margin = System::Windows::Forms::Padding(2);
			this->btn_Article->Name = L"btn_Article";
			this->btn_Article->Size = System::Drawing::Size(106, 54);
			this->btn_Article->TabIndex = 3;
			this->btn_Article->Text = L"Gestion Article";
			this->btn_Article->UseVisualStyleBackColor = true;
			this->btn_Article->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btn_Stat
			// 
			this->btn_Stat->Location = System::Drawing::Point(199, 152);
			this->btn_Stat->Margin = System::Windows::Forms::Padding(2);
			this->btn_Stat->Name = L"btn_Stat";
			this->btn_Stat->Size = System::Drawing::Size(106, 54);
			this->btn_Stat->TabIndex = 4;
			this->btn_Stat->Text = L"Gestion Statistique";
			this->btn_Stat->UseVisualStyleBackColor = true;
			this->btn_Stat->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::Gold;
			this->label1->Location = System::Drawing::Point(30, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Bienvenue chez xMiaouD";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->ClientSize = System::Drawing::Size(376, 217);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Stat);
			this->Controls->Add(this->btn_Article);
			this->Controls->Add(this->btn_Commande);
			this->Controls->Add(this->btn_Client);
			this->Controls->Add(this->btn_Personnel);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vue Principale";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		oVueGestionClient = gcnew VueGestionClient::MyFormVueGestionClient;
		oVueGestionClient->Show();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		oVueGestionArticle = gcnew VueGestionArticle::MyFormVueGestionArticle;
		oVueGestionArticle->Show();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		oVueGestionStat = gcnew VueGestionStat::MyFormVuegestionStat;
		oVueGestionStat->Show();
	}
	private: System::Void btn_Personnel_Click(System::Object^ sender, System::EventArgs^ e) {
		oVueGestionPersonnel = gcnew VueGestionPersonnel::MyFormVueGestionPersonnel;
		oVueGestionPersonnel->Show();
	}
	private: System::Void btn_Commande_Click(System::Object^ sender, System::EventArgs^ e) {
		oVueGestionCommande = gcnew VueGestionCommande::MyFormVueGestionCommande;
		oVueGestionCommande->Show();
	}
};
}
