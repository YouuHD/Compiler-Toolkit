
#pragma once

#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<stdlib.h>
#include<stack>
#include<thread>

#include "Mal.h"
#include "SuperMal.h"
#include "Bien.h"
#include "SuperBien.h"
#include "Imagen.h"
#include "Acerca.h"
#include "MyForm.h"
#include "Abrir.h"
#include "Header1.h"
#include "Header2.h"


#define STRING(num) #num

using namespace std;
//Variables globales
using std::vector;

char car;

vector<char> cad0;
vector<string> toks;
vector<string>tipotok;
string nomArchivo;
Boolean abrir, guardar, analizarst;
vector<string> arreglo;
string direcciónArchivo;
string stoken;
int i = 0;
Boolean siono;

//PILAS
//Pila Declaración
stack <string> pila_elementos;
stack <string> pila_tipos_elementos;
//Pila asignación
stack <string> pila_tipos;
stack <string> pila_operadores;

stack <string> pila_operandos;
stack <string> pila_elem;
stack <int> pila_saltos;


string col[48][48] = {
        {"1000","lib"},
        {"1001","id"},
        {"1002",";"},
        {"1003","class"},
        {"1004","{"},
        {"1005","}"},
        {"1006","if"},
        {"1007","while"},
        {"1008","do"},
        {"1009","input"},
        {"1010","output"},
        {"1011","loop"},
        {"1012","def"},
        {"1013","break"},
        {"1014","else"},
        {"1015","eval"},
        {"1016","of"},
        {"1017",","},
        {"1018","int"},
        {"1019","float"},
        {"1020","char"},
        {"1021","bool"},
        {"1022","string"},
        {"1023","["},
        {"1024","]"},
        {"1025","="},
        {"1026","*"},
        {"1027","/"},
        {"1028","%"},
        {"1029","+"},
        {"1030","-"},
        {"1031","=="},
        {"1032","!="},
        {"1033","<"},
        {"1034","<="},
        {"1035",">"},
        {"1036",">="},
        {"1037","cteentera"},
        {"1038","ctereal"},
        {"1039","ctenotacion"},
        {"1040","ctecaracter"},
        {"1041","ctestring"},
        {"1042","("},
        {"1043",")"},
        {"1044","!"},
        {"1045","&&"},
        {"1046","||"},
        {"1047","\0"}
        };



namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used
            
            
        }



    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

        //Declaración de componentes
    private: System::Windows::Forms::Panel^ panel1;
    protected:
    private: System::Windows::Forms::MenuStrip^ menuStrip1;

    private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
    private: System::Windows::Forms::RichTextBox^ txtError;
    private: System::Windows::Forms::RichTextBox^ txtToken;

    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ txtNombre;


    private: System::Windows::Forms::Button^ btnLimpiar;
    private: System::Windows::Forms::Button^ btnAnalizar;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ btnCerrar;
    private: System::Windows::Forms::Button^ btnGuardar;
    private: System::Windows::Forms::Button^ btnAbrir;
    private: System::Windows::Forms::Label^ label3;


           //Declaración de componentes para componentes de abrir y crear
    private: System::Windows::Forms::Button^ btnAceptarR;
    private: System::Windows::Forms::Button^ btnCancelarR;
    private: System::Windows::Forms::Label^ lbIntro;
    private: System::Windows::Forms::Label^ lbruta;
    private: System::Windows::Forms::Label^ lbnom;
    private: System::Windows::Forms::TextBox^ txtRuteishon;
    private: System::Windows::Forms::TextBox^ txtNomArchivo;
    private: System::Windows::Forms::Panel^ panelR;

    private: System::Windows::Forms::Button^ btnCrearR2;
    private: System::Windows::Forms::Button^ btnCancelarR2;
    private: System::Windows::Forms::Button^ btnCrear;
    private: System::Windows::Forms::Label^ lbIntro2;
    private: System::Windows::Forms::Label^ lbruta2;
    private: System::Windows::Forms::Label^ lbnom2;
    private: System::Windows::Forms::TextBox^ txtRuteishon2;
    private: System::Windows::Forms::TextBox^ txtNomArchivo2;
    private: System::Windows::Forms::Panel^ panelR2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ cerrarToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarComoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ abrirToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mnNuevo;
    private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ abrirToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarComoToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem1;
    private: System::Windows::Forms::RichTextBox^ txtElementos;
    private: System::Windows::Forms::RichTextBox^ txtPila;

    private: System::Windows::Forms::RichTextBox^ txtAS;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label10;


    private: System::Windows::Forms::RichTextBox^ txtDoc;
    private: System::Windows::Forms::Panel^ pnlCont;
    private: System::Windows::Forms::ToolStripMenuItem^ ediciónToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ fuenteToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;



    private:










    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        /// 
  //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- 
        //METODOS DE INTERFAZ
        // 
        //Método para inicializar los componentes y mostrar interfaz principal
        void InitializeComponent(void)
        {
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->txtDoc = (gcnew System::Windows::Forms::RichTextBox());
            this->txtAS = (gcnew System::Windows::Forms::RichTextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->txtPila = (gcnew System::Windows::Forms::RichTextBox());
            this->txtElementos = (gcnew System::Windows::Forms::RichTextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txtError = (gcnew System::Windows::Forms::RichTextBox());
            this->txtToken = (gcnew System::Windows::Forms::RichTextBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txtNombre = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnLimpiar = (gcnew System::Windows::Forms::Button());
            this->btnAnalizar = (gcnew System::Windows::Forms::Button());
            this->btnCerrar = (gcnew System::Windows::Forms::Button());
            this->btnGuardar = (gcnew System::Windows::Forms::Button());
            this->btnAbrir = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->abrirToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->guardarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->guardarComoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->salirToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ediciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->fuenteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->pnlCont = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->guardarComoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mnNuevo = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->panel2->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel1
            // 
            this->panel1->AllowDrop = true;
            this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
            this->panel1->Controls->Add(this->txtDoc);
            this->panel1->Controls->Add(this->txtAS);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->txtPila);
            this->panel1->Controls->Add(this->txtElementos);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->txtError);
            this->panel1->Controls->Add(this->txtToken);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Location = System::Drawing::Point(281, 27);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(1006, 624);
            this->panel1->TabIndex = 0;
            // 
            // txtDoc
            // 
            this->txtDoc->AcceptsTab = true;
            this->txtDoc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtDoc->Location = System::Drawing::Point(14, 121);
            this->txtDoc->Name = L"txtDoc";
            this->txtDoc->Size = System::Drawing::Size(397, 488);
            this->txtDoc->TabIndex = 13;
            this->txtDoc->Text = L"";
            this->txtDoc->TextChanged += gcnew System::EventHandler(this, &Form1::txtDoc_TextChanged);
            // 
            // txtAS
            // 
            this->txtAS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->txtAS->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->txtAS->Location = System::Drawing::Point(429, 472);
            this->txtAS->Name = L"txtAS";
            this->txtAS->ReadOnly = true;
            this->txtAS->Size = System::Drawing::Size(556, 137);
            this->txtAS->TabIndex = 12;
            this->txtAS->Text = L"";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label8->Location = System::Drawing::Point(427, 444);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(170, 25);
            this->label8->TabIndex = 11;
            this->label8->Text = L"Analisis Sintáctico";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label7->Location = System::Drawing::Point(760, 268);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(92, 25);
            this->label7->TabIndex = 10;
            this->label7->Text = L"Cadenas";
            // 
            // txtPila
            // 
            this->txtPila->Location = System::Drawing::Point(765, 296);
            this->txtPila->Name = L"txtPila";
            this->txtPila->Size = System::Drawing::Size(220, 145);
            this->txtPila->TabIndex = 9;
            this->txtPila->Text = L"";
            // 
            // txtElementos
            // 
            this->txtElementos->Location = System::Drawing::Point(765, 119);
            this->txtElementos->Name = L"txtElementos";
            this->txtElementos->ReadOnly = true;
            this->txtElementos->Size = System::Drawing::Size(220, 145);
            this->txtElementos->TabIndex = 8;
            this->txtElementos->Text = L"";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
            this->label4->Location = System::Drawing::Point(427, 267);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(75, 25);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Errores";
            // 
            // txtError
            // 
            this->txtError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->txtError->ForeColor = System::Drawing::Color::Red;
            this->txtError->Location = System::Drawing::Point(429, 296);
            this->txtError->Name = L"txtError";
            this->txtError->ReadOnly = true;
            this->txtError->Size = System::Drawing::Size(318, 145);
            this->txtError->TabIndex = 3;
            this->txtError->Text = L"";
            this->txtError->TextChanged += gcnew System::EventHandler(this, &Form1::txtError_TextChanged);
            // 
            // txtToken
            // 
            this->txtToken->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->txtToken->ForeColor = System::Drawing::SystemColors::MenuHighlight;
            this->txtToken->Location = System::Drawing::Point(429, 119);
            this->txtToken->Name = L"txtToken";
            this->txtToken->ReadOnly = true;
            this->txtToken->Size = System::Drawing::Size(318, 145);
            this->txtToken->TabIndex = 2;
            this->txtToken->Text = L"";
            this->txtToken->TextChanged += gcnew System::EventHandler(this, &Form1::txtToken_TextChanged);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Firebrick;
            this->panel2->Controls->Add(this->label10);
            this->panel2->Controls->Add(this->label6);
            this->panel2->Controls->Add(this->label3);
            this->panel2->Controls->Add(this->txtNombre);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1006, 103);
            this->panel2->TabIndex = 0;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label10->Location = System::Drawing::Point(426, 18);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(451, 31);
            this->label10->TabIndex = 6;
            this->label10->Text = L"Profe páseme, le prometo no ejercer";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label6->Location = System::Drawing::Point(760, 57);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(187, 25);
            this->label6->TabIndex = 5;
            this->label6->Text = L"Estados y columnas";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label3->Location = System::Drawing::Point(424, 57);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(78, 25);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Tokens";
            // 
            // txtNombre
            // 
            this->txtNombre->AutoSize = true;
            this->txtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtNombre->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->txtNombre->Location = System::Drawing::Point(9, 57);
            this->txtNombre->Name = L"txtNombre";
            this->txtNombre->Size = System::Drawing::Size(108, 25);
            this->txtNombre->TabIndex = 3;
            this->txtNombre->Text = L"Archivo.lya";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label1->Location = System::Drawing::Point(8, 18);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(249, 31);
            this->label1->TabIndex = 2;
            this->label1->Text = L"Análizador LSSGCI";
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
            // 
            // btnLimpiar
            // 
            this->btnLimpiar->BackColor = System::Drawing::Color::RosyBrown;
            this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnLimpiar->Location = System::Drawing::Point(26, 470);
            this->btnLimpiar->Name = L"btnLimpiar";
            this->btnLimpiar->Size = System::Drawing::Size(225, 52);
            this->btnLimpiar->TabIndex = 1;
            this->btnLimpiar->Text = L"Limpiar";
            this->btnLimpiar->UseVisualStyleBackColor = false;
            this->btnLimpiar->Click += gcnew System::EventHandler(this, &Form1::btnLimpiar_Click);
            // 
            // btnAnalizar
            // 
            this->btnAnalizar->BackColor = System::Drawing::Color::LimeGreen;
            this->btnAnalizar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnAnalizar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->btnAnalizar->Location = System::Drawing::Point(26, 412);
            this->btnAnalizar->Name = L"btnAnalizar";
            this->btnAnalizar->Size = System::Drawing::Size(225, 52);
            this->btnAnalizar->TabIndex = 0;
            this->btnAnalizar->Text = L"Analizar";
            this->btnAnalizar->UseVisualStyleBackColor = false;
            this->btnAnalizar->Click += gcnew System::EventHandler(this, &Form1::btnAnalizar_Click);
            // 
            // btnCerrar
            // 
            this->btnCerrar->BackColor = System::Drawing::Color::Firebrick;
            this->btnCerrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnCerrar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCerrar->Location = System::Drawing::Point(26, 354);
            this->btnCerrar->Name = L"btnCerrar";
            this->btnCerrar->Size = System::Drawing::Size(225, 52);
            this->btnCerrar->TabIndex = 6;
            this->btnCerrar->Text = L"Cerrar";
            this->btnCerrar->UseVisualStyleBackColor = false;
            this->btnCerrar->Click += gcnew System::EventHandler(this, &Form1::btnCerrar_Click);
            // 
            // btnGuardar
            // 
            this->btnGuardar->BackColor = System::Drawing::Color::Firebrick;
            this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnGuardar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnGuardar->Location = System::Drawing::Point(26, 296);
            this->btnGuardar->Name = L"btnGuardar";
            this->btnGuardar->Size = System::Drawing::Size(225, 52);
            this->btnGuardar->TabIndex = 5;
            this->btnGuardar->Text = L"Guardar";
            this->btnGuardar->UseVisualStyleBackColor = false;
            this->btnGuardar->Click += gcnew System::EventHandler(this, &Form1::btnGuardar_Click);
            // 
            // btnAbrir
            // 
            this->btnAbrir->BackColor = System::Drawing::Color::Firebrick;
            this->btnAbrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnAbrir->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnAbrir->Location = System::Drawing::Point(26, 238);
            this->btnAbrir->Name = L"btnAbrir";
            this->btnAbrir->Size = System::Drawing::Size(225, 52);
            this->btnAbrir->TabIndex = 4;
            this->btnAbrir->Text = L"Abrir";
            this->btnAbrir->UseVisualStyleBackColor = false;
            this->btnAbrir->Click += gcnew System::EventHandler(this, &Form1::btnAbrir_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->archivoToolStripMenuItem,
                    this->ediciónToolStripMenuItem, this->acercaDeToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1287, 24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // archivoToolStripMenuItem
            // 
            this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->nuevoToolStripMenuItem,
                    this->abrirToolStripMenuItem1, this->guardarToolStripMenuItem1, this->guardarComoToolStripMenuItem1, this->salirToolStripMenuItem1
            });
            this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
            this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
            this->archivoToolStripMenuItem->Text = L"Archivo";
            this->archivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::archivoToolStripMenuItem_Click);
            // 
            // nuevoToolStripMenuItem
            // 
            this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
            this->nuevoToolStripMenuItem->Size = System::Drawing::Size(150, 22);
            this->nuevoToolStripMenuItem->Text = L"Nuevo";
            this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::nuevoToolStripMenuItem_Click);
            // 
            // abrirToolStripMenuItem1
            // 
            this->abrirToolStripMenuItem1->Name = L"abrirToolStripMenuItem1";
            this->abrirToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
            this->abrirToolStripMenuItem1->Text = L"Abrir";
            this->abrirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::abrirToolStripMenuItem1_Click);
            // 
            // guardarToolStripMenuItem1
            // 
            this->guardarToolStripMenuItem1->Name = L"guardarToolStripMenuItem1";
            this->guardarToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
            this->guardarToolStripMenuItem1->Text = L"Guardar";
            this->guardarToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::guardarToolStripMenuItem1_Click);
            // 
            // guardarComoToolStripMenuItem1
            // 
            this->guardarComoToolStripMenuItem1->Name = L"guardarComoToolStripMenuItem1";
            this->guardarComoToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
            this->guardarComoToolStripMenuItem1->Text = L"Guardar como";
            this->guardarComoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::guardarComoToolStripMenuItem1_Click);
            // 
            // salirToolStripMenuItem1
            // 
            this->salirToolStripMenuItem1->Name = L"salirToolStripMenuItem1";
            this->salirToolStripMenuItem1->Size = System::Drawing::Size(150, 22);
            this->salirToolStripMenuItem1->Text = L"Salir";
            this->salirToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem1_Click);
            // 
            // ediciónToolStripMenuItem
            // 
            this->ediciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->fuenteToolStripMenuItem,
                    this->colorToolStripMenuItem
            });
            this->ediciónToolStripMenuItem->Name = L"ediciónToolStripMenuItem";
            this->ediciónToolStripMenuItem->Size = System::Drawing::Size(58, 20);
            this->ediciónToolStripMenuItem->Text = L"Edición";
            // 
            // fuenteToolStripMenuItem
            // 
            this->fuenteToolStripMenuItem->Name = L"fuenteToolStripMenuItem";
            this->fuenteToolStripMenuItem->Size = System::Drawing::Size(110, 22);
            this->fuenteToolStripMenuItem->Text = L"Fuente";
            this->fuenteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fuenteToolStripMenuItem_Click);
            // 
            // colorToolStripMenuItem
            // 
            this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
            this->colorToolStripMenuItem->Size = System::Drawing::Size(110, 22);
            this->colorToolStripMenuItem->Text = L"Color";
            this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::colorToolStripMenuItem_Click);
            // 
            // acercaDeToolStripMenuItem
            // 
            this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
            this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(71, 20);
            this->acercaDeToolStripMenuItem->Text = L"Acerca de";
            this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::acercaDeToolStripMenuItem_Click);
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Firebrick;
            this->panel3->Controls->Add(this->pnlCont);
            this->panel3->Controls->Add(this->button2);
            this->panel3->Controls->Add(this->label2);
            this->panel3->Controls->Add(this->btnAbrir);
            this->panel3->Controls->Add(this->btnLimpiar);
            this->panel3->Controls->Add(this->btnCerrar);
            this->panel3->Controls->Add(this->btnAnalizar);
            this->panel3->Controls->Add(this->btnGuardar);
            this->panel3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
            this->panel3->Location = System::Drawing::Point(0, 27);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(275, 624);
            this->panel3->TabIndex = 2;
            // 
            // pnlCont
            // 
            this->pnlCont->Location = System::Drawing::Point(66, 72);
            this->pnlCont->Name = L"pnlCont";
            this->pnlCont->Size = System::Drawing::Size(136, 136);
            this->pnlCont->TabIndex = 8;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Firebrick;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button2->Location = System::Drawing::Point(26, 563);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(225, 46);
            this->button2->TabIndex = 7;
            this->button2->Text = L"Salir";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label2->Location = System::Drawing::Point(60, 18);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(148, 31);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Bienvenido";
            // 
            // salirToolStripMenuItem
            // 
            this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
            this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
            this->salirToolStripMenuItem->Text = L"Salir";
            this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::salirToolStripMenuItem_Click);
            // 
            // cerrarToolStripMenuItem
            // 
            this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
            this->cerrarToolStripMenuItem->Size = System::Drawing::Size(106, 22);
            this->cerrarToolStripMenuItem->Text = L"Cerrar";
            this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cerrarToolStripMenuItem_Click);
            // 
            // guardarComoToolStripMenuItem
            // 
            this->guardarComoToolStripMenuItem->Name = L"guardarComoToolStripMenuItem";
            this->guardarComoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
            this->guardarComoToolStripMenuItem->Text = L"Guardar Como";
            this->guardarComoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::guardarComoToolStripMenuItem_Click);
            // 
            // guardarToolStripMenuItem
            // 
            this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
            this->guardarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
            this->guardarToolStripMenuItem->Text = L"Guardar";
            this->guardarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::guardarToolStripMenuItem_Click);
            // 
            // abrirToolStripMenuItem
            // 
            this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
            this->abrirToolStripMenuItem->Size = System::Drawing::Size(152, 22);
            this->abrirToolStripMenuItem->Text = L"Abrir";
            this->abrirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::abrirToolStripMenuItem_Click);
            // 
            // mnNuevo
            // 
            this->mnNuevo->Name = L"mnNuevo";
            this->mnNuevo->Size = System::Drawing::Size(152, 22);
            this->mnNuevo->Text = L"Nuevo";
            this->mnNuevo->Click += gcnew System::EventHandler(this, &Form1::mnNuevo_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->label5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->label5->Location = System::Drawing::Point(604, 312);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(78, 25);
            this->label5->TabIndex = 5;
            this->label5->Text = L"Tokens";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1287, 648);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->menuStrip1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MainMenuStrip = this->menuStrip1;
            this->MaximizeBox = false;
            this->Name = L"Form1";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Analizador UGLYA";
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        //Método para mostrar interfaz pedir la ruta y ABRIR el archivo
        void pedirRuta(void) {
            this->panelR = (gcnew System::Windows::Forms::Panel());
            this->lbruta = (gcnew System::Windows::Forms::Label());
            this->lbIntro = (gcnew System::Windows::Forms::Label());
            this->lbnom = (gcnew System::Windows::Forms::Label());
            this->btnAceptarR = (gcnew System::Windows::Forms::Button());
            this->btnCancelarR = (gcnew System::Windows::Forms::Button());
            this->txtRuteishon = (gcnew System::Windows::Forms::TextBox());
            this->txtNomArchivo = (gcnew System::Windows::Forms::TextBox());

            this->panelR->SuspendLayout();

            this->panel1->Controls->Add(this->panelR);
            this->panel1->Controls->Add(this->btnAceptarR);
            this->panel1->Controls->Add(this->btnCancelarR);
            this->panel1->Controls->Add(this->lbruta);
            this->panel1->Controls->Add(this->txtRuteishon);
            this->panel1->Controls->Add(this->txtNomArchivo);
            this->panel1->Controls->Add(this->lbnom);

            this->panelR->BackColor = System::Drawing::Color::Firebrick;
            this->panelR->Controls->Add(this->lbIntro);
            this->panelR->Location = System::Drawing::Point(0, 0);
            this->panelR->Name = L"panelR";
            this->panelR->Size = System::Drawing::Size(1006, 103);
            this->panelR->TabIndex = 0;

            this->lbIntro->AutoSize = true;
            this->lbIntro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbIntro->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->lbIntro->Location = System::Drawing::Point(36, 18);
            this->lbIntro->Name = L"lbIntro";
            this->lbIntro->Size = System::Drawing::Size(227, 31);
            this->lbIntro->TabIndex = 2;
            this->lbIntro->Text = L"Introduce la ruta";



            this->txtRuteishon->Enabled = true;
            this->txtRuteishon->Location = System::Drawing::Point(36, 200);
            this->txtRuteishon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtRuteishon->Multiline = false;
            this->txtRuteishon->Name = L"txtRuteishon";
            this->txtRuteishon->Size = System::Drawing::Size(800, 185);
            this->txtRuteishon->TabIndex = 3;

            this->lbruta->AutoSize = true;
            this->lbruta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbruta->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbruta->Location = System::Drawing::Point(36, 150);
            this->lbruta->Name = L"lbruta";
            this->lbruta->Size = System::Drawing::Size(100, 31);
            this->lbruta->TabIndex = 6;
            this->lbruta->Text = L"Ruta:";

            this->lbnom->AutoSize = true;
            this->lbnom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbnom->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbnom->Location = System::Drawing::Point(36, 245);
            this->lbnom->Name = L"lbnom";
            this->lbnom->Size = System::Drawing::Size(100, 31);
            this->lbnom->TabIndex = 10;
            this->lbnom->Text = L"Nombre del archivo:";

            this->txtRuteishon->Enabled = true;
            this->txtRuteishon->Location = System::Drawing::Point(36, 200);
            this->txtRuteishon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtRuteishon->Multiline = false;
            this->txtRuteishon->Name = L"txtRuteishon";
            this->txtRuteishon->Size = System::Drawing::Size(800, 185);
            this->txtRuteishon->TabIndex = 3;

            this->txtNomArchivo->Enabled = true;
            this->txtNomArchivo->Location = System::Drawing::Point(36, 280);
            this->txtNomArchivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtNomArchivo->Multiline = false;
            this->txtNomArchivo->Name = L"txtNomArchivo";
            this->txtNomArchivo->Size = System::Drawing::Size(800, 15);
            this->txtNomArchivo->TabIndex = 9;

            this->btnAceptarR->BackColor = System::Drawing::Color::Firebrick;
            this->btnAceptarR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnAceptarR->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnAceptarR->Location = System::Drawing::Point(42, 547);
            this->btnAceptarR->Name = L"btnAceptarR";
            this->btnAceptarR->Size = System::Drawing::Size(123, 44);
            this->btnAceptarR->TabIndex = 7;
            this->btnAceptarR->Text = L"Aceptar";
            this->btnAceptarR->UseVisualStyleBackColor = false;
            this->btnAceptarR->Click += gcnew System::EventHandler(this, &Form1::btnAceptarR_Click);

            this->btnCancelarR->BackColor = System::Drawing::Color::Firebrick;
            this->btnCancelarR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnCancelarR->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCancelarR->Location = System::Drawing::Point(173, 547);
            this->btnCancelarR->Name = L"btnCancelar";
            this->btnCancelarR->Size = System::Drawing::Size(123, 44);
            this->btnCancelarR->TabIndex = 8;
            this->btnCancelarR->Text = L"Cancelar";
            this->btnCancelarR->UseVisualStyleBackColor = false;
            this->btnCancelarR->Click += gcnew System::EventHandler(this, &Form1::btnCancelarR_Click);






        }

        //Método para mostrar interfaz pedir la ruta y CREAR el archivo
        void pedirRuta2(void) {
            this->panelR2 = (gcnew System::Windows::Forms::Panel());
            this->lbruta2 = (gcnew System::Windows::Forms::Label());
            this->lbIntro2 = (gcnew System::Windows::Forms::Label());
            this->lbnom2 = (gcnew System::Windows::Forms::Label());
            this->btnCrearR2 = (gcnew System::Windows::Forms::Button());
            this->btnCancelarR2 = (gcnew System::Windows::Forms::Button());
            this->btnCrear = (gcnew System::Windows::Forms::Button());
            this->txtRuteishon2 = (gcnew System::Windows::Forms::TextBox());
            this->txtNomArchivo2 = (gcnew System::Windows::Forms::TextBox());

            this->panelR2->SuspendLayout();

            this->panel1->Controls->Add(this->panelR2);
            //this->panel1->Controls->Add(this->btnCrearR2);
            this->panel1->Controls->Add(this->btnCancelarR2);
            this->panel1->Controls->Add(this->lbruta2);
            this->panel1->Controls->Add(this->btnCrear);
            this->panel1->Controls->Add(this->txtRuteishon2);
            this->panel1->Controls->Add(this->txtNomArchivo2);
            this->panel1->Controls->Add(this->lbnom2);

            this->panelR2->BackColor = System::Drawing::Color::Firebrick;
            this->panelR2->Controls->Add(this->lbIntro);
            this->panelR2->Location = System::Drawing::Point(0, 0);
            this->panelR2->Name = L"panelR2";
            this->panelR2->Size = System::Drawing::Size(898, 103);
            this->panelR2->TabIndex = 0;

            this->lbIntro2->AutoSize = true;
            this->lbIntro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbIntro2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->lbIntro2->Location = System::Drawing::Point(36, 18);
            this->lbIntro2->Name = L"lbIntro2";
            this->lbIntro2->Size = System::Drawing::Size(227, 31);
            this->lbIntro2->TabIndex = 2;
            this->lbIntro2->Text = L"Introduce la ruta";



            this->txtRuteishon2->Enabled = true;
            this->txtRuteishon2->Location = System::Drawing::Point(36, 200);
            this->txtRuteishon2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtRuteishon2->Multiline = false;
            this->txtRuteishon2->Name = L"txtRuteishon2";
            this->txtRuteishon2->Size = System::Drawing::Size(800, 185);
            this->txtRuteishon2->TabIndex = 3;

            this->lbruta2->AutoSize = true;
            this->lbruta2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbruta2->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbruta2->Location = System::Drawing::Point(36, 150);
            this->lbruta2->Name = L"lbruta2";
            this->lbruta2->Size = System::Drawing::Size(100, 31);
            this->lbruta2->TabIndex = 6;
            this->lbruta2->Text = L"Ruta:";

            this->lbnom2->AutoSize = true;
            this->lbnom2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
            this->lbnom2->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lbnom2->Location = System::Drawing::Point(36, 245);
            this->lbnom2->Name = L"lbnom2";
            this->lbnom2->Size = System::Drawing::Size(100, 31);
            this->lbnom2->TabIndex = 10;
            this->lbnom2->Text = L"Nombre del archivo:";

            this->txtRuteishon2->Enabled = true;
            this->txtRuteishon2->Location = System::Drawing::Point(36, 200);
            this->txtRuteishon2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtRuteishon2->Multiline = false;
            this->txtRuteishon2->Name = L"txtRuteishon2";
            this->txtRuteishon2->Size = System::Drawing::Size(800, 185);
            this->txtRuteishon2->TabIndex = 3;

            this->txtNomArchivo2->Enabled = true;
            this->txtNomArchivo2->Location = System::Drawing::Point(36, 280);
            this->txtNomArchivo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
            this->txtNomArchivo2->Multiline = false;
            this->txtNomArchivo2->Name = L"txtNomArchivo2";
            this->txtNomArchivo2->Size = System::Drawing::Size(800, 15);
            this->txtNomArchivo2->TabIndex = 9;

            this->btnCrearR2->BackColor = System::Drawing::Color::Firebrick;
            this->btnCrearR2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnCrearR2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCrearR2->Location = System::Drawing::Point(42, 547);
            this->btnCrearR2->Name = L"btnCrearR2";
            this->btnCrearR2->Size = System::Drawing::Size(123, 44);
            this->btnCrearR2->TabIndex = 7;
            this->btnCrearR2->Text = L"Crear";
            this->btnCrearR2->UseVisualStyleBackColor = false;
            this->btnCrearR2->Click += gcnew System::EventHandler(this, &Form1::btnCrearR2_Click);

            this->btnCancelarR2->BackColor = System::Drawing::Color::Firebrick;
            this->btnCancelarR2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnCancelarR2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCancelarR2->Location = System::Drawing::Point(173, 547);
            this->btnCancelarR2->Name = L"btnCancelar2";
            this->btnCancelarR2->Size = System::Drawing::Size(123, 44);
            this->btnCancelarR2->TabIndex = 8;
            this->btnCancelarR2->Text = L"Cancelar";
            this->btnCancelarR2->UseVisualStyleBackColor = false;
            this->btnCancelarR2->Click += gcnew System::EventHandler(this, &Form1::btnCancelarR2_Click);

            this->btnCrear->BackColor = System::Drawing::Color::Firebrick;
            this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->btnCrear->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCrear->Location = System::Drawing::Point(42, 547);
            this->btnCrear->Name = L"btnCrear";
            this->btnCrear->Size = System::Drawing::Size(123, 44);
            this->btnCrear->TabIndex = 8;
            this->btnCrear->Text = L"Crear";
            this->btnCrear->UseVisualStyleBackColor = false;
            this->btnCrear->Click += gcnew System::EventHandler(this, &Form1::btnCrear_Click);

        }

        //Método para volver a cargar la interfaz principal
        void REInitializeComponent(void)
        {

            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ButtonShadow;
            
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->txtError);
            this->panel1->Controls->Add(this->txtToken);
            this->panel1->Controls->Add(this->txtElementos);
            this->panel1->Controls->Add(this->txtPila);
            this->panel1->Controls->Add(this->txtDoc);
            this->panel1->Controls->Add(this->panel2);
            this->panel2->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label8);
            this->panel1->Controls->Add(this->txtAS);

        }
        
public:
    Form^ actual;
        void MsIncreible(Form^ imagen) {
            
            if (this->actual != nullptr) {
                this->actual->Close();
            }
            //Limpio el panel
            if (pnlCont->Controls->Count > 0) {
                pnlCont->Controls->Clear();
            }
            
            //LAProyectoATMvol2::Imagen^ imagen = gcnew LAProyectoATMvol2::Imagen();
            this->actual = imagen;
            imagen->Dock = DockStyle::Fill;
            imagen->TopLevel = false;
            pnlCont->Controls->Add(imagen);
            pnlCont->Tag = imagen;
            imagen->Show();
        }

        //HILO DE ANALISIS PARA PALABRAS RESERVADAS
        void colores() {

            //txtDoc->SelectionStart = 0;
            //txtDoc->SelectAll();
            //txtDoc->SelectionBackColor = Color::White;

            string cadena = this->toStandardString(this->txtDoc->Text);

            string encabezados[4] = { "class","endclass","lib","loop" }; //Color azul
            string complementos[3] = { "of", "to" ,"break"};             //Color Verde
            string tipos[5] = { "int","float","char","string","bool" };  //Color Naranja
            string estatutos[7] = {"if","else","do","while","input","output","def"}; //Color morado


            //string probando[2] = { this->toStandardString(this->textBox1->Text), " "};
            
            //string word;
            //while(word == encabezados->data())
            for each (string word in encabezados)
            {
                int startIndex = 0;
                
                while (startIndex < txtDoc->TextLength) {
                    //int wordStartIndex = txtDoc.Find(word, startIndex, RichTextBoxFinds::None);
                    int wordStartIndex = txtDoc->Find(toSystemString(word),startIndex,RichTextBoxFinds::None);
                    if (wordStartIndex != -1) {
                        txtDoc->SelectionStart = wordStartIndex;
                        txtDoc->SelectionLength = word.length();
                        txtDoc->SelectionColor = Color::Blue;
                        startIndex++;
                    }
                    else {
                        break;
                        startIndex += wordStartIndex + word.length();
                    }
                }
            }

            for each (string word in complementos)
            {
                int startIndex = 0;

                while (startIndex < txtDoc->TextLength) {
                    //int wordStartIndex = txtDoc.Find(word, startIndex, RichTextBoxFinds::None);
                    int wordStartIndex = txtDoc->Find(toSystemString(word), startIndex, RichTextBoxFinds::None);
                    if (wordStartIndex != -1) {
                        txtDoc->SelectionStart = wordStartIndex;
                        txtDoc->SelectionLength = word.length();
                        txtDoc->SelectionColor = Color::Green;
                        startIndex++;
                    }
                    else {
                        break;
                        startIndex += wordStartIndex + word.length();
                    }
                }
            }

            for each (string word in tipos)
            {
                int startIndex = 0;

                while (startIndex < txtDoc->TextLength) {
                    //int wordStartIndex = txtDoc.Find(word, startIndex, RichTextBoxFinds::None);
                    int wordStartIndex = txtDoc->Find(toSystemString(word), startIndex, RichTextBoxFinds::None);
                    if (wordStartIndex != -1) {
                        txtDoc->SelectionStart = wordStartIndex;
                        txtDoc->SelectionLength = word.length();
                        txtDoc->SelectionColor = Color::OrangeRed;
                        startIndex++;
                    }
                    else {
                        break;
                        startIndex += wordStartIndex + word.length();
                    }
                }
            }

            for each (string word in estatutos)
            {
                int startIndex = 0;

                while (startIndex < txtDoc->TextLength) {
                    //int wordStartIndex = txtDoc.Find(word, startIndex, RichTextBoxFinds::None);
                    int wordStartIndex = txtDoc->Find(toSystemString(word), startIndex, RichTextBoxFinds::None);
                    if (wordStartIndex != -1) {
                        txtDoc->SelectionStart = wordStartIndex;
                        txtDoc->SelectionLength = word.length();
                        txtDoc->SelectionColor = Color::Purple;
                        startIndex++;
                    }
                    else {
                        break;
                        startIndex += wordStartIndex + word.length();
                    }
                }
            }
            

        }
 
    

//ANALIZADOR LEXICO
 //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        //METODOS PARA ANALIZAR, CREAR, ABRIR, GUARDAR, ETC.
        //       
        //Método para análizar la cadena
        void analizar() {
            //declaración de variables
            int edo = 0;    //estado
            int columna;    //columna
            int i = 0;      //contador
            string textoRecu, c,c2;
            string val;
            txtError->Clear();
            txtToken->Clear();
            
            char caracter;
            
            //leemos el caracter de la caja de texto
            textoRecu = this->toStandardString(this->txtDoc->Text);
            textoRecu = textoRecu + "\0";
            

            while (i < textoRecu.size() - 1 ) {
                    edo = 0;
                
                    //ciclo while para que funcione mientras el estado sea menor o igual a 19
                    
                    while (edo < 21) {

                        
                        caracter = textoRecu[i];
                        c2 = textoRecu[i];
                        //caracter = cad0[i];
                        //Relacionamos el caracter y lo asignamos a columna
                        columna = Relaciona(caracter);
                        //Asignamos al estado, el valor en la matriz 
                        edo = matriz(edo, columna);

                        //MessageBox::Show(toSystemString("Char: "+std::to_string(caracter))+"| String: "+toSystemString(c2)+"| Columna: "+columna+ "| estado: "+edo, "valores");
                        //txtElementos->AppendText("Char: " + std::to_string(caracter) + "| String: " +c2 + "| Columna: " + columna + "| estado: " + edo, "valores");
                        txtElementos->AppendText("Char:" + caracter + " | String:" + toSystemString(c2) + " | Columna:" + columna + " | Estado:" + edo + "\r\n");
                        //i++;
                        

                        if (edo < 100 && edo != 0 && caracter != '\0') {
                            val = val + caracter;
                            //i++;
                        }
                        if (caracter == '\0' && edo == 17) {
                            edo = 507;
                        }
                        if (edo == 18) {
                            edo = 126;
                        }
                        txtPila->AppendText(toSystemString(val)+"\r\n");

                        i++;
                    

                    }
                    //palabra reservada
                    /*if (edo == 100) {
                        palabrasReservadas(val);
                    }
                    // Letras, numeros, constantes flotantes cientifica
                    if (edo > 101 && edo <= 104) {
                        i++;
                    }*/

                  
                    //Simbolos suma resta multiplicación y división
                    if (edo >= 105 && edo <= 108) {
                        i++;
                        val = caracter;
                    }
                    //igual y asigna
                    if (edo == 109 || edo == 110) {
                        i++;
                        val = caracter;
                    }
                    //Menor que y menor o igual Mayor que y mayor o igual
                    if (edo == 111 || edo == 112 || edo == 113 || edo == 114) {
                        i++;
                        val = caracter;
                    }
                    if (edo == 115) {
                        i++;
                        val = caracter;
                    }
 
                    //)[] , ;
                    else if (edo >= 116 && edo <= 124) {
                        i++;
                        val = caracter;
                    }
                    if (edo == 125) {
                        i++;
                        //val = caracter;
                    }
                    if (edo == 126) {
                        i++;
                        //val = caracter;
                    }

                    //Simbolos % { }
                    else if (edo >= 128 && edo <= 130) {
                        i++;
                        val = caracter;
                    }

                    
                    //Si el estado es mayor o igual a 100 y menor o igual a 499. Es un token
                    if (edo >= 100 && edo <= 499) {
                        
                        //Tokenns(edo,i);
                        Tokenn(edo,val);
                        i--;
                        //Si es una palabra reservada, la buscamos para saber cuál es
                        if (edo == 100) {
                            //string numeros = numPalabra(val);
                            //val = numeros;
                        }
                        //identificador
                        if (edo == 101) {
                            val = "1001";
                        }
                        //cteentera
                        if (edo == 102) {
                            val = "1037";
                        }
                        //ctereal
                        if (edo == 103) {
                            val = "1038";
                        }
                        //ctenotacion
                        if (edo == 104) {
                            val = "1039";
                        }
                        //ctecaracter
                        if (edo == 125) {
                            val = "1040";
                        }
                        //ctestring
                        if (edo == 126) {
                            val = "1041";
                        }
                        //arreglo.push_back(ed);
                        toks.push_back(val);
                        
                        val = "";
                        
                        siono = true;
  
                    }
                    else if(edo >= 500 && edo <= 507) {      //Sino, mandamos a llamar al método error
                       
                        Error(edo);
                        //i--;
                        val = "";
                        
                        siono = false;
                    }
                    //i++;
                }
                i = 0;
      }

      void analizarColor() {
          //declaración de variables
          int edo = 0;    //estado
          int columna;    //columna
          int i = 0;      //contador
          string textoRecu, c, c2;
          string val;
          txtError->Clear();
          txtToken->Clear();

          char caracter;

          //leemos el caracter de la caja de texto
          textoRecu = this->toStandardString(this->txtDoc->Text);
          textoRecu = textoRecu + "\0";


          while (i < textoRecu.size() - 1) {
              edo = 0;

              //ciclo while para que funcione mientras el estado sea menor o igual a 19

              while (edo < 21) {


                  caracter = textoRecu[i];
                  c2 = textoRecu[i];
                  //caracter = cad0[i];
                  //Relacionamos el caracter y lo asignamos a columna
                  columna = Relaciona(caracter);
                  //Asignamos al estado, el valor en la matriz 
                  edo = matriz(edo, columna);

                  if (edo < 100 && edo != 0 && caracter != '\0') {
                      val = val + caracter;
                      
                  }
                  if (caracter == '\0' && edo == 17) {
                      edo = 507;
                  }
                  if (edo == 18) {
                      edo = 126;
                  }
                  txtPila->AppendText(toSystemString(val) + "\r\n");

                  i++;


              }

              //Simbolos suma resta multiplicación y división
              if (edo >= 105 && edo <= 108) {
                  i++;
                  val = caracter;
              }
              //igual y asigna
              if (edo == 109 || edo == 110) {
                  i++;
                  val = caracter;
              }
              //Menor que y menor o igual Mayor que y mayor o igual
              if (edo == 111 || edo == 112 || edo == 113 || edo == 114) {
                  i++;
                  val = caracter;
              }
              if (edo == 115) {
                  i++;
                  val = caracter;
              }

              //)[] , ;
              else if (edo >= 116 && edo <= 124) {
                  i++;
                  val = caracter;
              }
              if (edo == 125) {
                  i++;
                  //val = caracter;
              }
              if (edo == 126) {
                  i++;
                  //val = caracter;
              }

              //Simbolos % { }
              else if (edo >= 128 && edo <= 130) {
                  i++;
                  val = caracter;
              }


              //Si el estado es mayor o igual a 100 y menor o igual a 499. Es un token
              if (edo >= 100 && edo <= 499) {

                  if (val == "class" ||
                      val == "endclass" ||
                      val == "lib" || 
                      val == "loop") {

                      //txtDoc->SelectionStart = wordStartIndex;
                      //txtDoc->SelectionLength = word.length();
                      txtDoc->SelectionColor = Color::Blue;

                  }

                  if (val == "of" ||
                      val == "to" ||
                      val == "break"){

                      //txtDoc->SelectionStart = wordStartIndex;
                      //txtDoc->SelectionLength = word.length();
                      txtDoc->SelectionColor = Color::Green;
                  }
                  if (val == "int" ||
                      val == "float" ||
                      val == "char" ||
                      val == "string"||
                      val == "bool"||
                      val == "input"||
                      val == "output"||
                      val == "def") {

                      //txtDoc->SelectionStart = wordStartIndex;
                      //txtDoc->SelectionLength = word.length();
                      txtDoc->SelectionColor = Color::OrangeRed;

                  }
                  if (val == "if" ||
                      val == "else" ||
                      val == "do" ||
                      val == "while") {

                      //txtDoc->SelectionStart = wordStartIndex;
                      //txtDoc->SelectionLength = word.length();
                      txtDoc->SelectionColor = Color::Purple;

                  }


                  i--;

              }
              else if (edo >= 500 && edo <= 507) {      //Sino, mandamos a llamar al método error

                  Error(edo);
                  //i--;
                  val = "";
              }
              //i++;
          }
          i = 0;
      }

      bool analisis;

      int comentario = 0;

      int analizarVol2() {
          //declaración de variables
          int edo = 0;    //estado
          int columna;    //columna
          int contador = 0;      //contador
          string textoRecu, c, c2;
          string val;
          //txtError->Clear();
          //txtToken->Clear();
          int numToken = 0;
          char caracter;

          //leemos el caracter de la caja de texto
          textoRecu = this->toStandardString(this->txtDoc->Text);
          textoRecu = textoRecu + "\0";


          while (i < textoRecu.size() -1 ) {
              edo = 0;
              if (i == textoRecu.size()) {
                  analisis = false;
                  return 1047;
              }
              //ciclo while para que funcione mientras el estado sea menor o igual a 19

              while (edo < 21) {

                  //Asignamos un caracter del texto recuperado
                  caracter = textoRecu[i];
                  //igual del anterior, pero en string para comparar
                  c2 = textoRecu[i];
                  //caracter = cad0[i];
                  //Relacionamos el caracter y lo asignamos a columna
                  columna = Relaciona(caracter);
                  //Asignamos al estado, el valor en la matriz 
                  edo = matriz(edo, columna);

                  //MessageBox::Show(toSystemString("Char: "+std::to_string(caracter))+"| String: "+toSystemString(c2)+"| Columna: "+columna+ "| estado: "+edo, "valores");
                  //txtElementos->AppendText("Char: " + std::to_string(caracter) + "| String: " +c2 + "| Columna: " + columna + "| estado: " + edo, "valores");
                  //Imprimimos los elementos para ver que todo esté correcto
                  txtElementos->AppendText("Char:" + caracter + " | String:" + toSystemString(c2) + " | Columna:" + columna + " | Estado:" + edo + "\r\n");
                  //i++;

                  //Comparaciones para realizar saltos
                  if (edo < 100 && edo != 0 && caracter != '\0') {
                      val = val + caracter;
                      //i++;
                  }

                  //Error 507 Esperaba caracter antes de comilla simple
                  if (caracter == '\0' && edo == 17) {
                      edo = 507;
                  }

                  if (edo == 18) {
                      edo = 126;
                  }

                  //Comentario de linea
                  if (edo == 108) {
                      //i++;
                      edo = 0;
                      comentario++;
                  }

                  //Si viene un segundo / es un comentario
                  if (comentario == 2 && edo == 0) {
                      comentario = 0;
                      edo = 127;
                      //txtToken->AppendText("Comentario de linea  |  \r\n");
                      //edo = 1;
                  }
                  //Si después del / viene algo distinto, entonces no es un comentario y es una división normal
                  else if(edo != 0 && comentario != 0) {
                      comentario = 0;
                      edo = 108;
                      i--;
                  }

                  //Imprimir todos los caracteres
                  txtPila->AppendText(toSystemString(val) + "\r\n");
                  //Aumentamos el contador para el siguiente ciclo
                  i++;


              }
              //palabra reservada
              /*if (edo == 100) {
                  palabrasReservadas(val);
              }
              // Letras, numeros, constantes flotantes cientifica
              if (edo > 101 && edo <= 104) {
                  i++;
              }*/


              //Simbolos suma resta multiplicación y división
              if (edo >= 105 && edo <= 108) {
                  i++;
                  val = caracter;
              }
              //igual y asigna
              if (edo == 109 || edo == 110) {
                  i++;
                  val = caracter;
              }
              //Menor que y menor o igual Mayor que y mayor o igual
              if (edo == 111 || edo == 112 || edo == 113 || edo == 114) {
                  i++;
                  val = caracter;
              }

              if (edo == 115) {
                  i++;
                  val = caracter;
              }

              //)[] , ;
              else if (edo >= 116 && edo <= 124) {
                  i++;
                  val = caracter;
              }
              if (edo == 125) {
                  i++;
                  //val = caracter;
              }
              if (edo == 126) {
                  i++;
                  //val = caracter;
              }
              if (edo == 127) {
                  i++;
              }

              //Simbolos % { }
              else if (edo >= 128 && edo <= 130) {
                  i++;
                  val = caracter;
              }



              //Si el estado es mayor o igual a 100 y menor o igual a 499. Es un token
              if (edo >= 100 && edo <= 499) {

                  //Tokenns(edo,i);
                  Tokenn(edo, val);
                  i--;
                  //Si es una palabra reservada, la buscamos para saber cuál es
                  if (edo == 100) {

                      numToken = numPalabra(val);
                      stoken = val;
                      //val = numeros;
                  }
                  //identificador
                  if (edo == 101) {
                      numToken = 1003;
                      stoken = val;
                  }
                  //cteentera
                  if (edo == 102) {
                      numToken = 1037;
                  }
                  //ctereal
                  if (edo == 103) {
                      numToken = 1038;
                  }
                  //ver que tipo de valor es si es un simbolo
                  if (edo >= 105 && edo < 125) {
                      numToken = numSimbolo(val);
                      //val = simbolo;
                  }

                  if (edo == 119 || edo == 120) {
                      numToken = numSimbolo(val);
                  }

                  if (edo >= 129 && edo < 131) {
                      numToken = numSimbolo(val);
                      //val = simbolo;
                  }
                  //ctenotacion
                  if (edo == 104) {
                      numToken = 1039;
                  }
                  //ctecaracter
                  if (edo == 125) {
                      numToken = 1040;
                  }
                  //ctestring
                  if (edo == 126) {
                      numToken = 1041;
                  }
                  //arreglo.push_back(ed);
                  toks.push_back(val);

                  //Le asignamos el valor numerico de la cadena al tipo de archivo int
                  //int numToken = stoi(val);
                  siono = true;
                  
                  return numToken;
                  // = "";

              }
              else if (edo >= 500 && edo <= 507) {      //Sino, mandamos a llamar al método error

                  Error(edo);
                  //i--;
                  val = "";
                  LAProyectoATMvol2::Mal^ mal = gcnew LAProyectoATMvol2::Mal();

                  MsIncreible(gcnew LAProyectoATMvol2::Mal);

                  siono = false;
                  return edo;

                  
              }
              //i++;
          }
          //i = 0;
      }

      //Método para leer el carácter en la posición acual
      char leer_caracter(vector<char>& arreglo, int i) {
          char caracter;
          //asignamos el valor caracter en la posición i
          caracter = arreglo[i];

          return caracter;
      }

      //Método de matriz, en donde vienen todos los datos y vamos a identificar que valor tiene.
      int matriz(int edo, int columna) {
          //matriz con los datos de la tabla, de los token, aceptados y errores
          int mat[20][33]{
              //     0     1       2       3       4       5       6       7       8       9      10      11      12       13     14       15     16       17      18      19     20       21     22      23       24      25     26      27       28      29      30       31     32         
              //     l     L       D       _       .       E       e       +       -       /       *       %       {        }      [        ]      (        )       |       =      >        <      &       !        '       "      ,       ;        #      \t      \n       b      =/             
                 {   1,	  2,	  3,	  2,	506,	  2,	  1,	105,	106,	108,	107,	128,	129,	130,	121,	122,	119,	120,	 14,	  9,	 11,	 10,	 13,	 12,	 15,	 17,	124,	123,	 19,	  0,	  0,	  0,	506,}, //0
                 {   1,	  2,	  2,	  2,	100,	  2,	  1,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100,	100},  //1
                 {   2,	  2,	  2,	  2,	101,	  2,	  2,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101,	101},  //2
                 { 102,	102,	  3,	102,	  4,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102,	102},  //3
                 { 500,	500,	  5,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500,	500},  //4
                 { 103,	103,	  5,	103,	103,	  6,	  6,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103,	103},  //5
                 { 501,	501,	  8,	501,	501,	501,	501,	  7,	  7,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501,	501},  //6
                 { 502,	502,	  8,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502,	502},  //7
                 { 104,	104,	  8,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104,	104},  //8
                 { 109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	110,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109,	109},  //9 
                 { 111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	112,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111,	111},  //10
                 { 113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	114,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113,	113},  //11
                 { 116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	115,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116,	116},  //12
                 { 503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503,	117,	503,	503,	503,	503,	503,	503,	503,	503,	503,	503},  //13
                 { 504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	118,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504,	504},  //14
                 {  16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	505,	 16,	 16,	 16,	 16,	 16,	 16,	 16,	 16},  //15
                 { 507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	507,	125,	507,	507,	507,	507,	507,	507,	507,	507},  //16
                 {  17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 17,	 18,	 17,	 17,	 17,	 17,	 17,	 17,	 17},  //17
                 { 126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	126,	 17,	126,	126,	126,	126,	126,	126,	126},  //18
                 {  19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	 19,	127,	 19,	 19}  //19

          };

          int valor = mat[edo][columna];

          return valor;
      }

      int matrizz(int edo, int columna) {
          //matriz con los datos de la tabla, de los token, aceptados y errores
          int mat[20][33]{
              //     l     L       D       _       .       E       e       +       -       /       *       %       {        }      [        ]      (        )       |       =      >        <      &       !        '       "      ,       ;        #      \t      \n       b      =/             
                {    1,    2,      3,     506,    506,      2,      1,    105,    106,   107,    108,     128,     9,10,11,12,13,14,15,17,19,0,0,0,119,120,121,122,129,130,124,123,506},
                {    1,    2,      2,       2,    100,      2,      1,    100,    100,   100,    100,     100,   100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100},
                {    2,    2,      2,       2,    101,      2,      2,    101,    101,   101,    101,     101,   101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101},
                {  102,  102,      3,     102,      4,    102,    102,    102,    102,   102,    102,     102,   102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102,102},
                {  500,  500,      5,     500,    500,    500,    500,    500,    500,   500,    500,     500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500,500},
                {  103,  103,      5,     103,    103,      6,      6,    103,    103,   103,    103,     103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103,103},
                {  501,  501,      8,     501,    501,    501,    501,      7,      7,   501,    501,     501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501,501},
                {  502,  502,      8,     502,    502,    502,    502,    502,     502,  502,    502,     502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502,502},
                {  104,  104,      8,     104,    104,    104,    104,    104,     104,  104,    104,     104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104,104},
                {  109,  109,    109,     109,    109,    109,    109,    109,     109,  109,    109,     109,110,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109,109},
                {  111,  111,    111,     111,    111,    111,    111,    111,     111,  111,    111,     111,112,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111,111},
                {  113,  113,    113,     113,    113,    113,    113,    113,     113,  113,    113,     113,114,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113,113},
                {  116,  116,    116,     116,    116,    116,    116,    116,     116,  116,    116,     116,115,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116,116},
                {  503,  503,    503,     503,    503,    503,    503,    503,     503,  503,    503,     503,503,503,503,503,117,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503,503},
                {  504,  504,    504,     504,    504,    504,    504,    504,     504,  504,    504,     504,504,504,504,504,504,118,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504},
                {   16,   16,     16,      16,     16,     16,     16,     16,      16,   16,     16,      16,16,16,16,16,16,16,505,16,16,16,16,16,16,16,16,16,16,16,16,16,16},
                {  507,  507,    507,     507,    507,    507,    507,    507,     507,  507,    507,     507,507,507,507,507,507,507,125,507,507,507,507,507,507,507,507,507,507,507,507,507,507},
                {   17,   17,     17,      17,     17,     17,     17,     17,      17,   17,     17,      17,17,17,17,17,17,17,17,18,17,17,17,17,17,17,17,17,17,17,17,17,17},
                {  126,  126,    126,     126,    126,    126,    126,    126,     126,  126,    126,     126,126,126,126,126,126,126,126,17,126,126,126,126,126,126,126,126,126,126,126,126,126},
                {   19,   19,     19,      19,     19,     19,     19,     19,      19,   19,     19,      19,19,19,19,19,19,19,19,19,19,127,19,19,19,19,19,19,19,19,19,19,19}
          };

          int valor = mat[edo][columna];

          return valor;
      }

      //Método para leer el archivo
      vector<char> leerArchivo() {
          ifstream archivo;
          string texto;
          char numero;

          //Poner la ruta o poner el nombre del archivo en la raíz del proyecto
          //Específico:
          //archivo.open("G:\\Archivos\\xd\\documento.txt",ios::in); //abrir el archivo en modo lectura
          archivo.open("documento.txt", ios::in);
          std::ifstream infile("documento.txt");
          std::vector<char> Valores;

          if (archivo.fail()) {
              cout << "No se pudo abrir el archivo";
              MessageBox::Show("No se pudo abrir el archivo");
              //exit(1);
          }
          else {
              cout << "archivo abierto correctamente";
              MessageBox::Show("archivo abierto correctamente");
          }
          while (!archivo.eof()) {  //Mientas no sea el final del archivo
              getline(archivo, texto);
              cout << "\n";
              cout << texto << endl;
              while (infile >> numero) {
                  Valores.push_back(numero);
                  //hi[numero] = Valores.push_back(numero);

              }
          }

          archivo.close();
          return Valores;
      }

      void guardar(string dir) {

          ofstream dire;
          dire.open(dir);
          dire.clear();
          dire << this->toStandardString(this->txtDoc->Text);
          dire.close();

          string hola;
          
      }

      //Segundo método para leer el archivo
      vector<char> leerAcv(string dir) {
          ifstream archivo;
          string texto,texto2;
          char numero,salto;


          //Poner la ruta o poner el nombre del archivo en la raíz del proyecto
          //Específico:
          //archivo.open("G:\\Archivos\\xd\\documento.txt",ios::in); //abrir el archivo en modo lectura
          archivo.open(dir, ios::in);
          ifstream infile(dir);
          vector<char> Valores;
          //Si falla al abrir el documento
          if (archivo.fail()) {
              cout << "No se pudo abrir el archivo";
              MessageBox::Show("No se pudo abrir el archivo","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
              //exit(1);
          }
          else {
              cout << "archivo abierto correctamente";
              MessageBox::Show("Archivo abierto correctamente","Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
          }
          while (infile.get(salto)) {  //Mientas no sea el final del archivo
              //getline(archivo, texto);
              //cout << "\n";
              //cout << texto << endl;
              //while (infile >> numero) {
                  Valores.push_back(salto);
                  texto2 = texto2 + salto;
                  //if (salto == '\n') {
                  //    texto2 = texto2 + "\r\n";
                  //}
                  //hi[numero] = Valores.push_back(numero);

              //}
          }

          Valores.push_back('\0');
          texto2 = texto2 + "\0";
          this->txtDoc->Text = this->toSystemString(texto2);


          archivo.close();
          return Valores;
          //return Valores;
      }
      
      //Método para pasar de un string normal a uno de sistema
      private: static String^ toSystemString(string str) {
        return gcnew String(str.c_str());
      }

      //Método para Relacionar el valor de la columna
      int Relaciona(char c)  {
          int retorna = 32;
          //Análizar si es una letra minuscula
          if (c >= char(97) && c <= char(122)) {
              retorna = 0;
          }
          //Análizar si es una LETRA MAYUSCULA
          if (c >= char(65) && c <= char(90)) {
              retorna = 1;
          }
          //Análizar si es un número
          if (c >= char(48) && c <= char(57)) {
              retorna=2;
          }

          switch (c)
          {

          case char(95) :       //guion bajo
              retorna = 3;
              break;
          case '.':
              retorna = 4;
              break;
          case 'E':
              retorna = 5;
              break;
          case 'e':
              retorna = 6;
              break;
          case char(43) :   //suma
              retorna = 7;
              break;
          case '-':
              retorna = 8;
              break;
          case '/':
              retorna = 9;
              break;
          case '*':
              retorna = 10;
              break;
          case '%':
              retorna = 11;
              break;
          case '{':
              retorna = 12;
              break;
          case '}':
              retorna = 13;
              break;
          case '[':
              retorna = 14;
              break;
          case ']':
              retorna = 15;
              break;
          case '(':
              retorna = 16;
              break;
          case ')':
              retorna = 17;
              break;
          case '|':
               retorna = 18;
              break;   
          case '=':
              retorna = 19;
              break;       
          case '>':        
               retorna = 20;
              break;    
          case '<':
              retorna = 21;
              break;
          case '&':
              retorna = 22;
              break;
          case '!':
              retorna = 23;
              break;
          case char(39) :  //Comilla simple '
              retorna = 24;
              break;    
          case char(34) : // comillas "                    
              retorna = 25;
              break;              
          case ',':                    
              retorna = 26;
              break;    
          case ';':     
              retorna = 27;
              break;
          case '#':
              retorna = 28;
              break;                    
          case char(9) ://Tabulador
              retorna = 29;
              break;              
          case char(10) ://Salto de linea                  
              retorna = 30;
              break;    
          case char(32) ://Espacio                  
              retorna = 31;
              break;          
          case char(92) : /* \ */
              retorna = 32;
              break;
          }
          return retorna;
         }

      //Método tokenn para saber que token se identificó
      void Tokenn(int e,string val) {
          
          //con un switch veremos que tipo de token tenemos
          switch (e)
          {
          case 100:
              printf("Palabras reservadas");
              palabrasReservadas(val);
              //txtToken->AppendText("Palabras reservadas  |  \r\n");
              break;
          case 101:
              printf("Identificador");

              txtToken->AppendText("Identificador  |  \r\n");
              break;
          case 102:
              printf("Constante entera");
              txtToken->AppendText("Constante entera  |  \r\n");
              break;
          case 103:
              printf("Constante Real o flotante");
              txtToken->AppendText("Constante Real o flotante  |  \r\n");
              break;
          case 104:
              printf("Constante de Notación cientifica");
              txtToken->AppendText("Constante de Notación cientifica  |  \r\n");
              break;
          case 105:
              printf("Suma");
              txtToken->AppendText("Suma  |  \r\n");
              break;
          case 106:
              printf("Resta");
              txtToken->AppendText("Resta  |  \r\n");
              break;
          case 107:
              printf("Multiplicación");
              txtToken->AppendText("Multiplicación  |  \r\n");
              break;
          case 108:
              printf("Divisón");
              txtToken->AppendText("Divisón   |  \r\n");
              break;
          case 109:
              printf("Asigna");
              txtToken->AppendText("Asigna  |  \r\n");
              break;
          case 110:
              printf("Igual");
              txtToken->AppendText("Igual  |  \r\n");
              break;
          case 111:
              printf("Menor");
              txtToken->AppendText("Menor  |  \r\n");
              break;
          case 112:
              printf("Menor o igual");
              txtToken->AppendText("Menor o igual  |  \r\n");
              break;
          case 113:
              printf("Mayor");
              txtToken->AppendText("Mayor  |  \r\n");
              break;
          case 114:
              printf("Mayor o igual");
              txtToken->AppendText("Mayor o igual  |  \r\n");
              break;
          case 115:
              printf("Diferente");
              txtToken->AppendText("Diferente  |  \r\n");
              break;
          case 116:
              printf("Not");
              txtToken->AppendText("Not  |  \r\n");
              break;
          case 117:
              printf("And");
              txtToken->AppendText("And  |  \r\n");
              break;
          case 118:
              printf("OR");
              txtToken->AppendText("OR  |  \r\n");
              break;
          case 119:
              printf("Parentesis que abre");
              txtToken->AppendText("Parentesis que abre  |  \r\n");
              break;
          case 120:
              printf("Parentesis que cierra");
              txtToken->AppendText("Parentesis que cierra  |  \r\n");
              break;
          case 121:
              printf("Corchete que abre");
              txtToken->AppendText("Corchete que abre  |  \r\n");
              break;
          case 122:
              printf("Corchete que cierra");
              txtToken->AppendText("Corchete que cierra  |  \r\n");
              break;
          case 123:
              printf("Punto y coma");
              txtToken->AppendText("Punto y coma  |  \r\n");
              break;
          case 124:
              printf("Coma");
              txtToken->AppendText("Coma  |  \r\n");
              break;
          case 125:
              printf("Constante carácter");
              txtToken->AppendText("Constante carácter  |  \r\n");
              break;
          case 126:
              printf("Constante String");
              txtToken->AppendText("Constante String  |  \r\n");
              break;
          case 127:
              printf("Comentario de linea");
              txtToken->AppendText("Comentario de linea  |  \r\n");
              break;
          case 128:
              printf("Modulus");
              txtToken->AppendText("Modulus  |  \r\n");
              break;
          case 129:
              printf("Llave que abre");
              txtToken->AppendText("Llave que abre  |  \r\n");
              break;
          case 130:
              printf("Llave que cierra");
              txtToken->AppendText("Llave que cierra  |  \r\n");
              break;

          default:
              break;
          }
      }

      //Método de error
      void Error(int e) {
          //Con un switch se identificará que tipo de error es
          switch (e)
          {
          case 500:
              txtError->AppendText("Error Léxico #500: Esperaba dígito después de '.', '+', '-'  |  Tu puedes <3 \r\n");
              break;
          case 501:
              txtError->AppendText("Error Léxico #501: Esperaba digito despues de E/e  | Recuerda como son las constantes de notación científica  \r\n");
              break;
          case 502:
              txtError->AppendText("Error Léxico #502: Esperaba digito después de + | -  | Tampoco te pases, ya sabes que debe de ir digito, no manches xd \r\n");
              break;
          case 503:
              txtError->AppendText("Error Léxico #503: Esperaba & después de &  | A todos se nos puede pasar, ntp \r\n");
              break;
          case 504:
              txtError->AppendText("Error Léxico #504: Esperaba '|' después de '|'   | Se te pudo olvidar poner el otro OR \r\n");
              break;
          case 505:
              txtError->AppendText("Error Léxico #505: Esperaba algo distinto después de comillas simples | Si ya sabes como son las cadenas, te pasas xd \r\n");
              break;
          case 506:
              txtError->AppendText("Error Léxico #506: Esperaba un delimitador  |  A todos se nos olvidan los delimitadores ntp\r\n");
              break;
          case 507:
              txtError->AppendText("Error Léxico #507: Error, Esperaba comilla de cierre  | Eres mi programador fav, pero tampoco te pases xd \r\n");
              break;

          default:
              break;
          }
      }

      //Método con las palabras reservadas a usar
      void palabrasReservadas(string p) {
          if (p == "class" ||
              p == "endclass" ||
              p == "int" ||
              p == "float" ||
              p == "char" ||
              p == "string" ||
              p == "bool" ||
              p == "if" ||
              p == "else" ||
              p == "do" ||
              p == "while"||
              p == "input" ||
              p == "output"||
              p == "def" ||
              p == "to" ||
              p == "break" ||
              p == "loop" ||
              p == "lib" ||
              p == "of" ) {
              txtToken->AppendText(toSystemString(p) + " =  Palabra reservada\r\n");
              
    
          }
          else {
              txtToken->AppendText("Identificador\r\n");
          }
      }
      
      int numPalabra(string p) {
          int numeros;
          if (p == "lib") {
              numeros = 1000;
          }
          if (p == "class") {
              numeros = 1002;
          }
          if (p == "if") {
              numeros = 1007;
          }
          if (p == "while") {
              numeros = 1008;
          }
          if (p == "do") {
              numeros = 1009;
          }
          if (p == "input") {
              numeros = 1010;
          }
          if (p == "output") {
              numeros = 1011;
          }
          if (p == "loop") {
              numeros = 1006;
          }
          if (p == "def") {
              numeros = 1012;
          }
          if (p == "break") {
              numeros = 1013;
          }
          if (p == "else") {
              numeros = 1014;
          }
          if (p == "eval") {
              numeros = 1015;
          }if (p == "of") {
              numeros = 1017;
          }
          if (p == "int") {
              numeros = 1020;
          }
          if (p == "float") {
              numeros = 1021;
          }
          if (p == "char") {
              numeros = 1022;
          }
          if (p == "bool") {
              numeros = 1023;
          }
          if (p == "string") {
              numeros = 1024;
          }
          return numeros;
      }
      
      int numSimbolo(string p) {
          int numeros;
          if (p == "+") {
              numeros = 1029;
          }
          if (p == "-") {
              numeros = 1030;
          }
          if (p == "*") {
              numeros = 1026;
          }
          if (p == "/") {
              numeros = 1027;
          }
          if (p == "=") {
              numeros = 1025;
          }
          if (p == "==") {
              numeros = 1031;
          }
          if (p == "<") {
              numeros = 1033;
          }
          if (p == "<=") {
              numeros = 1034;
          }
          if (p == ">") {
              numeros = 1035;
          }
          if (p == ">=") {
              numeros = 1036;
          }
          if (p == "!=") {
              numeros = 1032;
          }
          if (p == "!") {
              numeros = 1046;
          }
          if (p == "&&") {
              numeros = 1044;
          }
          if (p == "||") {
              numeros = 1045;
          }
          if (p == "(") {
              numeros = 1042;
          }
          if (p == ")") {
              numeros = 1043;
          }
          if (p == "[") {
              numeros = 1018;
          }
          if (p == "]") {
              numeros = 1019;
          }
          if (p == ";") {
              numeros = 1001;
          }
          if (p == ",") {
              numeros = 1016;
          }
          if (p == "%") {
              numeros = 1028;
          }
          if (p == "{") {
              numeros = 1004;
          }
          if (p == "}") {
              numeros = 1005;
          }
          
          return numeros;
      }


	  /*void palabrasReservadas(string p) {
            std::string pal[19] = { "class",
                            "endclass",
                            "int",
                            "float",
                            "char",
                            "string",
                            "bool",
                            "if",
                            "else",
                            "do",
                            "while",
                            "input",
                            "output",
                            "def",
                            "to",
                            "break",
                            "loop",
                            "lib",
                            "for"};
            for (int x = 0; x <= pal->size(); x++) {
                if (p == pal[x]) {
                    txtToken->AppendText("Palabra reservada\r\n");
                    break;
                }
            
            }

		}*/
      
      //Método para limpiar las cajas de texto   
      void Limpiar() {
             //txtDoc->Clear();
             txtToken->Clear();
             txtError->Clear();
             txtElementos->Clear();
             txtPila->Clear();
             txtAS->Clear();
         }

      //Método para leer la ruta del archivo
      string leerRuta() {
             ifstream archivo;
             string texto;
             char numero;
             String^ tcxt;


             archivo.open("ruta.txt", ios::in);

             //Si falla al abrir el documento
             if (archivo.fail()) {
                 cout << "No se pudo abrir el archivo";

             }
             else {
                 cout << "archivo abierto correctamente";

             }
             while (!archivo.eof()) {  //Mientas no sea el final del archivo
                 getline(archivo, texto);

             }


             archivo.close();

             return texto;
         }

      //Método para limpiar el panel principal y poner otros componentes   
      void limpiarPanel() {

             if (panel1->Controls->Count > 0) {
                 panel1->Controls->Clear();
             }
         }

      //Método para pasar de un string de sistema a uno estandar   
      private: static string toStandardString(System::String^ string) {
            using System::Runtime::InteropServices::Marshal;
            System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
            char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
            std::string returnString(charPointer, string->Length);
            Marshal::FreeHGlobal(pointer);
            return returnString;
         }
  
      //método para crear un archivo
      void crearArchivo(string dir,string nom) {
            ofstream archivo;
            archivo.open(dir);


            archivo.close();

         }

      //abriendo un archivo y mostrarlo en el texto de documento
      void abriendo(string dir, string nom,vector<char> vecTxt) {
             //direcciónArchivo = leerRuta();
             
             string txtS;
             this->txtNombre->Text = this->toSystemString(nom + ".lya");

             for (int i = 0; i < vecTxt.size(); i++)
             {
                 txtS += vecTxt.at(i), "\n";
             }

             txtDoc->AppendText(toSystemString(txtS));
         }

      void abrirArchivo() {
          Limpiar();
          OpenFileDialog abrir;
          abrir.InitialDirectory = "C:";
          abrir.Title = "Abrir archivo para analizar";
          abrir.Filter = "Lya files(*.lya)|*.lya";

          abrir.ShowDialog();
          if (abrir.FileName == "") {
              MessageBox::Show("Por favor, abra un archivo","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

          }
          else {
              //txtRuteishon->Text(abrir.FileName);
              //txtRuteishon->Text = this->toStandardString(abrir.FileName);
              txtRuteishon->AppendText(abrir.FileName);
              txtNomArchivo->AppendText(abrir.SafeFileName);
          }
      }

      void guardar_como() {
          SaveFileDialog guardando;
          guardando.InitialDirectory="C:";
          guardando.Title = "Guardar Archivo como:";
          guardando.Filter = "Lya files(*.lya)|*.lya";

          guardando.ShowDialog();
          
          if (guardando.FileName == "") {
              MessageBox::Show("Archivo no guardado", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
          }
          else {
              string nom = toStandardString(guardando.FileName);
              crearArchivo(nom, nom);
              string nombres = nom.substr(0,nom.find_last_of("\'"));
              txtNombre->Text = toSystemString(nom);
              
              std::string guardar = toStandardString(txtDoc->Text);
              std::ofstream out(nom);
              out << guardar;
              out.close();

              MessageBox::Show("Archivo guardado correctamente", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);
          }
      }

      void guardarArchivo() {
          if (!txtNombre->Text->Equals("Archivo.lya")) {
              if (txtNombre->Text->Equals("Nuevo*.lya")) {
                  //guardarlo como
                  guardar_como();
              }
              else {
                  //guardar existente
                  std::string guardar = toStandardString(txtDoc->Text);
                  std::ofstream out(direcciónArchivo); 
                  out << guardar;
                  out.close();

                  MessageBox::Show("Archivo guardado correctamente", "Información", MessageBoxButtons::OK, MessageBoxIcon::Information);

              }

          }
          else {
              MessageBox::Show("Por favor, crea o abre un archivo", "Error",MessageBoxButtons::OK, MessageBoxIcon::Error);
              
          }
      }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


//ANALIZADOR SINTÁCTICO
// 
    void analizaSintaxis() {
          //MessageBox::Show("ANALISIS SINTACTICO HECHO, SI JALA");
          //string hola = tipotok;

          txtPila->AppendText("-----------------------------------------------------------------\r\n");
          txtAS->Clear();
          txtElementos->AppendText("-----------------------------------------------------------------\r\n");
          stack <int> pila;
          string cadena, c2, tkn;
          int i = 0;
          int columna;
          int edo;
          int cd;
          int token = 0, tk = 0, producción = 0, antes = 0;
          bool getTkn = false, error = false;
          //Le metemos el valor de /0
          pila.push(1000);
          pila.push(0);

          while (token < 500 && i < toks.size() && error == false) {
              txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción);
              getTkn = false;
              cadena = toks[i];
              token = RelaTkn(cadena);
              while (getTkn == false && error == false) {

                  txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción);
                  if (token > 1000) {
                      tk = token - 1000;
                  }
                  else {
                      tk = token;
                  }
                  tk = tk - 1;
                  int x = pila.top();
                  if (x < 100) {
                      producción = MatrizPredictiva2(pila.top(), tk);
                      txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción);
                      if (producción < 500) {
                          vector<int> produciones = pdts2(producción);
                          pila.pop();
                          //token = pila.top();
                          txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción);
                          for (int i = produciones.size(); i > 0; i--) {
                              pila.push(produciones[i - 1]);
                              
                          }
                      }
                      else {
                          txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción);
                          error = true;
                          ErrorSt(producción);
                      }
                  }
                  else {

                      token = token + 1002;
                      int x = pila.top();
                      if (x == token) {
                          antes = pila.top();
                          pila.pop();
                          getTkn = true;
                      }
                      else {
                          ErrorSt(edo);
                          error = true;
                      }

                  }

              }int x2 = pila.top();
              if (x2 == 1000) {

                  int xd = numero();
                  mensajeSiJALO(xd);
              }
              if (error == true) {
                  txtAS->AppendText("Error de sintaxis,No jaló :( ");
              }
              int xd = numero();
              mensajeSiJALO(xd);
          }

          /*
          while (i < toks.size()) {

              cadena = toks[i];
              token = RelaTkn(cadena);
              txtAS->AppendText("avers " + token);

              producción = MatrizPdt(producción, token);
              txtAS->AppendText("pdt " + producción);
              edo = MatrizPredictiva(producción, token);
              txtAS->AppendText("edo " + edo);

              if (edo >= 1000 && edo <= 1499) {
                  //Mandar mensaje
                  int xd = numero();
                  mensajeSiJALO(xd);
                  i++;
              }
              if (edo >= 1500 && edo <= 1600) {
                  ErrorSt(edo);
              }
              i++;
          }

          */
      }

    void analizarSVol2() {
        //MessageBox::Show("ANALISIS SINTACTICO HECHO, SI JALA");
        //string hola = tipotok;

        txtPila->AppendText("-----------------------------------------------------------------\r\n");
        txtAS->Clear();
        txtElementos->AppendText("-----------------------------------------------------------------\r\n");
        stack <int> pila;
        string cadena, c2, tkn;
        string textoRecu = this->toStandardString(this->txtDoc->Text);
        int numtkn = 0;

        int columna;
        int edo;
        int cd;
        int token = 0, tk = 0, producción = 0, antes = 0;
        bool getTkn = false, error = false;
        int tks;
        //Le metemos el valor de /0
        pila.push(1047);
        //pila.push(0);

        txtAS->AppendText(pila.top() + " | ");
        if (i <textoRecu.size() - 1 ){
            txtElementos->AppendText("token: " + token + "| tk: " + tk + "| prod: " + producción + " CONTADOR: " + i + " probando: " + textoRecu.size() + "\r\n");
            getTkn = false;
            error = false;
            
            //cadena = toks[i];
            
        //while (numtkn < 1500 && i < textoRecu.size() && error == false) {
        while(numtkn < 1500 && error == false){
            numtkn = analizarVol2();
            token = numtkn;

            getTkn = false;
            error = false;
            //pila.push(numtkn);
            //token = RelaTkn(cadena);

            //txtAS->AppendText("Pila: " + pila.top());

            while (getTkn == false && error == false) {
                //numtkn = analizarVol2();
                txtElementos->AppendText("token: " + numtkn + "| tk: " + tk + "| prod: " + producción + " CONTADOR" + i + "\r\n");
                tk = token - 1000;
                //if (numtkn > 1000) {
                //    tk = numtkn - 1000;
                //}
                //else {
                //    tk = numtkn;
                //}
                // 
                // 
                //tk = tk - 1;

                pila.push(tk);


                int x = pila.top();

                //if (x > 1000) {

                    //x = x - 1000;
                //    txtAS->AppendText("Pila: " + pila.top());

                //    txtElementos->AppendText("Esto vale x: "+ x + "\r\n");

                //}
                //else {
                txtElementos->AppendText("Esto vale x: " + x + "\r\n");

                //}
                if (x < 100) {
                    txtAS->AppendText("ENTRA AL IF X < 1000");
                    producción = MatrizPredictiva2(pila.top(), tk);
                    //producción = MatrizPredictiva( pila.top(),tk);
                    txtElementos->AppendText("token: " + numtkn + "| tk: " + tk + "| prod: " + producción + " CONTADOR" + i + "\r\n");
                    if (producción < 1500) {

                        txtAS->AppendText("ENTRA AL IF X < 1500");

                        vector<int> produciones = pdts2(producción);

                        pila.pop();

                        txtElementos->AppendText("token: " + numtkn + "| tk: " + tk + "| prod: " + producción + " CONTADOR" + i + "\r\n");
                        for (int con = produciones.size(); con > 0; con--) {

                            txtAS->AppendText("ENTRA AL FOR");
                            getTkn = true;
                            pila.push(produciones[con - 1]);
                            //i++;
                            //numtkn = 0;
                            //error = false;
                            //token = pila.top();
                            txtAS->AppendText("Pila: " + pila.top());

                        }
                    }
                    else {

                        txtAS->AppendText("NO ENTRA AL IF X < 1500");
                        txtElementos->AppendText("token: " + numtkn + "| tk: " + tk + "| prod: " + producción + " CONTADOR" + i + "\r\n");

                        error = true;
                        ErrorSt(producción);

                        //getTkn = true;
                        //numtkn = 0;
                        //error = false;
                    }
                }
                else {
                    txtAS->AppendText("NO ENTRA AL IF X < 1000");

                    //numtkn = numtkn + 1002;
                    //numtkn = numtkn + 2;

                    int x = pila.top();
                    txtElementos->AppendText("Esto vale x final: " + x + "\r\n");
                    txtElementos->AppendText("Esto vale token final: " + token + "\r\n");

                    if (x == token) {

                        txtAS->AppendText("ENTRA AL IF X == TOKEN EN NO IF X < 1000");

                        antes = pila.top();
                        pila.pop();
                        getTkn = true;
                        int nuevo = pila.top();
                        txtElementos->AppendText("Esto vale antes final: " + antes + "\r\n");
                        txtElementos->AppendText("Esto vale nuevo final: " + nuevo + "\r\n");

                        //numtkn = 0;
                        //error = false;
                    }
                    else {

                        txtAS->AppendText("NO ENTRA IF X == TOKEN");

                        ErrorSt(edo);
                        error = true;
                        //numtkn = 0;
                    }

                }

            }


            //mensajeSiJALO(xd);
        }

    }
        //Hola
        int x2 = pila.top();

        if (getTkn == true && x2 == 1047 ) {
            //if (x2 == 1047) {

            int xd = numero();
            mensajeSiJALO(xd);

        }
        if (error == true) {
            txtAS->AppendText("Error de sintaxis,No jaló :( ");
        }

        int xd = numero();
        /*
        while (i < toks.size()) {

            cadena = toks[i];
            token = RelaTkn(cadena);
            txtAS->AppendText("avers " + token);

            producción = MatrizPdt(producción, token);
            txtAS->AppendText("pdt " + producción);
            edo = MatrizPredictiva(producción, token);
            txtAS->AppendText("edo " + edo);

            if (edo >= 1000 && edo <= 1499) {
                //Mandar mensaje
                int xd = numero();
                mensajeSiJALO(xd);
                i++;
            }
            if (edo >= 1500 && edo <= 1600) {
                ErrorSt(edo);
            }
            i++;
        }

        */
    }

    void analizarSVol3() {
        
        txtElementos->AppendText("-----------------------------------------------------------------\r\n");
        i = 0;
        stack <int> pilas;
        int error = 0;
        ifstream infile;
        while (!pilas.empty()) {
            pilas.pop();
        }

        pilas.push(1047);
        pdts2(1);
        analisis = true;

        string textoRecu = this->toStandardString(this->txtDoc->Text);

        while (i < textoRecu.size() -1) {
            int estado;
            int prediccion; 
            int pdt;
            estado = analizarVol2();

            while(estado == 127){
                estado = analizarVol2();
                pilas.push(estado);
                if (analisis == false) {
                    break;

                }
            }
            pilas.push(estado);
            
            //if (estado > 1000) {
            //    estado = estado - 1000;
            //}

            while (analisis) {

                if (!(estado < 1000)) {
                    
                    prediccion = pilas.top();
                    pdt = prediccion - 1000;
                    pilas.pop();
                    txtElementos->AppendText("token: "+estado+ " predicción: "+prediccion+" contrador: "+i+"\r\n");

                    if (prediccion == 520) {
                        
                        prediccion = pilas.top(); pilas.pop();
                        txtElementos->AppendText("Predicción == 520");
                    }

                    if (prediccion <= 100 ) {
                        txtElementos->AppendText("Si predicción es menor o igual a 100");
                        if (MatrizPredictiva2(prediccion - 1, estado) < 1500) {
                            MessageBox::Show("" + pilas.top());
                            pdts2(MatrizPredictiva2(prediccion - 1, estado - 1000));
                            txtElementos->AppendText("Valor de matriz es menor de 1500");
                        }
                        else {
                            analisis = false;
                            error = error++;
                            txtAS->AppendText("Hay un error, es mayor a 1500");


                        }
                    }
                    else {
                        if (estado == 1047 && prediccion != 1047) {
                            txtElementos->AppendText("Si estado es 1047 y predicción distinta a 1047");
                            analisis = false;
                            error = error++;
                            txtAS->AppendText("Error, es 1047 ");
                            
                        }
                        else {
                            if (prediccion == estado) {
                                
                                txtElementos->AppendText("token: " + estado + " predicción: " + prediccion + "\r\n");
                                if (estado == 1047) {
                                    
                                    analisis = false;

                                }
                                else {
                                   
                                    estado = analizarVol2();
                                    pilas.push(estado);
                                    while (estado == 127) {
                                        estado = analizarVol2();
                                        pilas.push(estado);
                                        if (analisis == false) {
                                            break;

                                        }
                                    }

                                }
                            }
                            else {
                                analisis = false;
                                error = error++;
                                txtElementos->AppendText("token: " + estado + " predicción: " + prediccion + "\r\n");
                                txtAS->AppendText("Predicción distinta a estado ");
                                
                            }
                        }
                    }
                }
                else {

                    analisis = false;


                }

            }
        }
        
        if (error == 0) {
        
            int xd = numero();
            mensajeSiJALO(xd);
            MsIncreible(gcnew LAProyectoATMvol2::SuperBien);
        }
        else {
            txtAS->AppendText("Error de sintaxis,No jaló :( ");
            MsIncreible(gcnew LAProyectoATMvol2::SuperMal);
            
        }

        


    }

    vector<int> pdts(int p) {
        std::vector<int> pr = {};
        switch (p) {
        case 1:
            pr = { 2,4,5 };
            break;
        case 2:
            pr = { 1000,1001,1002,1001 };
            break;
        case 3:
            pr = {};
            break;
        case 4:
            pr = { 1004, 1001 };
            break;
        case 5:
            pr = { 1004, 6 , 1006 };
            break;
        case 6:
            pr = { 7 };
            break;
        case 7:
            pr = {8, 7};
            break;
        case 8:
            pr = { 5 };
            break;
        case 9:
            pr = {};
            break;
        case 10:
            pr = { 27,123 };
            break;
        case 11:
            pr = { 28,123 };
            break;
        case 12:
            pr = { 29,123 };
            break;
        case 13:
            pr = { 31,123 };
            break;
        case 14:
            pr = { 33,123 };
            break;
        case 15:
            pr = { 34,123 };
            break;
        case 16:
            pr = { 145,123 };
            break;
        case 17:
            pr = {};
            break;
        case 18:
            pr = { 129,2,130 };
            break;
        case 19:
            pr = { 7,109,11 };
            break;
        case 20:
            pr = { 101,8 };
            break;
        case 21:
            pr = { 9 };
            break;
        case 22:
            pr = {};
            break;
        case 23:
            pr = { 121,11,10,122 };
            break;
        case 24:
            pr = { 124,11,10 };
            break;
        case 25:
            pr = {};
            break;
        case 26:
            pr = { 12,14 };
            break;
        case 27:
            pr = { 15,13 };
            break;
        case 28:
            pr = { 118,11 };
            break;
        case 29:
            pr = {};
            break;
        case 30:
            pr = { 117,12 };
            break;
        case 31:
            pr = {};
            break;
        case 32:
            pr = { 16,17 };
            break;
        case 33:
            pr = { 116 };
            break;
        case 34:
            pr = {};
            break;
        case 35:
            pr = { 18,23 };
            break;
        case 36:
            pr = { 19,22 };
            break;
        case 37:
            pr = { 20,21 };
            break;
        case 38:
            pr = { 7 };
            break;
        case 39:
            pr = { 102 };
            break;
        case 40:
            pr = { 103 };
            break;
        case 41:
            pr = { 104 };
            break;
        case 42:
            pr = { 125 };
            break;
        case 43:
            pr = { 126 };
            break;
        case 44:
            pr = { 119,11,120 };
            break;
        case 45:
            pr = { 107,19 };
            break;
        case 46:
            pr = { 108,19 };
            break;
        case 47:
            pr = { 128,19 };
            break;
        case 48:
            pr = {};
            break;
        case 49:
            pr = { 105,18 };
            break;
        case 50:
            pr = { 106,18 };
            break;
        case 51:
            pr = {};
            break;
        case 52:
            pr = { 24,18 };
            break;
        case 53:
            pr = {};
            break;
        case 54:
            pr = { 110 };
            break;
        case 55:
            pr = { 115 };
            break;
        case 56:
            pr = { 111 };
            break;
        case 57:
            pr = { 112 };
            break;
        case 58:
            pr = { 113 };
            break;
        case 59:
            pr = { 114 };
            break;
        case 60:
            pr = { 137,119,11,120,2,26 };
            break;
        case 61:
            pr = { 138,2 };
            break;
        case 62:
            pr = {};
            break;
        case 63:
            pr = { 141,119,11,120,2 };
            break;
        case 64:
            pr = { 139,2,140,119,11,120 };
            break;
        case 65:
            pr = { 142,119,101,30,120 };
            break;
        case 66:
            pr = { 124,101,30 };
            break;
        case 67:
            pr = {};
            break;
        case 68:
            pr = { 143,119,11,32,120 };
            break;
        case 69:
            pr = { 124,11,32 };
            break;
        case 70:
            pr = {};
            break;
        case 71:
            pr = { 146,2 };
            break;
        case 72:
            pr = { 144,35,39,147,40 };
            break;
        case 73:
            pr = { 101,36 };
            break;
        case 74:
            pr = { 37 };
            break;
        case 75:
            pr = {};
            break;
        case 76:
            pr = { 121,102,38,122 };
            break;
        case 77:
            pr = { 124,102,38 };
            break;
        case 78:
            pr = {};
            break;
        case 79:
            pr = { 124,35,39 };
            break;
        case 80:
            pr = {};
            break;
        case 81:
            pr = { 132 };
            break;
        case 82:
            pr = { 133 };
            break;
        case 83:
            pr = { 134 };
            break;
        case 84:
            pr = { 136 };
            break;
        case 85:
            pr = { 135 };
            break;
        }
        return pr;
    }

    vector<int> pdts2(int p) {
        std::vector<int> pr = {};
        switch (p) {
        case 1:
            pr = { 2 , 1  };
            break;
        case 2:
            pr = { 1, 1001, 1003, 1000 };
            break;
        case 3:
            pr = {};
            break;
        case 4:
            pr = { 1005, 3 , 1004 , 1003 , 1002 };
            break;
        case 5:
            pr = { 4 , 5 };
            break;
        case 6:
            pr = { 4 , 6 };
            break;
        case 7:
            pr = { 3 };
            break;
        case 8:
            pr = {};
            break;
        case 9:
            pr = {4 , 14};
            break;
        case 10:
            pr = { 4 , 1001 , 19 };
            break;
        case 11:
            pr = { 4 , 1001 , 21 };
            break;
        case 12:
            pr = { 4 , 1001 , 22 };
            break;
        case 13:
            pr = { 4 , 23 };
            break;
        case 14:
            pr = { 4 , 25 };
            break;
        case 15:
            pr = { 4 , 1001 , 27 };
            break;
        case 16:
            pr = { 4 , 7 };
            break;
        case 17:
            pr = { 4 , 1001 , 1013 };
            break;
        case 18:
            pr = {};
            break;
        case 19:
            pr = { 1005 , 4 , 1004 };
            break;
        case 20:
            pr = { 1001 , 13 , 1017 , 8 , 9 , 1012 };
            break;
        case 21:
            pr = { 8 , 9 , 1016 };
            break;
        case 22:
            pr = {};
            break;
        case 23:
            pr = { 8 , 10 , 1013 };
            break;
        case 24:
            pr = { 11 };
            break;
        case 25:
            pr = {};
            break;
        case 26:
            pr = { 1019 , 12 , 1037 , 1018 };
            break;
        case 27:
            pr = { 1037 , 1016 };
            break;
        case 28:
            pr = { 1020 };
            break;
        case 29:
            pr = { 1021 };
            break;
        case 30:
            pr = { 1022 };
            break;
        case 31:
            pr = { 1023 };
            break;
        case 32:
            pr = { 1024 };
            break;
        case 33:
            pr = { 1001 , 28 , 1025 , 15 };
            break;
        case 34:
            pr = { 16 , 1003};
            break;
        case 35:
            pr = { 17 };
            break;
        case 36:
            pr = { };
            break;
        case 37:
            pr = { 1019, 18 , 28 , 1018 };
            break;
        case 38:
            pr = { 18 , 28 , 1016 };
            break;
        case 39:
            pr = {};
            break;
        case 40:
            pr = {20 , 4 , 1043 , 28 ,1042 , 1007};
            break;
        case 41:
            pr = { 4 , 1014 };
            break;
        case 42:
            pr = {};
            break;
        case 43:
            pr = { 4 , 1043 , 28 , 1042 , 1008};
            break;
        case 44:
            pr = {1043 , 28 , 1042 , 1008};
            break;
        case 45:
            pr = { 1001 , 1043 , 24 , 1003 , 1042 , 1010 };
            break;
        case 46:
            pr = { 24,1003,1016 };
            break;
        case 47:
            pr = {};
            break;
        case 48:
            pr = { 1001,1043,26,28,1042,1011 };
            break;
        case 49:
            pr = { 26,28,1016 };
            break;
        case 50:
            pr = {};
            break;
        case 51:
            pr = { 31,32 };
            break;
        case 52:
            pr = { 30,1044 };
            break;
        case 53:
            pr = {};
            break;
        case 54:
            pr = { 34,33 };
            break;
        case 55:
            pr = { 1046 };
            break;
        case 56:
            pr = {};
            break;
        case 57:
            pr = { 35,36 };
            break;
        case 58:
            pr = { 36,40 };
            break;
        case 59:
            pr = {};
            break;
        case 60:
            pr = { 37,38 };
            break;
        case 61:
            pr = { 37,38,1029 };
            break;
        case 62:
            pr = { 37,38,1030 };
            break;
        case 63:
            pr = {};
            break;
        case 64:
            pr = { 39,41 };
            break;
        case 65:
            pr = { 41,1026 };
            break;
        case 66:
            pr = { 41,1027 };
            break;
        case 67:
            pr = { 41,1028 };
            break;
        case 68:
            pr = {};
            break;
        case 69:
            pr = { 1031 };
            break;
        case 70:
            pr = { 1032 };
            break;
        case 71:
            pr = { 1033 };
            break;
        case 72:
            pr = { 1034 };
            break;
        case 73:
            pr = { 1035 };
            break;
        case 74:
            pr = { 1036 };
            break;
        case 75:
            pr = { 15 };
            break;
        case 76:
            pr = { 1037 };
            break;
        case 77:
            pr = { 1038 };
            break;
        case 78:
            pr = { 1039 };
            break;
        case 79:
            pr = { 1040 };
            break;
        case 80:
            pr = { 1041 };
            break;
        case 81:
            pr = { 1043,28,1042 };
            break;
  
        }
        return pr;
    }


    //INVERTIR CADENA
    // 
    string invcadena(string cad) {
        string invertido;
        for (int pos = cad.size() - 1; pos >= 0; pos--) {
            invertido.append(cad.substr(pos, 1));
        }
        return invertido;
    }
    
    //PILA
    
    //MATRIZ PREDICTIVA
    // 
    int MatrizPredictiva(int edo, int columna) {
        int valor;
        int mp[50][48]{
        
            {	1,	1501,	1501,	1,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	},
            {	2,	1502,	1502,	3,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	},
            {	1504,	1504,	1504,	4,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	},
            {	1505,	1505,	1505,	1505,	5,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	},
            {	1506,	6,	7,	1506,	6,	7,	6,	6,	6,	6,	6,	6,	6,	6,	7,	7,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	},
            {	1507,	7,	8,	1507,	7,	8,	7,	7,	7,	7,	7,	7,	7,	7,	8,	8,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	},
            {	1508,	8,	9,	1508,	8,	9,	8,	8,	8,	8,	8,	8,	8,	8,	9,	9,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	},
            {	1511,	11,	20,	1511,	20,	20,	12,	13,	14,	15,	16,	17,	18,	19,	20,	20,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	},
            {	1521,	1521,	1521,	1521,	21,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	},
            {	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	22,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	},
            {	1523,	23,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	},
            {	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	25,	24,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	},
            {	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	26,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	},
            {	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	27,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	},
            {	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	28,	1528,	1528,	1528,	1528,	1528,	1528,	29,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	},
            {	1530,	30,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	},
            {	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	32,	1531,	1531,	1531,	1531,	1531,	1531,	31,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	},
            {	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	33,	34,	35,	36,	37,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	},
            {	1538,	38,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	},
            {	1539,	39,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	},
            {	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	40,	1540,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	41,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	},
            {	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	42,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	},
            {	1543,	43,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	43,	43,	43,	43,	43,	43,	1543,	43,	1543,	1543,	1543,	},
            {	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	44,	1544,	1544,	1544,	1544,	1544,	1544,	45,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	},
            {	1546,	1546,	1546,	1546,	1546,	1546,	46,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	},
            {	1547,	1547,	48,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	47,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	},
            {	1549,	1549,	1549,	1549,	1549,	1549,	1549,	49,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	},
            {	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	50,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	},
            {	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	51,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	},
            {	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	52,	1552,	1552,	1552,	1552,	1552,	},
            {	1553,	53,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	},
            {	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	54,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	55,	1554,	1554,	1554,	1554,	},
            {	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	56,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	},
            {	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	57,	1557,	1557,	1557,	1557,	1557,	},
            {	1558,	58,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	58,	58,	58,	58,	58,	58,	1558,	58,	1558,	1558,	1558,	},
            {	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	59,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	60,	1559,	1559,	1559,	1559,	},
            {	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	61,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	},
            {	1562,	62,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	62,	62,	62,	62,	62,	62,	1562,	62,	1562,	1562,	1562,	},
            {	1563,	1563,	64,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	64,	1563,	1563,	1563,	1563,	1563,	1563,	64,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	64,	1563,	1563,	63,	1563,	},
            {	1565,	65,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	65,	65,	65,	65,	65,	65,	1565,	65,	1565,	1565,	1565,	},
            {	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	67,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	67,	1566,	66,	67,	1566,	},
            {	1568,	68,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	1568,	68,	68,	68,	68,	68,	68,	1568,	68,	1568,	1568,	1568,	},
            {	1570,	70,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	1570,	70,	70,	70,	70,	70,	70,	1570,	1570,	1570,	1570,	1570,	},
            {	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	1571,	72,	1571,	1571,	1571,	1571,	1571,	1571,	72,	1571,	1571,	1571,	1571,	1571,	1571,	71,	71,	71,	71,	71,	71,	1571,	1571,	1571,	1571,	1571,	1571,	72,	1571,	72,	72,	1571,	},
            {	1573,	73,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	1573,	73,	73,	73,	73,	73,	73,	1573,	1573,	1573,	1573,	1573,	},
            {	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	1574,	76,	1574,	1574,	1574,	1574,	74,	75,	76,	76,	76,	76,	76,	76,	1574,	1574,	1574,	1574,	1574,	1574,	76,	1574,	76,	76,	1574,	},
            {	1577,	77,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	1577,	77,	77,	77,	77,	77,	77,	1577,	1577,	1577,	1577,	1577,	},
            {	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	1578,	81,	1578,	1578,	1578,	1578,	1578,	1578,	81,	1578,	78,	79,	80,	81,	81,	81,	81,	81,	81,	81,	81,	1578,	1578,	1578,	1578,	1578,	1578,	81,	1578,	1578,	1578,	1578,	},
            {	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	82,	83,	84,	85,	86,	87,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	1582,	},
            {	1588,	88,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	1588,	89,	90,	91,	92,	93,	94,	1588,	1588,	1588,	1588,	1588,	}

        };
        
        valor = mp[edo][columna];

    return valor;
    }
    
    int MatrizPredictiva2(int edo, int columna) {
        int valor;
        int mp[50][48]{
      //    1000    1001    1002  1003   1004   1005    1006    1007    1008    1009    1010	 1011   1012    1013     1014   1015    1016     1017    1018    1019   1020    1021    1022    1023    1024    1025    1026    1027    1028     1029     1030   1031    1032    1033   1034    1035   1036    1037     1038    1039   1040    1041     1042    1043    1044     1045    1046   1047
      //    lib     ;       class   id	 {       }	    loop    if      while 	 do     input   output  def    break    else   eval	     , 	     of	     [	     ]	    int	  float    char    bool   string    "="	    *	    /	     %	    "+	     "-	    =='	    !=	    <	    <=	    >	   >=	ctentera ctereal ctnot  ctechar ctestring	(	    )	   &&	    ||	     !	    $ 
            {   1,  1501,     1,  1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501,	1501},
            {   2,  1502,     3,  1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502,	1502},
            {1503,  1503,     4,  1503, 1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503,	1503},
            {1504,     8,  1504,     5,	  6,	   8,	   5,	   5,	   5,	   5,	   5,	   5,	   5,	   5,	   8,	   8,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504,	1504},
            {1505,     8,  1505,	 7,	  7,	   8,	   7,	   7,	   7,	   7,	   7,	   7,	   7,	   7,	   8,	   8,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505,	1505},
            {1506,    18,  1506,     9,	 18,	  18,	  15,	  10,	  11,	  12,	  13,	  14,	  16,	  17,	  18,	  18,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506,	1506},
            {1507,  1507,  1507,  1507,	 19,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507,	1507},
            {1508,  1508,  1508,  1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	  20,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508,	1508},
            {1511,  1511,  1511,  1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	  21,	  22,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511,	1511},
            {1521,  1521,  1521,    23,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521,	1521},
            {1522,  1522,  1522,  1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	  25,	  25,	  24,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522,	1522},
            {1523,  1523,  1523,  1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	  26,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523,	1523},
            {1524,  1524,  1524,  1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	  27,	  28,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524,	1524},
            {1526,  1526,  1526,  1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	  29,	  30,	  31,	  32,	  33,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526,	1526},
            {1527,  1527,  1527,    34,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527,	1527},
            {1528,  1528,  1528,    35,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528,	1528},
            {1530,    37,  1530,  1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	1530,	  37,	1530,	  36,	 37,	1530,	1530,	1530,	1530,	1530,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	  37,	1530,	1530,	1530,	1530,	1530,	1530,	  37,	  37,	  37,	1530,	1530},
            {1531,  1531,  1531,  1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	  38,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531,	1531},
            {1533,  1533,  1533,  1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	  39,	1533,	1533,	 40,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533,	1533},
            {1538,  1538,  1538,  1538,	1538,	1538,	1538,	  41,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538,	1538},
            {1539,    43,  1539,  1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	  42,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539,	1539},
            {1540,  1540,  1540,  1540,	1540,	1540,	1540,	1540,	 44,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540,	1540},
            {1542,  1542,  1542,  1542,	1542,	1542,	1542,	1542,	1542,	  45,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542,	1542},
            {1543,  1543,  1543,  1543,	1543,	1543,	1543,	1543,	1543,	1543,	  46,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543,	1543},
            {1544,  1544,  1544,  1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	  47,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	1544,	  48,	1544,	1544,	1544,	1544},
            {1546,  1546,  1546,  1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	  49,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546,	1546},
            {1547,  1547,  1547,  1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	  50,   1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	1547,	  51,	1547,	1547,	1547,	1547},
            {1549,  1549,  1549,  1549,	1549,	1549,	  52,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549,	1549},
            {1550,  1550,  1550,    53,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	537,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	1550,	  53,	  53,	  53,	  53,	  53,	  53,	1550,	1550,	1550,	  53,	1550},
            {1551,    55,  1551,  1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	  55,	1551,	1551,	  55,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	1551,	  55,	1551,	  54,	1551,	1551},
            {1552,  1552,  1552,    56,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	1552,	  56,	  56,	  56,	  56,	  56,	  56,	  56,	1552,	1552,	  56,	1552},
            {1553,    58,  1553,  1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	  58,	1553,	1553,	  58,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	1553,	  58,	  57,	  58,	1553,	1553},
            {1554,  1554,  155,     59,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	1554,	  59,	  59,	  59,	  59,	  59,	  59,	  59,	1554,	1554,	  59,	1554},
            {1556,  1556,  1556,    61,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	1556,	  61,	  61,	  61,	  61,	  61,	  61,	  61,	1556,	1556,	  60,	1556},
            {1557,  1557,  1557,    62,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	1557,	  62,	  62,	  62,	  62,	  62,	  62,	  62,	1557,	1557,	1557,	1557},
            {1558,    64,  1558,  1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	  64,	1558,	1558,	  64,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	1558,	  63,	  63,	  63,	  63,	  63,	  63,	1558,	1558,	1558,	1558,	1558,	1558,	  64,	  64,	  64,	1558,	1558},
            {1559,  1559,  1559,    65,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	1559,	  65,	  65,	  65,	  65,	  65,	  65,	1559,	1559,	1559,	1559,	1559},
            {1561,    68,  1561,  1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	  68,	1561,	1561,	  68,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	1561,	  66,	  67,	  68,	  68,	  68,	  68,	  68,	  68,	1561,	1561,	1561,	1561,	1561,	1561,	  68,	  68,	  68,	1561,	1561},
            {1562,  1562,  1562,    69,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	1562,	  69,	  69,	  69,	  69,	  69,	  69,	1562,	1562,	1562,	1562,	1562},
            {1563,    73,  1563,  1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	1563,	  73,	1563,	1563,	  73,	1563,	1563,	1563,	1563,	1563,	1563,	  70,	  71,	  72,	  73,	  73,	  73,	  73,	  73,	  73,	  73,	  73,	1563,	1563,	1563,	1563,	1563,	1563,	  73,	  73,	  73,	1563,	1563},
            {1565,  1565,  1565,  1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	  74,	  75,	  76,	  77,	  78,	  79,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565,	1565},
            {1566,  1566,  1566,   80,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	1566,	  81,	  82,	  83,	  84,	  85,	  86,	1566,	1566,	1566,	1566,	1566}


        };

        valor = mp[edo][columna];

        return valor;
    }

    //Matriz de producción
    int MatrizPdt(int edo, int columna) {
        int MTP[100][100] = { { 2 , 4 , 5 },    //Program
                            { 1000 , 1001, 1002, 1001 }, //A
                            {-1},
                            { 1003 ,  1001 },   //B
                            { 1004, 6 , 1005 }, //C
                            {7},    //ESTATUTOS
                            { 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 9 },    //E
                            {7},    //E'
                            {-1},
                            { 21 , 9 },  //ESTATUTOS
                            { 38 , 1002 },   //ESTATUTO_SIMPLE ASIG
                            { 46 , 1002 },   //ESTATUTO_SIMPLE if
                            { 49 , 1002 },   //ESTATUTO_SIMPLE while
                            { 50 , 1002 },   //ESTATUTO_SIMPLE do
                            { 51 , 1002 },   //ESTATUTO_SIMPLE read
                            { 56 , 1002 },   //ESTATUTO_SIMPLE write
                            { 61 , 1002 },   //ESTATUTO_SIMPLE loop
                            { 22 , 1002 },   //ESTATUTO_SIMPLE DECLARA
                            {1013},          //break
                            {-1},
                            {1004 , 6 ,1005},   //
                            { 1012 , 23 , 1016 , 33 , 34 , 35 , 36 , 37 }, //DECLARA
                            { 30, 24 },      //a_declara
                            { 1017, 23 },    //a_declara'
                            { 1023 , 27 , 1024 },   //DIM
                            { 1037 , 28 },           //C_DIM
                            { 1018 , 27 },           //C'
                            { 1001 , 31 },           //ID_DIM
                            {26},                    //A_DIM
                            {1018},     //TIPO int
                            {1019},     //TIPO float
                            {1020},     //TIPO char
                            {1021},     //TIPO bool
                            {1018},     //TIPO string
                            { 39, 1025, 62 },   //EST_ASIG
                            { 1001, 40 },   //ASIG
                            {42},   //A_ASIG
                            { 1023, 43 ,1024 },     //DIM_ASIG
                            { 62 , 44 },    //A_DIMA
                            { 1017, 43 },   //A_DIMA
                            {-1},
                            { 1006 , 1042 , 62 , 1043 , 6 , 47 },     //EST_IF
                            { 1014, 6 },    //EI
                            {-1},
                            { 1017 , 1042 , 62 , 1043 , 6 },    //EST_WHILE
                            { 1008 , 6 , 1015 , 1042 , 62 , 1043 },  //EST_DO
                            { 1009 , 52 },   //EST_READ
                            { 1042 , 53 , 1043 },   //RD
                            { 1001 , 24 },   //C_READ
                            { 1017 , 53 },   //C_READ'
                            {-1},
                            { 1010, 57 },    //EST_WRITE
                            { 1042, 58 , 1043 },    //WT
                            { 62, 59 },     //C_WRITE
                            { 1017 , 58 },   //C_WRITE'
                            {-1},
                            { 1011 , 6 },    //EST_LOOP
                            { 65 , 63 },     //EXPR
                            { 1046 , 62 },   //EXPR'
                            {-1},
                            { 69 , 66 },     //EXPR2
                            { 1045 , 65 },   //EXPR2'
                            {-1},
                            {70},            //EXPR3
                            {1044 , 70},     //EXPR3
                            { 73 , 71 },     //EXPR4
                            { 82 , 83 , 84 , 85 , 86 , 87 , 73 },   //EXP
                            {-1},
                            { 77 , 74 , 75 , 76 },  //EXPR5
                            { 1023 , 73 },  //SIGNO
                            { 1024 , 73 },  //SIGNO   
                            { 88 , 89 , 90 , 91 , 92 , 93 , 94 , 78 , 79 , 80 , 81 },   //TERM
                            { 1026 , 77 },  //SIG
                            { 1027 , 77 },  //SIG
                            { 1028 , 77 },  //SIG
                            {1031},     //OPREL
                            {1032},     //OPREL
                            {1033},     //OPREL
                            {1034},     //OPREL
                            {1035},     //OPREL
                            {1036},     //OPREL
                            {39},       //FACT
                            {1037},     //FACT
                            {1038},     //FACT
                            {1039},     //FACT
                            {1040},     //FACT
                            {1041},     //FACT
                            {1042 , 62 , 1043}  //FACT
                            
        };
        int val = MTP[edo][columna];

        return val;
    }

    //Método para Relacionar el valor de la columna
    int RelacionaToken(string c) {
        int retorna = 32;
        //Análizar si es una letra minuscula
        if (c == "lib") {
            retorna = 1000;
        }
        if (c == "id") {
            retorna = 1001;
        }
        if (c == ";") {
            retorna = 1002;
        }
        if (c == "class") {
            retorna = 1003;
        }
        if (c == "{") {
            retorna = 1004;
        }
        if (c == "}") {
            retorna = 1005;
        }
        if (c == "if") {
            retorna = 1006;
        }
        if (c == "while") {
            retorna = 1007;
        }
        if (c == "do") {
            retorna = 1008;
        }
        if (c == "input") {
            retorna = 1009;
        }
        if (c == "output") {
            retorna = 1010;
        }
        if (c == "loop") {
            retorna = 1011;
        }
        if (c == "def") {
            retorna = 1012;
        }
        if (c == "break") {
            retorna = 1013;
        }
        if (c == "else") {
            retorna = 1014;
        }
        if (c == "eval") {
            retorna = 1015;
        }
        if (c == "of") {
            retorna = 1016;
        }
        if (c == ",") {
            retorna = 1017;
        }
        if (c == "int") {
            retorna = 1018;
        }
        if (c == "float") {
            retorna = 1019;
        }
        if (c == "char") {
            retorna = 1020;
        }
        if (c == "bool") {
            retorna = 1021;
        }
        if (c == "string") {
            retorna = 1022;
        }
        if (c == "[") {
            retorna = 1023;
        }
        if (c == "]") {
            retorna = 1024;
        }
        if (c == "=") {
            retorna = 1025;
        }
        if (c == "*") {
            retorna = 1026;
        }
        if (c == "/") {
            retorna = 1027;
        }
        if (c == "%") {
            retorna = 1028;
        }
        if (c == "+") {
            retorna = 1029;
        }
        if (c == "-") {
            retorna = 1030;
        }
        if (c == "==") {
            retorna = 1031;
        }
        if (c == "!=") {
            retorna = 1032;
        }
        if (c == "<") {
            retorna = 1033;
        }
        if (c == "<=") {
            retorna = 1034;
        }
        if (c == ">") {
            retorna = 1035;
        }
        if (c == ">=") {
            retorna = 1036;
        }
        if (c == "cteentera") {
            retorna = 1037;
        }
        if (c == "ctreal") {
            retorna = 1038;
        }
        if (c == "ctenotacion") {
            retorna = 1039;
        }
        if (c == "ctecaracter") {
            retorna = 1040;
        }
        if (c == "ctestring") {
            retorna = 1041;
        }
        if (c == "(") {
            retorna = 1042;
        }
        if (c == ")") {
            retorna = 1043;
        }
        if (c == "!") {
            retorna = 1044;
        }
        if (c == "&&") {
            retorna = 1045;
        }
        if (c == "||") {
            retorna = 1046;
        }
        if (c == "/0") {
            retorna = 1047;
        }
        
        return retorna;
    }

    //Método para relacionar el token con su valor en la tabla
    int RelaTkn(string c) {
        int retorna = 49;
        if (c == "1000") {  //lib
            retorna = 0;
        }
        if (c == "1001") {  //id
            retorna = 1;
        }
        if (c == ";") {     
            retorna = 2;
        }
        if (c == "1003") {  //class
            retorna = 3;
        }
        if (c == "{") {
            retorna = 4;
        }
        if (c == "}") {
            retorna = 5;
        }
        if (c == "1006") {  //if
            retorna = 6;
        }
        if (c == "1007") {  //while
            retorna = 7;
        }
        if (c == "1008") {  //do
            retorna = 8;
        }
        if (c == "1009") {  //input
            retorna = 9;
        }
        if (c == "1010") {  //output
            retorna = 10;
        }
        if (c == "1011") {  //loop
            retorna = 11;
        }
        if (c == "1012") {  //def
            retorna = 12;
        }
        if (c == "1013") {  //break
            retorna = 13;
        }
        if (c == "1014") {
            retorna = 14;
        }
        if (c == "1015") {
            retorna = 15;
        }
        if (c == "1016") {
            retorna = 16;
        }
        if (c == ",") {
            retorna = 17;
        }
        if (c == "1018") {
            retorna = 18;
        }
        if (c == "1019") {
            retorna = 19;
        }
        if (c == "1020") {
            retorna = 20;
        }
        if (c == "1021") {
            retorna = 21;
        }
        if (c == "1022") {
            retorna = 22;
        }
        if (c == "[") {
            retorna = 23;
        }
        if (c == "]") {
            retorna = 24;
        }
        if (c == "=") {
            retorna = 25;
        }
        if (c == "*") {
            retorna = 26;
        }
        if (c == "/") {
            retorna = 27;
        }
        if (c == "%") {
            retorna = 28;
        }
        if (c == "+") {
            retorna = 29;
        }
        if (c == "-") {
            retorna = 30;
        }
        if (c == "==") {
            retorna = 31;
        }
        if (c == "!=") {
            retorna = 32;
        }
        if (c == "<") {
            retorna = 33;
        }
        if (c == "<=") {
            retorna = 34;
        }
        if (c == ">") {
            retorna = 35;
        }
        if (c == ">=") {
            retorna = 36;
        }
        if (c == "1037") {  //cteentera
            retorna = 37;
        }
        if (c == "1038") {  //ctereal
            retorna = 38;
        }
        if (c == "1039") {  //ctenotacion
            retorna = 39;
        }
        if (c == "1040") {  //ctecaracter
            retorna = 40;
        }
        if (c == "1041") {  //ctestring
            retorna = 41;
        }
        if (c == "(") {
            retorna = 42;
        }
        if (c == ")") {
            retorna = 43;
        }
        if (c == "!") {
            retorna = 44;
        }
        if (c == "&&") {
            retorna = 45;
        }
        if (c == "||") {
            retorna = 46;
        }
        if (c == "/0") {
            retorna = 47;
        }
        return retorna;
    }

    //Método de errores sintacticos
    void ErrorSt(int e) {
        //Con un switch se identificará que tipo de error es
        switch (e)
        {
        case 1501:
            txtError->AppendText("Error 1501: Error de Sintaxis, esperaba un token lib, revisa tu código tqm \r\n");
            break;
        case 1502:
            txtError->AppendText("Error 1502: Error de sintaxis, esperaba un token lib o class, creo que tuviste un dedazo, no te preocupes\r\n");
            break;
        case 1504:
            txtError->AppendText("Error 1504: Error de sintaxis, esperaba un token class, tranqui, todos nos equivocamos\r\n");
            break;
        case 1505:
            txtError->AppendText("Error 1505: Error de sintaxis, esperaba llave que abre, revisa bien\r\n");
            break;
        case 1506:
            txtError->AppendText("Error 1506: Esperaba un ESTATUTO (id, ; , llave que abre o cierra, if, while, do, input, output, def, break, else, eval)  \r\n");
            break;
        case 1507:
            txtError->AppendText("Error 1507: Esperaba un ESTATUTO (id, ; , llave que abre o cierra, if, while, do, input, output, def, break, else, eval)  \r\n");
            break;
        case 1508:
            txtError->AppendText("Error 1508: Esperaba un ESTATUTO (id, ; , llave que abre o cierra, if, while, do, input, output, def, break, else, eval)  \r\n");
            break;
        case 1511:
            txtError->AppendText("Error 1511: Me parece que debeía ir un estatuto simple (id, ; , llave que abre o cierra, if, while, do, input, output, def, break, else, eval)  \r\n");
            break;
        case 1521:
            txtError->AppendText("Error 1521: Esperaba llave que abre, tranquilo tqm <3  \r\n");
            break;
        case 1522:
            txtError->AppendText("Error 1522: Esperaba def para declarar, Amigue solo quede un esperancee\r\n");
            break;
        case 1523:
            txtError->AppendText("Error 1523: Después de def, esperaba un identificador, amigue, recuerda que todes tenemes un nombre\r\n");
            break;
        case 1524:
            txtError->AppendText("Error 1524: Siento yo que debería ir una coma, o tal vez of, no me hagas mucho caso, es broma SII\r\n");
            break;
        case 1526:
            txtError->AppendText("Error 1526: Yo digo que va un [ , hazme case pequeñee \r\n");
            break;
        case 1527:
            txtError->AppendText("Error 1527: Debería ir una constante entera, ya me dio ansiedad :( \r\n");
            break;
        case 1528:
            txtError->AppendText("Error 1528: Fijate bien perre.!!! falta una comaaa, o a lo mejor un ] \r\n");
            break;
        case 1530:
            txtError->AppendText("Error 1530: Espero un identificador amix\r\n");
            break;
        case 1531:
            txtError->AppendText("Error 1531: Falta un ] o ve a escuchar Shake it OFf de Taylor Swift, porque te puede faltar un OF \r\n");
            break;
        case 1533:
            txtError->AppendText("Error 1533: Ocupo saber que tipo de variable tenemos ¿los perros no van con los gatos o si? \r\n");
            break;
        case 1538:
            txtError->AppendText("Error 1538: A ver si ya le pones nombre a las cosasss, y como dijo TS, I knew you were trouble  \r\n");
            break;
        case 1539:
            txtError->AppendText("Error 1538, ya ve checatee, ponle nombree, hazme casoooooo \r\n");
            break;
        case 1540:
            txtError->AppendText("Error 1540: ocupo un [ para funcionar, o maybe alguno de los operadores (+, - , * , /), sino, = o ==, revisa tal vez <, <=, > o, >=  \r\n");
            break;
        case 1542:
            txtError->AppendText("Error 1542: Espero un [ ,para signar, cantemos juntos, por eso esperaba con la carita empapada...  \r\n");
            break;
        case 1543:
            txtError->AppendText("Error 1543: Me falta un identificador :( o puede ser una constante, ya sea entera, real, de notación o string, igual ( ó ! \r\n");
            break;
        case 1544:
            txtError->AppendText("Error 1544: Sabias que ocupamos separar las cosas ¿cómo lo hacemos? CON UNA COMAAAA, ó cierra el corcheteee\r\n");
            break;
        case 1546:
            txtError->AppendText("Error 1546: Quieres condicionar, pero te falta un if amix :(  \r\n");
            break;
        case 1547:
            txtError->AppendText("Error 1547: ¿Conoces la canción Sombebody ELSE? pues te falta un ELSE para poner algo más, o cieralo con un ; \r\n");
            break;
        case 1549:
            txtError->AppendText("Error 1549: Quieres darle vueltas al mismo asunto y no tienes un WHILE, tas muy mal amix\r\n");
            break;
        case 1550:
            txtError->AppendText("Error 1550: te falta un do, no se me ocurrió nada para poner, solo te falta eso, dale \r\n");
            break;
        case 1551:
            txtError->AppendText("Error 1551: nos falta un intput amigo, échale coco :( \r\n");
            break;
        case 1552:
            txtError->AppendText("Error 1552: Despues de input va un ( , vamos tu puedess  \r\n");
            break;
        case 1553:
            txtError->AppendText("Error 1553: Nos falta un identificador, ¿vamos a tener esta conversación de nuevo? \r\n");
            break;
        case 1554:
            txtError->AppendText("Error 1554: Creo que te falta una coma por ahí después del identificador, ó cierralo con parentesis si ya no vas a poner nada\r\n");
            break;
        case 1556:
            txtError->AppendText("Error 1556: Quieres imprimir y ocupas poner la la palabra reservada output\r\n");
            break;
        case 1557:
            txtError->AppendText("Error 1557: Después de un output, va un parentesis que abre \r\n");
            break;
        case 1558:
            txtError->AppendText("Error 1558: Espero un identificador, alguna de las constantes, u otro parentesis que abre despues de parentesis que abre \r\n");
            break;
        case 1559:
            txtError->AppendText("Error 1559: Espero una coma para separar, un parentesis de cierre si ya no quieres agregar nada bb, ó !, tqm \r\n");
            break;
        case 1561:
            txtError->AppendText("Error 1561: Quieres poner un loop y no lo pones :(  \r\n");
            break;
        case 1562:
            txtError->AppendText("Error 1562: Esperaba un identificador, alguna constante, parentesis que abre, o ! \r\n");
            break;
        case 1563:
            txtError->AppendText("Error 1563: Esperaba un ||, sino, puede seguir un ) , ; , una coma ó in ] \r\n");
            break;
        case 1565:
            txtError->AppendText("Error 1565: Esperaba un identificador, alguna constante o un ! después de || \r\n");
            break;
        case 1566:
            txtError->AppendText("Error 1566: Esperaba un && ó sigue un ||, ) , ó ]  \r\n");
            break;
        case 1568:
            txtError->AppendText("Error 1568: Esperaba un identificador, alguna constante, un ( ó !\r\n");
            break;
        case 1570:
            txtError->AppendText("Error 1570: Esperaba un identificador, ó alguna constante \r\n");
            break;
        case 1571:
            txtError->AppendText("Error 1571: Esperaba == , != , < , <= , > , >= , ó puede seguir ), ],&& ,||, ó una coma  \r\n");
            break;
        case 1573:
            txtError->AppendText("Error 1573: Esperaba un identificador, alguna constante o el (\r\n");
            break;
        case 1574:
            txtError->AppendText("Error 1574: Esperaba un operador + ó -, o puede seguir ], == , != , < , <= , > , >= , ), &&,|| \r\n");
            break;
        case 1577:     
            txtError->AppendText("Error 1577: Esperaba un identificador, alguna constante o ( \r\n");
            break;
        case 1578:
            txtError->AppendText("Error 1578: Esperaba un operador *, /, % , ó puede seguir, +,-,== , != , < , <= , > , >= , ), ], ó coma \r\n");
            break;
        case 1582:
            txtError->AppendText("Errror 1582: Esperaba == , != , < , <= , > , >= \r\n");
            break;
        case 1588:
            txtError->AppendText("Error 1588: Esperaba un identificador, alguna constante ó, un ( \r\n");
            break;
        default:
            break;
        }
    }

    //Numero aleatorio entre 0 y 5
    // 
    int numero() {
        int valor = 0;

        valor = (rand() % 5);

        return valor;
    }

    //Este mensaje indica si jaló o no el programa
    void mensajeSiJALO(int numero) {
        if (numero == 0) {
            txtAS->AppendText("¿Eres Chayanne? o por qué todo te sale bien. SI JALÓ");
        }
        if (numero == 1) {
            txtAS->AppendText("Eres mi programador fav. SI JALÓ");
        }
        if (numero == 2) {
            txtAS->AppendText("Le sabeesss SI JALÓ");
        }
        if (numero == 3) {
            txtAS->AppendText("Naaambre, a veces eres una cosa pero barbara. SI JALÓ");
        }
        if (numero == 4) {
            txtAS->AppendText("Minioms,hablando de que si jala. SI JALÓ");
        }
        if (numero == 5) {
            txtAS->AppendText("Profe Pepe, páseme plis y lo tqm +. SI JALÓ");
        }
    }


//___________________________________________________________________________________________________________________________________________________________________--
// 
    //ANALIZADOR SEMANTICO
    void semantico() {
        int accion = 0;
        int token;
        bool declara = false;
        bool of = false;
        

        string textoRecu = this->toStandardString(this->txtDoc->Text);

        while (i < textoRecu.size() - 1) {
        
            token = analizarVol2();

            if (token == 1012) {
                declara = true;
            }
            if (token == 1017) {
                of = true;
            }
                
            if (declara == true) {
                accion = 1;
                accionesSemanticas(accion, token);
            }

            if (of) {
                accion = 2;
                //accionesSemanticas(accion);

                declara = false;
                of = false;
            }

            if (token == 1000 && accion == 2) {
                accionesSemanticas(accion, token);
            }

        }



    }
    
    void accionesSemanticas(int accion, int ntoken) {
        switch (accion)
        {
        //Accion de declaración de variables 1.
        case 1:

            if (pila_elementos.size() == 0) {
                pila_elementos.push(stoken);
                MessageBox::Show("Metemos el valor "+toSystemString(stoken));
            }
            else {
                MessageBox::Show("Hay más valores");
                stack <string> aux_pila_elementos;
                aux_pila_elementos = pila_elementos;

                while (aux_pila_elementos.size() != 0) {

                    string aux = aux_pila_elementos.top();
                    
                    if (aux == stoken) {
                        
                        ErrorSm(1600);
                        break;
                    }
                    else {
                        aux_pila_elementos.pop();
                        aux = aux_pila_elementos.top();
                    }
                    
                    if (aux_pila_elementos.size() == 0) {
                        break;
                    }                    
                }
            }
            break;
        //Accion de declaración de variables 2.
        case 2:
            //int cantidad = 0;
            //cantidad = pila_elementos.size();
            for (int i = 0; i < pila_elementos.size(); i++) {
                if (ntoken == 1020) {
                    pila_tipos_elementos.push("int");
                }
                if (ntoken == 1021) {
                    pila_tipos_elementos.push("float");
                }
                if (ntoken == 1022) {
                    pila_tipos_elementos.push("char");
                }
                if (ntoken == 1023) {
                    pila_tipos_elementos.push("bool");
                }
                if (ntoken == 1024) {
                    pila_tipos_elementos.push("string");
                }


            }
            break;
        //Accion de asignación 1.
        case 3:
            pila_tipos.push("tipo variable");
            break;
        case 4:
            break;

        default:
            break;
        }
    }

    void ErrorSm(int numError) {
        switch (numError)
        {
        case 1600:
            txtAS->AppendText("Error Semantico 1550: Amigue, la variable " + toSystemString(stoken) + " ya fue declarada, pilas");

            break;
        case 1601:
            break;
        case 1602:
            break;
        case 1603:
            break;

        default:
            break;
        }
    }

    //EVENTOS
#pragma endregion

           //Menu
  private: System::Void mnNuevo_Click(System::Object^ sender, System::EventArgs^ e) {

      direcciónArchivo = "";
      nomArchivo = "";
      abrir = true;

      limpiarPanel();
      pedirRuta2();
      
      
  }

  private: System::Void abrirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      
      direcciónArchivo = "";
      nomArchivo = "";
      abrir = true;

      limpiarPanel();
      pedirRuta();
  }

  private: System::Void guardarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      if (txtDoc->Text == "") {
          MessageBox::Show("Por favor introduce texto en el Área de texto del análizador", "Error al guardar");
      }
      else {
          if (nomArchivo == "" || direcciónArchivo == "") {
              MessageBox::Show("Creando arhcivo");
          }
          else {
              //GUARDAR ARCHIVO
              MessageBox::Show("Archivo Guardado");
          }
      }
  }

  private: System::Void guardarComoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      if (txtDoc->Text == "") {
          MessageBox::Show("Por favor introduce texto en el Área de texto del análizador", "Error al guardar");
      }
      else {
          if (nomArchivo == "" || direcciónArchivo == "") {
              MessageBox::Show("Creando arhcivo");
          }
          else {
              //GUARDAR ARCHIVO
              MessageBox::Show("Archivo Guardado");
          }
      }
  }

  private: System::Void cerrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
      Limpiar();
  }

  private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { 
      exit(1);
  }

  private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

      LAProyectoATMvol2::Acerca^ acerca = gcnew LAProyectoATMvol2::Acerca();
      //LAProyectoATMvol2::Imagen^ imagen = gcnew LAProyectoATMvol2::Imagen();

      acerca->Show();
      //imagen->Show();
      /*
      imagen->Dock = DockStyle::Fill;
      imagen->TopLevel = false;
      pnlCont->Controls->Add(imagen);
      pnlCont->Tag = imagen;
      imagen->Show();*/
       

  }
   
    //Botones
    private: System::Void btnAnalizar_Click(System::Object^ sender, System::EventArgs^ e) {
        i = 0;
        Limpiar();
        txtAS->Clear();
        analizarst = false;
        if (txtNombre->Text == "Archivo.lya" && txtDoc->Text == "") {
            MessageBox::Show("Por favor, Crea o Abre un archivo", "Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
        }
        else {
            if (txtDoc->Text == "") {
                MessageBox::Show("Por favor, introduce texto en el área del documento para análizar", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else if (txtNombre->Text == "Archivo.lya") {
                MessageBox::Show("Por favor, guarda el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            else if(txtNombre->Text == "Nuevo*.lya") {
                /*
                analizar();
                txtPila->AppendText("Token: \r\n");
                for (int i = 0; i < toks.size(); i++) {
                    string tok = toks[i];
                    txtPila->AppendText(toSystemString(tok)+"\r\n");
                }
                //guardarArchivo();
                //txtPila->AppendText("---------------------------------- \r\n");
                //txtElementos->AppendText("--------------------------------- \r\n");
                if (siono == true) {
                    analizaSintaxis();
                }
                else {
                    txtAS->AppendText("Error Léxico, no se puede analizar sintácticamente \r\n");
                }
                */  
                //analizarSVol2();
                analizarSVol3();
                semantico();

            }
            else {
                /*analizar();
                txtPila->AppendText("Token: \r\n");
                for (int i = 0; i < toks.size(); i++) {
                    string tok = toks[i];
                    txtPila->AppendText(toSystemString(tok)+"\r\n");
                }
                    
                if (siono == true) {
                    analizaSintaxis();
                }
                else {
                    txtAS->AppendText("Error Léxico, no se puede analizar sintácticamente \r\n");
                }*/
                //analizarSVol2();
                analizarSVol3();
                semantico();
                
            }
        }

    }

    private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        if (MessageBox::Show("¿Estás seguro que quieres limpiar?", "Advertencia",
            MessageBoxButtons::YesNo,
            MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            Limpiar();

            MsIncreible(gcnew LAProyectoATMvol2::Imagen);
        }
    }

    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void btnAbrir_Click(System::Object^ sender, System::EventArgs^ e) {


        txtAS->Clear();
        direcciónArchivo = "";
        nomArchivo = "";
        abrir = true;

        limpiarPanel();
        pedirRuta();
        abrirArchivo();

        MsIncreible(gcnew LAProyectoATMvol2::Imagen);

    }
            
    private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
        /*if (txtDoc->Text == "") {
            MessageBox::Show("Por favor introduce texto en el Área de texto del análizador","Error al guardar", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            if (nomArchivo == "" || direcciónArchivo == "") {
                MessageBox::Show("Creando arhcivo");
            }
            else {
                //GUARDAR ARCHIVO
                guardar(direcciónArchivo);
                MessageBox::Show("Archivo Guardado");
            }
        }*/
        if (txtDoc->Text == "") {
            MessageBox::Show("Por favor introduce texto en el Área de texto del análizador", "Error al guardar", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        else {
            /*if (nomArchivo == "" || direcciónArchivo == "") {
                MessageBox::Show("Creando arhcivo");
            }
            else {
                //GUARDAR ARCHIVO
                guardar(direcciónArchivo);
                MessageBox::Show("Archivo Guardado");
            }*/
            guardarArchivo();
        }
    }

    private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
        Limpiar();
        txtDoc->Clear();
        //txtDoc->ClearSelected();
        direcciónArchivo = "";
        nomArchivo = "";
        this->txtNombre->Text = this->toSystemString("Archivo.lya");
        MsIncreible(gcnew LAProyectoATMvol2::Imagen);
        
    
    }

    private: System::Void txtToken_TextChanged(System::Object^ sender, System::EventArgs^ e) {

    }

    private: System::Void btnCancelarR_Click(System::Object^ sender, System::EventArgs^ e) {
        //InitializeComponent();
        abrir = false;
        limpiarPanel();
        REInitializeComponent();
        MsIncreible(gcnew LAProyectoATMvol2::Imagen);
    
    
    }

    private: System::Void btnAceptarR_Click(System::Object^ sender, System::EventArgs^ e) {
        abrir = false;
        cad0.clear();
        if (txtRuteishon->Text != "" || txtNomArchivo->Text != "") {
            
            direcciónArchivo = this->toStandardString(this->txtRuteishon->Text);
            nomArchivo = this->toStandardString(this->txtNomArchivo->Text);

            vector<char> vecTxt = this->leerAcv(direcciónArchivo);

            cad0 = vecTxt;

            this->txtNombre->Text = this->toSystemString(nomArchivo);

            //abriendo(direcciónArchivo, nomArchivo,vecTxt);
            
            limpiarPanel();
            REInitializeComponent();


        }
        else {
            MessageBox::Show("Por favor, introduce lo que se pide","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

    }

    private: System::Void btnCancelarR2_Click(System::Object^ sender, System::EventArgs^ e) {
           //InitializeComponent();
           abrir = false;
           limpiarPanel();
           REInitializeComponent();
    }

    private: System::Void btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        if (GC == false) {
            if (txtRuteishon2->Text != "" || txtNomArchivo2->Text != "") {
                limpiarPanel();
                REInitializeComponent();

                direcciónArchivo = this->toStandardString(this->txtRuteishon2->Text);
                nomArchivo = this->toStandardString(this->txtNomArchivo2->Text);


                crearArchivo(direcciónArchivo, nomArchivo);

                vector<char> vecTxt = this->leerAcv(direcciónArchivo);

                //abriendo(direcciónArchivo, nomArchivo,vecTxt);
            }
            else {
                MessageBox::Show("Por favor, introduce lo que se pide", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);;
            }
        }
        else {
            if (txtRuteishon2->Text != "" || txtNomArchivo2->Text != "") {
                limpiarPanel();
                REInitializeComponent();

                direcciónArchivo = this->toStandardString(this->txtRuteishon2->Text);
                nomArchivo = this->toStandardString(this->txtNomArchivo2->Text);


                crearArchivo(direcciónArchivo, nomArchivo);

                vector<char> vecTxt = this->leerAcv(direcciónArchivo);

                guardar(direcciónArchivo);

                //abriendo(direcciónArchivo, nomArchivo,vecTxt);
            }
            else {
                MessageBox::Show("Por favor, introduce lo que se pide", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);;
            }

        }

    }

    private: System::Void btnCrearR2_Click(System::Object^ sender, System::EventArgs^ e) {
    
        if (txtRuteishon->Text != "" || txtNomArchivo->Text != "") {
            limpiarPanel();
            REInitializeComponent();

            direcciónArchivo = this->toStandardString(this->txtRuteishon->Text);
            nomArchivo = this->toStandardString(this->txtNomArchivo->Text);

            crearArchivo(direcciónArchivo, nomArchivo);
        }
        else {
            MessageBox::Show("Por favor, introduce lo que se pide","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
 
        limpiarPanel();

        pedirRuta();
    
    }

    private: System::Void txtError_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MessageBox::Show("¿Estás seguro que quieres salir?", "Advertencia",
        MessageBoxButtons::YesNo,
        MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        exit(1);
    }
       
        
    
    
}

    private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MessageBox::Show("¿Quíeres crear un nuevo archivo?", "Advertencia",
        MessageBoxButtons::YesNo,
        MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        Limpiar();
        direcciónArchivo = "";
        nomArchivo = "Nuevo*.lya";
        this->txtNombre->Text = this->toSystemString(nomArchivo);
        abrir = true;

        //limpiarPanel();
        //pedirRuta2();
    }
    

}

    private: System::Void abrirToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
    direcciónArchivo = "";
    nomArchivo = "";
    abrir = true;

    limpiarPanel();
    pedirRuta();
    abrirArchivo();
}

    private: System::Void guardarToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (txtDoc->Text == "") {
        MessageBox::Show("Por favor introduce texto en el Área de texto del análizador", "Error al guardar", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {

        guardarArchivo();
    }
}

       Boolean GC = false;

    private: System::Void guardarComoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
    direcciónArchivo = "";
    nomArchivo = "";
    abrir = true;
    GC = true;
    //limpiarPanel();
    //pedirRuta2();
    guardar_como();
}

    private: System::Void salirToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MessageBox::Show("¿Estás seguro que quieres salir?", "Advertencia",
        MessageBoxButtons::YesNo,
        MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
        exit(1);
    }
}

    private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    
    private: System::Void fuenteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    //if (SaveFileDialog::ShowDialog == System::Windows::Forms::DialogResult::Yes) {
    FontDialog f1;
    //f1.ShowColor = true;
    f1.ShowDialog();
    txtDoc->SelectionFont = f1.Font;
    //}
    

}
    
    private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        colores();
        
    }
    
    private: System::Void txtDoc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        //analizarColor();
    }
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

