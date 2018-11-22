#pragma once

namespace ColoringGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{

		static int press = 1;
		bool won = false;

	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelPoints;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  A3;
	private: System::Windows::Forms::PictureBox^  A4;
	private: System::Windows::Forms::PictureBox^  A5;
	private: System::Windows::Forms::PictureBox^  A6;
	private: System::Windows::Forms::PictureBox^  A7;
	private: System::Windows::Forms::PictureBox^  A8;
	private: System::Windows::Forms::PictureBox^  A9;
	private: System::Windows::Forms::PictureBox^  A10;
	private: System::Windows::Forms::PictureBox^  A11;
	private: System::Windows::Forms::PictureBox^  A12;
	private: System::Windows::Forms::PictureBox^  A13;
	private: System::Windows::Forms::PictureBox^  B13;














	private: System::Windows::Forms::PictureBox^  B12;

	private: System::Windows::Forms::PictureBox^  B11;

	private: System::Windows::Forms::PictureBox^  B10;

	private: System::Windows::Forms::PictureBox^  B9;

	private: System::Windows::Forms::PictureBox^  B8;

	private: System::Windows::Forms::PictureBox^  B7;

	private: System::Windows::Forms::PictureBox^  B6;

	private: System::Windows::Forms::PictureBox^  B5;

	private: System::Windows::Forms::PictureBox^  B4;

	private: System::Windows::Forms::PictureBox^  B3;

	private: System::Windows::Forms::PictureBox^  B2;

	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C13;


	private: System::Windows::Forms::PictureBox^  C12;

	private: System::Windows::Forms::PictureBox^  C11;

	private: System::Windows::Forms::PictureBox^  C10;

	private: System::Windows::Forms::PictureBox^  C9;

	private: System::Windows::Forms::PictureBox^  C8;

	private: System::Windows::Forms::PictureBox^  C7;

	private: System::Windows::Forms::PictureBox^  C6;

	private: System::Windows::Forms::PictureBox^  C5;

	private: System::Windows::Forms::PictureBox^  C4;

	private: System::Windows::Forms::PictureBox^  C3;

	private: System::Windows::Forms::PictureBox^  C2;

	private: System::Windows::Forms::PictureBox^  C1;
private: System::Windows::Forms::PictureBox^  D13;


private: System::Windows::Forms::PictureBox^  D12;

private: System::Windows::Forms::PictureBox^  D11;

private: System::Windows::Forms::PictureBox^  D10;

private: System::Windows::Forms::PictureBox^  D9;

private: System::Windows::Forms::PictureBox^  D8;

private: System::Windows::Forms::PictureBox^  D7;

private: System::Windows::Forms::PictureBox^  D6;

private: System::Windows::Forms::PictureBox^  D5;

private: System::Windows::Forms::PictureBox^  D4;

private: System::Windows::Forms::PictureBox^  D3;

private: System::Windows::Forms::PictureBox^  D2;

	private: System::Windows::Forms::PictureBox^  D1;
private: System::Windows::Forms::PictureBox^  E13;


private: System::Windows::Forms::PictureBox^  E12;

private: System::Windows::Forms::PictureBox^  E11;

private: System::Windows::Forms::PictureBox^  E10;

private: System::Windows::Forms::PictureBox^  E9;

private: System::Windows::Forms::PictureBox^  E8;

private: System::Windows::Forms::PictureBox^  E7;

private: System::Windows::Forms::PictureBox^  E6;

private: System::Windows::Forms::PictureBox^  E5;

private: System::Windows::Forms::PictureBox^  E4;

private: System::Windows::Forms::PictureBox^  E3;

private: System::Windows::Forms::PictureBox^  E2;

	private: System::Windows::Forms::PictureBox^  E1;
private: System::Windows::Forms::PictureBox^  F13;


private: System::Windows::Forms::PictureBox^  F12;

private: System::Windows::Forms::PictureBox^  F11;

private: System::Windows::Forms::PictureBox^  F10;

private: System::Windows::Forms::PictureBox^  F9;

private: System::Windows::Forms::PictureBox^  F8;

private: System::Windows::Forms::PictureBox^  F7;

private: System::Windows::Forms::PictureBox^  F6;

private: System::Windows::Forms::PictureBox^  F5;

private: System::Windows::Forms::PictureBox^  F4;

private: System::Windows::Forms::PictureBox^  F3;

private: System::Windows::Forms::PictureBox^  F2;

private: System::Windows::Forms::PictureBox^  F1;
private: System::Windows::Forms::PictureBox^  G13;


private: System::Windows::Forms::PictureBox^  G12;

private: System::Windows::Forms::PictureBox^  G11;

private: System::Windows::Forms::PictureBox^  G10;

private: System::Windows::Forms::PictureBox^  G9;

private: System::Windows::Forms::PictureBox^  G8;

private: System::Windows::Forms::PictureBox^  G7;

private: System::Windows::Forms::PictureBox^  G6;

private: System::Windows::Forms::PictureBox^  G5;

private: System::Windows::Forms::PictureBox^  G4;

private: System::Windows::Forms::PictureBox^  G3;

private: System::Windows::Forms::PictureBox^  G2;

private: System::Windows::Forms::PictureBox^  G1;
private: System::Windows::Forms::PictureBox^  H13;


private: System::Windows::Forms::PictureBox^  H12;

private: System::Windows::Forms::PictureBox^  H11;

private: System::Windows::Forms::PictureBox^  H10;

private: System::Windows::Forms::PictureBox^  H9;

private: System::Windows::Forms::PictureBox^  H8;

private: System::Windows::Forms::PictureBox^  H7;

private: System::Windows::Forms::PictureBox^  H6;

private: System::Windows::Forms::PictureBox^  H5;

private: System::Windows::Forms::PictureBox^  H4;

private: System::Windows::Forms::PictureBox^  H3;

private: System::Windows::Forms::PictureBox^  H2;

private: System::Windows::Forms::PictureBox^  H1;
private: System::Windows::Forms::PictureBox^  I13;


private: System::Windows::Forms::PictureBox^  I12;

private: System::Windows::Forms::PictureBox^  I11;

private: System::Windows::Forms::PictureBox^  I10;

private: System::Windows::Forms::PictureBox^  I9;

private: System::Windows::Forms::PictureBox^  I8;

private: System::Windows::Forms::PictureBox^  I7;

private: System::Windows::Forms::PictureBox^  I6;

private: System::Windows::Forms::PictureBox^  I5;

private: System::Windows::Forms::PictureBox^  I4;

private: System::Windows::Forms::PictureBox^  I3;

private: System::Windows::Forms::PictureBox^  I2;

private: System::Windows::Forms::PictureBox^  I1;
private: System::Windows::Forms::PictureBox^  J13;


private: System::Windows::Forms::PictureBox^  J12;

private: System::Windows::Forms::PictureBox^  J11;

private: System::Windows::Forms::PictureBox^  J10;

private: System::Windows::Forms::PictureBox^  J9;

private: System::Windows::Forms::PictureBox^  J8;

private: System::Windows::Forms::PictureBox^  J7;

private: System::Windows::Forms::PictureBox^  J6;

private: System::Windows::Forms::PictureBox^  J5;

private: System::Windows::Forms::PictureBox^  J4;

private: System::Windows::Forms::PictureBox^  J3;

private: System::Windows::Forms::PictureBox^  J2;

private: System::Windows::Forms::PictureBox^  J1;
private: System::Windows::Forms::PictureBox^  K13;


private: System::Windows::Forms::PictureBox^  K12;

private: System::Windows::Forms::PictureBox^  K11;

private: System::Windows::Forms::PictureBox^  K10;

private: System::Windows::Forms::PictureBox^  K9;

private: System::Windows::Forms::PictureBox^  K8;

private: System::Windows::Forms::PictureBox^  K7;

private: System::Windows::Forms::PictureBox^  K6;

private: System::Windows::Forms::PictureBox^  K5;

private: System::Windows::Forms::PictureBox^  K4;

private: System::Windows::Forms::PictureBox^  K3;

private: System::Windows::Forms::PictureBox^  K2;

private: System::Windows::Forms::PictureBox^  K1;
private: System::Windows::Forms::PictureBox^  L13;


private: System::Windows::Forms::PictureBox^  L12;

private: System::Windows::Forms::PictureBox^  L11;

private: System::Windows::Forms::PictureBox^  L10;

private: System::Windows::Forms::PictureBox^  L9;

private: System::Windows::Forms::PictureBox^  L8;

private: System::Windows::Forms::PictureBox^  L7;

private: System::Windows::Forms::PictureBox^  L6;

private: System::Windows::Forms::PictureBox^  L5;

private: System::Windows::Forms::PictureBox^  L4;

private: System::Windows::Forms::PictureBox^  L3;

private: System::Windows::Forms::PictureBox^  L2;

private: System::Windows::Forms::PictureBox^  L1;
private: System::Windows::Forms::PictureBox^  M13;


private: System::Windows::Forms::PictureBox^  M12;

private: System::Windows::Forms::PictureBox^  M11;

private: System::Windows::Forms::PictureBox^  M10;

private: System::Windows::Forms::PictureBox^  M9;

private: System::Windows::Forms::PictureBox^  M8;

private: System::Windows::Forms::PictureBox^  M7;

private: System::Windows::Forms::PictureBox^  M6;

private: System::Windows::Forms::PictureBox^  M5;

private: System::Windows::Forms::PictureBox^  M4;

private: System::Windows::Forms::PictureBox^  M3;

private: System::Windows::Forms::PictureBox^  M2;

private: System::Windows::Forms::PictureBox^  M1;

private: System::Windows::Forms::ImageList^  imageList1;
private: System::Windows::Forms::PictureBox^  brown;
private: System::Windows::Forms::PictureBox^  deepgreen;
private: System::Windows::Forms::PictureBox^  empty;
private: System::Windows::Forms::PictureBox^  lightgreen;
private: System::Windows::Forms::PictureBox^  red;
private: System::ComponentModel::IContainer^  components;





















	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelPoints = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->A4 = (gcnew System::Windows::Forms::PictureBox());
			this->A5 = (gcnew System::Windows::Forms::PictureBox());
			this->A6 = (gcnew System::Windows::Forms::PictureBox());
			this->A7 = (gcnew System::Windows::Forms::PictureBox());
			this->A8 = (gcnew System::Windows::Forms::PictureBox());
			this->A9 = (gcnew System::Windows::Forms::PictureBox());
			this->A10 = (gcnew System::Windows::Forms::PictureBox());
			this->A11 = (gcnew System::Windows::Forms::PictureBox());
			this->A12 = (gcnew System::Windows::Forms::PictureBox());
			this->A13 = (gcnew System::Windows::Forms::PictureBox());
			this->B13 = (gcnew System::Windows::Forms::PictureBox());
			this->B12 = (gcnew System::Windows::Forms::PictureBox());
			this->B11 = (gcnew System::Windows::Forms::PictureBox());
			this->B10 = (gcnew System::Windows::Forms::PictureBox());
			this->B9 = (gcnew System::Windows::Forms::PictureBox());
			this->B8 = (gcnew System::Windows::Forms::PictureBox());
			this->B7 = (gcnew System::Windows::Forms::PictureBox());
			this->B6 = (gcnew System::Windows::Forms::PictureBox());
			this->B5 = (gcnew System::Windows::Forms::PictureBox());
			this->B4 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C13 = (gcnew System::Windows::Forms::PictureBox());
			this->C12 = (gcnew System::Windows::Forms::PictureBox());
			this->C11 = (gcnew System::Windows::Forms::PictureBox());
			this->C10 = (gcnew System::Windows::Forms::PictureBox());
			this->C9 = (gcnew System::Windows::Forms::PictureBox());
			this->C8 = (gcnew System::Windows::Forms::PictureBox());
			this->C7 = (gcnew System::Windows::Forms::PictureBox());
			this->C6 = (gcnew System::Windows::Forms::PictureBox());
			this->C5 = (gcnew System::Windows::Forms::PictureBox());
			this->C4 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->D13 = (gcnew System::Windows::Forms::PictureBox());
			this->D12 = (gcnew System::Windows::Forms::PictureBox());
			this->D11 = (gcnew System::Windows::Forms::PictureBox());
			this->D10 = (gcnew System::Windows::Forms::PictureBox());
			this->D9 = (gcnew System::Windows::Forms::PictureBox());
			this->D8 = (gcnew System::Windows::Forms::PictureBox());
			this->D7 = (gcnew System::Windows::Forms::PictureBox());
			this->D6 = (gcnew System::Windows::Forms::PictureBox());
			this->D5 = (gcnew System::Windows::Forms::PictureBox());
			this->D4 = (gcnew System::Windows::Forms::PictureBox());
			this->D3 = (gcnew System::Windows::Forms::PictureBox());
			this->D2 = (gcnew System::Windows::Forms::PictureBox());
			this->D1 = (gcnew System::Windows::Forms::PictureBox());
			this->E13 = (gcnew System::Windows::Forms::PictureBox());
			this->E12 = (gcnew System::Windows::Forms::PictureBox());
			this->E11 = (gcnew System::Windows::Forms::PictureBox());
			this->E10 = (gcnew System::Windows::Forms::PictureBox());
			this->E9 = (gcnew System::Windows::Forms::PictureBox());
			this->E8 = (gcnew System::Windows::Forms::PictureBox());
			this->E7 = (gcnew System::Windows::Forms::PictureBox());
			this->E6 = (gcnew System::Windows::Forms::PictureBox());
			this->E5 = (gcnew System::Windows::Forms::PictureBox());
			this->E4 = (gcnew System::Windows::Forms::PictureBox());
			this->E3 = (gcnew System::Windows::Forms::PictureBox());
			this->E2 = (gcnew System::Windows::Forms::PictureBox());
			this->E1 = (gcnew System::Windows::Forms::PictureBox());
			this->F13 = (gcnew System::Windows::Forms::PictureBox());
			this->F12 = (gcnew System::Windows::Forms::PictureBox());
			this->F11 = (gcnew System::Windows::Forms::PictureBox());
			this->F10 = (gcnew System::Windows::Forms::PictureBox());
			this->F9 = (gcnew System::Windows::Forms::PictureBox());
			this->F8 = (gcnew System::Windows::Forms::PictureBox());
			this->F7 = (gcnew System::Windows::Forms::PictureBox());
			this->F6 = (gcnew System::Windows::Forms::PictureBox());
			this->F5 = (gcnew System::Windows::Forms::PictureBox());
			this->F4 = (gcnew System::Windows::Forms::PictureBox());
			this->F3 = (gcnew System::Windows::Forms::PictureBox());
			this->F2 = (gcnew System::Windows::Forms::PictureBox());
			this->F1 = (gcnew System::Windows::Forms::PictureBox());
			this->G13 = (gcnew System::Windows::Forms::PictureBox());
			this->G12 = (gcnew System::Windows::Forms::PictureBox());
			this->G11 = (gcnew System::Windows::Forms::PictureBox());
			this->G10 = (gcnew System::Windows::Forms::PictureBox());
			this->G9 = (gcnew System::Windows::Forms::PictureBox());
			this->G8 = (gcnew System::Windows::Forms::PictureBox());
			this->G7 = (gcnew System::Windows::Forms::PictureBox());
			this->G6 = (gcnew System::Windows::Forms::PictureBox());
			this->G5 = (gcnew System::Windows::Forms::PictureBox());
			this->G4 = (gcnew System::Windows::Forms::PictureBox());
			this->G3 = (gcnew System::Windows::Forms::PictureBox());
			this->G2 = (gcnew System::Windows::Forms::PictureBox());
			this->G1 = (gcnew System::Windows::Forms::PictureBox());
			this->H13 = (gcnew System::Windows::Forms::PictureBox());
			this->H12 = (gcnew System::Windows::Forms::PictureBox());
			this->H11 = (gcnew System::Windows::Forms::PictureBox());
			this->H10 = (gcnew System::Windows::Forms::PictureBox());
			this->H9 = (gcnew System::Windows::Forms::PictureBox());
			this->H8 = (gcnew System::Windows::Forms::PictureBox());
			this->H7 = (gcnew System::Windows::Forms::PictureBox());
			this->H6 = (gcnew System::Windows::Forms::PictureBox());
			this->H5 = (gcnew System::Windows::Forms::PictureBox());
			this->H4 = (gcnew System::Windows::Forms::PictureBox());
			this->H3 = (gcnew System::Windows::Forms::PictureBox());
			this->H2 = (gcnew System::Windows::Forms::PictureBox());
			this->H1 = (gcnew System::Windows::Forms::PictureBox());
			this->I13 = (gcnew System::Windows::Forms::PictureBox());
			this->I12 = (gcnew System::Windows::Forms::PictureBox());
			this->I11 = (gcnew System::Windows::Forms::PictureBox());
			this->I10 = (gcnew System::Windows::Forms::PictureBox());
			this->I9 = (gcnew System::Windows::Forms::PictureBox());
			this->I8 = (gcnew System::Windows::Forms::PictureBox());
			this->I7 = (gcnew System::Windows::Forms::PictureBox());
			this->I6 = (gcnew System::Windows::Forms::PictureBox());
			this->I5 = (gcnew System::Windows::Forms::PictureBox());
			this->I4 = (gcnew System::Windows::Forms::PictureBox());
			this->I3 = (gcnew System::Windows::Forms::PictureBox());
			this->I2 = (gcnew System::Windows::Forms::PictureBox());
			this->I1 = (gcnew System::Windows::Forms::PictureBox());
			this->J13 = (gcnew System::Windows::Forms::PictureBox());
			this->J12 = (gcnew System::Windows::Forms::PictureBox());
			this->J11 = (gcnew System::Windows::Forms::PictureBox());
			this->J10 = (gcnew System::Windows::Forms::PictureBox());
			this->J9 = (gcnew System::Windows::Forms::PictureBox());
			this->J8 = (gcnew System::Windows::Forms::PictureBox());
			this->J7 = (gcnew System::Windows::Forms::PictureBox());
			this->J6 = (gcnew System::Windows::Forms::PictureBox());
			this->J5 = (gcnew System::Windows::Forms::PictureBox());
			this->J4 = (gcnew System::Windows::Forms::PictureBox());
			this->J3 = (gcnew System::Windows::Forms::PictureBox());
			this->J2 = (gcnew System::Windows::Forms::PictureBox());
			this->J1 = (gcnew System::Windows::Forms::PictureBox());
			this->K13 = (gcnew System::Windows::Forms::PictureBox());
			this->K12 = (gcnew System::Windows::Forms::PictureBox());
			this->K11 = (gcnew System::Windows::Forms::PictureBox());
			this->K10 = (gcnew System::Windows::Forms::PictureBox());
			this->K9 = (gcnew System::Windows::Forms::PictureBox());
			this->K8 = (gcnew System::Windows::Forms::PictureBox());
			this->K7 = (gcnew System::Windows::Forms::PictureBox());
			this->K6 = (gcnew System::Windows::Forms::PictureBox());
			this->K5 = (gcnew System::Windows::Forms::PictureBox());
			this->K4 = (gcnew System::Windows::Forms::PictureBox());
			this->K3 = (gcnew System::Windows::Forms::PictureBox());
			this->K2 = (gcnew System::Windows::Forms::PictureBox());
			this->K1 = (gcnew System::Windows::Forms::PictureBox());
			this->L13 = (gcnew System::Windows::Forms::PictureBox());
			this->L12 = (gcnew System::Windows::Forms::PictureBox());
			this->L11 = (gcnew System::Windows::Forms::PictureBox());
			this->L10 = (gcnew System::Windows::Forms::PictureBox());
			this->L9 = (gcnew System::Windows::Forms::PictureBox());
			this->L8 = (gcnew System::Windows::Forms::PictureBox());
			this->L7 = (gcnew System::Windows::Forms::PictureBox());
			this->L6 = (gcnew System::Windows::Forms::PictureBox());
			this->L5 = (gcnew System::Windows::Forms::PictureBox());
			this->L4 = (gcnew System::Windows::Forms::PictureBox());
			this->L3 = (gcnew System::Windows::Forms::PictureBox());
			this->L2 = (gcnew System::Windows::Forms::PictureBox());
			this->L1 = (gcnew System::Windows::Forms::PictureBox());
			this->M13 = (gcnew System::Windows::Forms::PictureBox());
			this->M12 = (gcnew System::Windows::Forms::PictureBox());
			this->M11 = (gcnew System::Windows::Forms::PictureBox());
			this->M10 = (gcnew System::Windows::Forms::PictureBox());
			this->M9 = (gcnew System::Windows::Forms::PictureBox());
			this->M8 = (gcnew System::Windows::Forms::PictureBox());
			this->M7 = (gcnew System::Windows::Forms::PictureBox());
			this->M6 = (gcnew System::Windows::Forms::PictureBox());
			this->M5 = (gcnew System::Windows::Forms::PictureBox());
			this->M4 = (gcnew System::Windows::Forms::PictureBox());
			this->M3 = (gcnew System::Windows::Forms::PictureBox());
			this->M2 = (gcnew System::Windows::Forms::PictureBox());
			this->M1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->brown = (gcnew System::Windows::Forms::PictureBox());
			this->deepgreen = (gcnew System::Windows::Forms::PictureBox());
			this->empty = (gcnew System::Windows::Forms::PictureBox());
			this->lightgreen = (gcnew System::Windows::Forms::PictureBox());
			this->red = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deepgreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lightgreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1023, 46);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Punkty :";
			this->label1->Click += gcnew System::EventHandler(this, &Game::label1_Click);
			// 
			// labelPoints
			// 
			this->labelPoints->AutoSize = true;
			this->labelPoints->Location = System::Drawing::Point(1135, 46);
			this->labelPoints->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelPoints->Name = L"labelPoints";
			this->labelPoints->Size = System::Drawing::Size(24, 25);
			this->labelPoints->TabIndex = 1;
			this->labelPoints->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1200, 346);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(209, 65);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nowa gra";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1200, 432);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 64);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(71, 59);
			this->A1->Margin = System::Windows::Forms::Padding(4);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(53, 50);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A1->TabIndex = 4;
			this->A1->TabStop = false;
			this->A1->Tag = L"empty";
			this->A1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(71, 116);
			this->A2->Margin = System::Windows::Forms::Padding(4);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(53, 50);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A2->TabIndex = 5;
			this->A2->TabStop = false;
			this->A2->Tag = L"empty";
			this->A2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(71, 174);
			this->A3->Margin = System::Windows::Forms::Padding(4);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(53, 50);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A3->TabIndex = 6;
			this->A3->TabStop = false;
			this->A3->Tag = L"empty";
			this->A3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A4
			// 
			this->A4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4.Image")));
			this->A4->Location = System::Drawing::Point(71, 231);
			this->A4->Margin = System::Windows::Forms::Padding(4);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(53, 50);
			this->A4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A4->TabIndex = 7;
			this->A4->TabStop = false;
			this->A4->Tag = L"empty";
			this->A4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A5
			// 
			this->A5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5.Image")));
			this->A5->Location = System::Drawing::Point(71, 289);
			this->A5->Margin = System::Windows::Forms::Padding(4);
			this->A5->Name = L"A5";
			this->A5->Size = System::Drawing::Size(53, 50);
			this->A5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A5->TabIndex = 8;
			this->A5->TabStop = false;
			this->A5->Tag = L"empty";
			this->A5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A6
			// 
			this->A6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6.Image")));
			this->A6->Location = System::Drawing::Point(71, 346);
			this->A6->Margin = System::Windows::Forms::Padding(4);
			this->A6->Name = L"A6";
			this->A6->Size = System::Drawing::Size(53, 50);
			this->A6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A6->TabIndex = 9;
			this->A6->TabStop = false;
			this->A6->Tag = L"empty";
			this->A6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A7
			// 
			this->A7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7.Image")));
			this->A7->Location = System::Drawing::Point(71, 404);
			this->A7->Margin = System::Windows::Forms::Padding(4);
			this->A7->Name = L"A7";
			this->A7->Size = System::Drawing::Size(53, 50);
			this->A7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A7->TabIndex = 10;
			this->A7->TabStop = false;
			this->A7->Tag = L"empty";
			this->A7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A8
			// 
			this->A8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8.Image")));
			this->A8->Location = System::Drawing::Point(71, 461);
			this->A8->Margin = System::Windows::Forms::Padding(4);
			this->A8->Name = L"A8";
			this->A8->Size = System::Drawing::Size(53, 50);
			this->A8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A8->TabIndex = 11;
			this->A8->TabStop = false;
			this->A8->Tag = L"empty";
			this->A8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A9
			// 
			this->A9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A9.Image")));
			this->A9->Location = System::Drawing::Point(71, 519);
			this->A9->Margin = System::Windows::Forms::Padding(4);
			this->A9->Name = L"A9";
			this->A9->Size = System::Drawing::Size(53, 50);
			this->A9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A9->TabIndex = 12;
			this->A9->TabStop = false;
			this->A9->Tag = L"empty";
			this->A9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A10
			// 
			this->A10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A10.Image")));
			this->A10->Location = System::Drawing::Point(71, 576);
			this->A10->Margin = System::Windows::Forms::Padding(4);
			this->A10->Name = L"A10";
			this->A10->Size = System::Drawing::Size(53, 50);
			this->A10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A10->TabIndex = 13;
			this->A10->TabStop = false;
			this->A10->Tag = L"empty";
			this->A10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A11
			// 
			this->A11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A11.Image")));
			this->A11->Location = System::Drawing::Point(71, 634);
			this->A11->Margin = System::Windows::Forms::Padding(4);
			this->A11->Name = L"A11";
			this->A11->Size = System::Drawing::Size(53, 50);
			this->A11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A11->TabIndex = 14;
			this->A11->TabStop = false;
			this->A11->Tag = L"empty";
			this->A11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A12
			// 
			this->A12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A12.Image")));
			this->A12->Location = System::Drawing::Point(71, 691);
			this->A12->Margin = System::Windows::Forms::Padding(4);
			this->A12->Name = L"A12";
			this->A12->Size = System::Drawing::Size(53, 50);
			this->A12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A12->TabIndex = 15;
			this->A12->TabStop = false;
			this->A12->Tag = L"empty";
			this->A12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// A13
			// 
			this->A13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A13.Image")));
			this->A13->Location = System::Drawing::Point(71, 749);
			this->A13->Margin = System::Windows::Forms::Padding(4);
			this->A13->Name = L"A13";
			this->A13->Size = System::Drawing::Size(53, 50);
			this->A13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->A13->TabIndex = 16;
			this->A13->TabStop = false;
			this->A13->Tag = L"empty";
			this->A13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B13
			// 
			this->B13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B13.Image")));
			this->B13->Location = System::Drawing::Point(132, 749);
			this->B13->Margin = System::Windows::Forms::Padding(4);
			this->B13->Name = L"B13";
			this->B13->Size = System::Drawing::Size(53, 50);
			this->B13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B13->TabIndex = 29;
			this->B13->TabStop = false;
			this->B13->Tag = L"empty";
			this->B13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B12
			// 
			this->B12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B12.Image")));
			this->B12->Location = System::Drawing::Point(132, 691);
			this->B12->Margin = System::Windows::Forms::Padding(4);
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(53, 50);
			this->B12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B12->TabIndex = 28;
			this->B12->TabStop = false;
			this->B12->Tag = L"empty";
			this->B12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B11
			// 
			this->B11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B11.Image")));
			this->B11->Location = System::Drawing::Point(132, 634);
			this->B11->Margin = System::Windows::Forms::Padding(4);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(53, 50);
			this->B11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B11->TabIndex = 27;
			this->B11->TabStop = false;
			this->B11->Tag = L"empty";
			this->B11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B10
			// 
			this->B10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B10.Image")));
			this->B10->Location = System::Drawing::Point(132, 576);
			this->B10->Margin = System::Windows::Forms::Padding(4);
			this->B10->Name = L"B10";
			this->B10->Size = System::Drawing::Size(53, 50);
			this->B10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B10->TabIndex = 26;
			this->B10->TabStop = false;
			this->B10->Tag = L"empty";
			this->B10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B9
			// 
			this->B9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B9.Image")));
			this->B9->Location = System::Drawing::Point(132, 519);
			this->B9->Margin = System::Windows::Forms::Padding(4);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(53, 50);
			this->B9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B9->TabIndex = 25;
			this->B9->TabStop = false;
			this->B9->Tag = L"empty";
			this->B9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B8
			// 
			this->B8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B8.Image")));
			this->B8->Location = System::Drawing::Point(132, 461);
			this->B8->Margin = System::Windows::Forms::Padding(4);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(53, 50);
			this->B8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B8->TabIndex = 24;
			this->B8->TabStop = false;
			this->B8->Tag = L"empty";
			this->B8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B7
			// 
			this->B7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7.Image")));
			this->B7->Location = System::Drawing::Point(132, 404);
			this->B7->Margin = System::Windows::Forms::Padding(4);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(53, 50);
			this->B7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B7->TabIndex = 23;
			this->B7->TabStop = false;
			this->B7->Tag = L"empty";
			this->B7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B6
			// 
			this->B6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6.Image")));
			this->B6->Location = System::Drawing::Point(132, 346);
			this->B6->Margin = System::Windows::Forms::Padding(4);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(53, 50);
			this->B6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B6->TabIndex = 22;
			this->B6->TabStop = false;
			this->B6->Tag = L"empty";
			this->B6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B5
			// 
			this->B5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5.Image")));
			this->B5->Location = System::Drawing::Point(132, 289);
			this->B5->Margin = System::Windows::Forms::Padding(4);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(53, 50);
			this->B5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B5->TabIndex = 21;
			this->B5->TabStop = false;
			this->B5->Tag = L"empty";
			this->B5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B4
			// 
			this->B4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4.Image")));
			this->B4->Location = System::Drawing::Point(132, 231);
			this->B4->Margin = System::Windows::Forms::Padding(4);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(53, 50);
			this->B4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B4->TabIndex = 20;
			this->B4->TabStop = false;
			this->B4->Tag = L"empty";
			this->B4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(132, 174);
			this->B3->Margin = System::Windows::Forms::Padding(4);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(53, 50);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B3->TabIndex = 19;
			this->B3->TabStop = false;
			this->B3->Tag = L"empty";
			this->B3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(132, 116);
			this->B2->Margin = System::Windows::Forms::Padding(4);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(53, 50);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B2->TabIndex = 18;
			this->B2->TabStop = false;
			this->B2->Tag = L"empty";
			this->B2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(132, 59);
			this->B1->Margin = System::Windows::Forms::Padding(4);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(53, 50);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->B1->TabIndex = 17;
			this->B1->TabStop = false;
			this->B1->Tag = L"empty";
			this->B1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C13
			// 
			this->C13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C13.Image")));
			this->C13->Location = System::Drawing::Point(193, 749);
			this->C13->Margin = System::Windows::Forms::Padding(4);
			this->C13->Name = L"C13";
			this->C13->Size = System::Drawing::Size(53, 50);
			this->C13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C13->TabIndex = 42;
			this->C13->TabStop = false;
			this->C13->Tag = L"empty";
			this->C13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C12
			// 
			this->C12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C12.Image")));
			this->C12->Location = System::Drawing::Point(193, 691);
			this->C12->Margin = System::Windows::Forms::Padding(4);
			this->C12->Name = L"C12";
			this->C12->Size = System::Drawing::Size(53, 50);
			this->C12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C12->TabIndex = 41;
			this->C12->TabStop = false;
			this->C12->Tag = L"empty";
			this->C12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C11
			// 
			this->C11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C11.Image")));
			this->C11->Location = System::Drawing::Point(193, 634);
			this->C11->Margin = System::Windows::Forms::Padding(4);
			this->C11->Name = L"C11";
			this->C11->Size = System::Drawing::Size(53, 50);
			this->C11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C11->TabIndex = 40;
			this->C11->TabStop = false;
			this->C11->Tag = L"empty";
			this->C11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C10
			// 
			this->C10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C10.Image")));
			this->C10->Location = System::Drawing::Point(193, 576);
			this->C10->Margin = System::Windows::Forms::Padding(4);
			this->C10->Name = L"C10";
			this->C10->Size = System::Drawing::Size(53, 50);
			this->C10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C10->TabIndex = 39;
			this->C10->TabStop = false;
			this->C10->Tag = L"empty";
			this->C10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C9
			// 
			this->C9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C9.Image")));
			this->C9->Location = System::Drawing::Point(193, 519);
			this->C9->Margin = System::Windows::Forms::Padding(4);
			this->C9->Name = L"C9";
			this->C9->Size = System::Drawing::Size(53, 50);
			this->C9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C9->TabIndex = 38;
			this->C9->TabStop = false;
			this->C9->Tag = L"empty";
			this->C9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C8
			// 
			this->C8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C8.Image")));
			this->C8->Location = System::Drawing::Point(193, 461);
			this->C8->Margin = System::Windows::Forms::Padding(4);
			this->C8->Name = L"C8";
			this->C8->Size = System::Drawing::Size(53, 50);
			this->C8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C8->TabIndex = 37;
			this->C8->TabStop = false;
			this->C8->Tag = L"empty";
			this->C8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C7
			// 
			this->C7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7.Image")));
			this->C7->Location = System::Drawing::Point(193, 404);
			this->C7->Margin = System::Windows::Forms::Padding(4);
			this->C7->Name = L"C7";
			this->C7->Size = System::Drawing::Size(53, 50);
			this->C7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C7->TabIndex = 36;
			this->C7->TabStop = false;
			this->C7->Tag = L"empty";
			this->C7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C6
			// 
			this->C6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6.Image")));
			this->C6->Location = System::Drawing::Point(193, 346);
			this->C6->Margin = System::Windows::Forms::Padding(4);
			this->C6->Name = L"C6";
			this->C6->Size = System::Drawing::Size(53, 50);
			this->C6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C6->TabIndex = 35;
			this->C6->TabStop = false;
			this->C6->Tag = L"empty";
			this->C6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C5
			// 
			this->C5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5.Image")));
			this->C5->Location = System::Drawing::Point(193, 289);
			this->C5->Margin = System::Windows::Forms::Padding(4);
			this->C5->Name = L"C5";
			this->C5->Size = System::Drawing::Size(53, 50);
			this->C5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C5->TabIndex = 34;
			this->C5->TabStop = false;
			this->C5->Tag = L"empty";
			this->C5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C4
			// 
			this->C4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4.Image")));
			this->C4->Location = System::Drawing::Point(193, 231);
			this->C4->Margin = System::Windows::Forms::Padding(4);
			this->C4->Name = L"C4";
			this->C4->Size = System::Drawing::Size(53, 50);
			this->C4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C4->TabIndex = 33;
			this->C4->TabStop = false;
			this->C4->Tag = L"empty";
			this->C4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(193, 174);
			this->C3->Margin = System::Windows::Forms::Padding(4);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(53, 50);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C3->TabIndex = 32;
			this->C3->TabStop = false;
			this->C3->Tag = L"empty";
			this->C3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(193, 116);
			this->C2->Margin = System::Windows::Forms::Padding(4);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(53, 50);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C2->TabIndex = 31;
			this->C2->TabStop = false;
			this->C2->Tag = L"empty";
			this->C2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(193, 59);
			this->C1->Margin = System::Windows::Forms::Padding(4);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(53, 50);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->C1->TabIndex = 30;
			this->C1->TabStop = false;
			this->C1->Tag = L"empty";
			this->C1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D13
			// 
			this->D13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D13.Image")));
			this->D13->Location = System::Drawing::Point(255, 749);
			this->D13->Margin = System::Windows::Forms::Padding(4);
			this->D13->Name = L"D13";
			this->D13->Size = System::Drawing::Size(53, 50);
			this->D13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D13->TabIndex = 55;
			this->D13->TabStop = false;
			this->D13->Tag = L"empty";
			this->D13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D12
			// 
			this->D12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D12.Image")));
			this->D12->Location = System::Drawing::Point(255, 691);
			this->D12->Margin = System::Windows::Forms::Padding(4);
			this->D12->Name = L"D12";
			this->D12->Size = System::Drawing::Size(53, 50);
			this->D12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D12->TabIndex = 54;
			this->D12->TabStop = false;
			this->D12->Tag = L"empty";
			this->D12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D11
			// 
			this->D11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D11.Image")));
			this->D11->Location = System::Drawing::Point(255, 634);
			this->D11->Margin = System::Windows::Forms::Padding(4);
			this->D11->Name = L"D11";
			this->D11->Size = System::Drawing::Size(53, 50);
			this->D11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D11->TabIndex = 53;
			this->D11->TabStop = false;
			this->D11->Tag = L"empty";
			this->D11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D10
			// 
			this->D10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D10.Image")));
			this->D10->Location = System::Drawing::Point(255, 576);
			this->D10->Margin = System::Windows::Forms::Padding(4);
			this->D10->Name = L"D10";
			this->D10->Size = System::Drawing::Size(53, 50);
			this->D10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D10->TabIndex = 52;
			this->D10->TabStop = false;
			this->D10->Tag = L"empty";
			this->D10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D9
			// 
			this->D9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D9.Image")));
			this->D9->Location = System::Drawing::Point(255, 519);
			this->D9->Margin = System::Windows::Forms::Padding(4);
			this->D9->Name = L"D9";
			this->D9->Size = System::Drawing::Size(53, 50);
			this->D9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D9->TabIndex = 51;
			this->D9->TabStop = false;
			this->D9->Tag = L"empty";
			this->D9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D8
			// 
			this->D8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D8.Image")));
			this->D8->Location = System::Drawing::Point(255, 461);
			this->D8->Margin = System::Windows::Forms::Padding(4);
			this->D8->Name = L"D8";
			this->D8->Size = System::Drawing::Size(53, 50);
			this->D8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D8->TabIndex = 50;
			this->D8->TabStop = false;
			this->D8->Tag = L"empty";
			this->D8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D7
			// 
			this->D7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D7.Image")));
			this->D7->Location = System::Drawing::Point(255, 404);
			this->D7->Margin = System::Windows::Forms::Padding(4);
			this->D7->Name = L"D7";
			this->D7->Size = System::Drawing::Size(53, 50);
			this->D7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D7->TabIndex = 49;
			this->D7->TabStop = false;
			this->D7->Tag = L"empty";
			this->D7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D6
			// 
			this->D6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D6.Image")));
			this->D6->Location = System::Drawing::Point(255, 346);
			this->D6->Margin = System::Windows::Forms::Padding(4);
			this->D6->Name = L"D6";
			this->D6->Size = System::Drawing::Size(53, 50);
			this->D6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D6->TabIndex = 48;
			this->D6->TabStop = false;
			this->D6->Tag = L"empty";
			this->D6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D5
			// 
			this->D5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D5.Image")));
			this->D5->Location = System::Drawing::Point(255, 289);
			this->D5->Margin = System::Windows::Forms::Padding(4);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(53, 50);
			this->D5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D5->TabIndex = 47;
			this->D5->TabStop = false;
			this->D5->Tag = L"empty";
			this->D5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D4
			// 
			this->D4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4.Image")));
			this->D4->Location = System::Drawing::Point(255, 231);
			this->D4->Margin = System::Windows::Forms::Padding(4);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(53, 50);
			this->D4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D4->TabIndex = 46;
			this->D4->TabStop = false;
			this->D4->Tag = L"empty";
			this->D4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D3
			// 
			this->D3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3.Image")));
			this->D3->Location = System::Drawing::Point(255, 174);
			this->D3->Margin = System::Windows::Forms::Padding(4);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(53, 50);
			this->D3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D3->TabIndex = 45;
			this->D3->TabStop = false;
			this->D3->Tag = L"empty";
			this->D3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D2
			// 
			this->D2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2.Image")));
			this->D2->Location = System::Drawing::Point(255, 116);
			this->D2->Margin = System::Windows::Forms::Padding(4);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(53, 50);
			this->D2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D2->TabIndex = 44;
			this->D2->TabStop = false;
			this->D2->Tag = L"empty";
			this->D2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// D1
			// 
			this->D1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1.Image")));
			this->D1->Location = System::Drawing::Point(255, 59);
			this->D1->Margin = System::Windows::Forms::Padding(4);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(53, 50);
			this->D1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->D1->TabIndex = 43;
			this->D1->TabStop = false;
			this->D1->Tag = L"empty";
			this->D1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E13
			// 
			this->E13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E13.Image")));
			this->E13->Location = System::Drawing::Point(316, 749);
			this->E13->Margin = System::Windows::Forms::Padding(4);
			this->E13->Name = L"E13";
			this->E13->Size = System::Drawing::Size(53, 50);
			this->E13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E13->TabIndex = 68;
			this->E13->TabStop = false;
			this->E13->Tag = L"empty";
			this->E13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E12
			// 
			this->E12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E12.Image")));
			this->E12->Location = System::Drawing::Point(316, 691);
			this->E12->Margin = System::Windows::Forms::Padding(4);
			this->E12->Name = L"E12";
			this->E12->Size = System::Drawing::Size(53, 50);
			this->E12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E12->TabIndex = 67;
			this->E12->TabStop = false;
			this->E12->Tag = L"empty";
			this->E12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E11
			// 
			this->E11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E11.Image")));
			this->E11->Location = System::Drawing::Point(316, 634);
			this->E11->Margin = System::Windows::Forms::Padding(4);
			this->E11->Name = L"E11";
			this->E11->Size = System::Drawing::Size(53, 50);
			this->E11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E11->TabIndex = 66;
			this->E11->TabStop = false;
			this->E11->Tag = L"empty";
			this->E11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E10
			// 
			this->E10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E10.Image")));
			this->E10->Location = System::Drawing::Point(316, 576);
			this->E10->Margin = System::Windows::Forms::Padding(4);
			this->E10->Name = L"E10";
			this->E10->Size = System::Drawing::Size(53, 50);
			this->E10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E10->TabIndex = 65;
			this->E10->TabStop = false;
			this->E10->Tag = L"empty";
			this->E10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E9
			// 
			this->E9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E9.Image")));
			this->E9->Location = System::Drawing::Point(316, 519);
			this->E9->Margin = System::Windows::Forms::Padding(4);
			this->E9->Name = L"E9";
			this->E9->Size = System::Drawing::Size(53, 50);
			this->E9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E9->TabIndex = 64;
			this->E9->TabStop = false;
			this->E9->Tag = L"empty";
			this->E9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E8
			// 
			this->E8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E8.Image")));
			this->E8->Location = System::Drawing::Point(316, 461);
			this->E8->Margin = System::Windows::Forms::Padding(4);
			this->E8->Name = L"E8";
			this->E8->Size = System::Drawing::Size(53, 50);
			this->E8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E8->TabIndex = 63;
			this->E8->TabStop = false;
			this->E8->Tag = L"empty";
			this->E8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E7
			// 
			this->E7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E7.Image")));
			this->E7->Location = System::Drawing::Point(316, 404);
			this->E7->Margin = System::Windows::Forms::Padding(4);
			this->E7->Name = L"E7";
			this->E7->Size = System::Drawing::Size(53, 50);
			this->E7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E7->TabIndex = 62;
			this->E7->TabStop = false;
			this->E7->Tag = L"empty";
			this->E7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E6
			// 
			this->E6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E6.Image")));
			this->E6->Location = System::Drawing::Point(316, 346);
			this->E6->Margin = System::Windows::Forms::Padding(4);
			this->E6->Name = L"E6";
			this->E6->Size = System::Drawing::Size(53, 50);
			this->E6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E6->TabIndex = 61;
			this->E6->TabStop = false;
			this->E6->Tag = L"empty";
			this->E6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E5
			// 
			this->E5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E5.Image")));
			this->E5->Location = System::Drawing::Point(316, 289);
			this->E5->Margin = System::Windows::Forms::Padding(4);
			this->E5->Name = L"E5";
			this->E5->Size = System::Drawing::Size(53, 50);
			this->E5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E5->TabIndex = 60;
			this->E5->TabStop = false;
			this->E5->Tag = L"empty";
			this->E5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E4
			// 
			this->E4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4.Image")));
			this->E4->Location = System::Drawing::Point(316, 231);
			this->E4->Margin = System::Windows::Forms::Padding(4);
			this->E4->Name = L"E4";
			this->E4->Size = System::Drawing::Size(53, 50);
			this->E4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E4->TabIndex = 59;
			this->E4->TabStop = false;
			this->E4->Tag = L"empty";
			this->E4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E3
			// 
			this->E3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3.Image")));
			this->E3->Location = System::Drawing::Point(316, 174);
			this->E3->Margin = System::Windows::Forms::Padding(4);
			this->E3->Name = L"E3";
			this->E3->Size = System::Drawing::Size(53, 50);
			this->E3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E3->TabIndex = 58;
			this->E3->TabStop = false;
			this->E3->Tag = L"empty";
			this->E3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E2
			// 
			this->E2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2.Image")));
			this->E2->Location = System::Drawing::Point(316, 116);
			this->E2->Margin = System::Windows::Forms::Padding(4);
			this->E2->Name = L"E2";
			this->E2->Size = System::Drawing::Size(53, 50);
			this->E2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E2->TabIndex = 57;
			this->E2->TabStop = false;
			this->E2->Tag = L"empty";
			this->E2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// E1
			// 
			this->E1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1.Image")));
			this->E1->Location = System::Drawing::Point(316, 59);
			this->E1->Margin = System::Windows::Forms::Padding(4);
			this->E1->Name = L"E1";
			this->E1->Size = System::Drawing::Size(53, 50);
			this->E1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->E1->TabIndex = 56;
			this->E1->TabStop = false;
			this->E1->Tag = L"empty";
			this->E1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F13
			// 
			this->F13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F13.Image")));
			this->F13->Location = System::Drawing::Point(377, 749);
			this->F13->Margin = System::Windows::Forms::Padding(4);
			this->F13->Name = L"F13";
			this->F13->Size = System::Drawing::Size(53, 50);
			this->F13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F13->TabIndex = 81;
			this->F13->TabStop = false;
			this->F13->Tag = L"empty";
			this->F13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F12
			// 
			this->F12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F12.Image")));
			this->F12->Location = System::Drawing::Point(377, 691);
			this->F12->Margin = System::Windows::Forms::Padding(4);
			this->F12->Name = L"F12";
			this->F12->Size = System::Drawing::Size(53, 50);
			this->F12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F12->TabIndex = 80;
			this->F12->TabStop = false;
			this->F12->Tag = L"empty";
			this->F12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F11
			// 
			this->F11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F11.Image")));
			this->F11->Location = System::Drawing::Point(377, 634);
			this->F11->Margin = System::Windows::Forms::Padding(4);
			this->F11->Name = L"F11";
			this->F11->Size = System::Drawing::Size(53, 50);
			this->F11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F11->TabIndex = 79;
			this->F11->TabStop = false;
			this->F11->Tag = L"empty";
			this->F11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F10
			// 
			this->F10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F10.Image")));
			this->F10->Location = System::Drawing::Point(377, 576);
			this->F10->Margin = System::Windows::Forms::Padding(4);
			this->F10->Name = L"F10";
			this->F10->Size = System::Drawing::Size(53, 50);
			this->F10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F10->TabIndex = 78;
			this->F10->TabStop = false;
			this->F10->Tag = L"empty";
			this->F10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F9
			// 
			this->F9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F9.Image")));
			this->F9->Location = System::Drawing::Point(377, 519);
			this->F9->Margin = System::Windows::Forms::Padding(4);
			this->F9->Name = L"F9";
			this->F9->Size = System::Drawing::Size(53, 50);
			this->F9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F9->TabIndex = 77;
			this->F9->TabStop = false;
			this->F9->Tag = L"empty";
			this->F9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F8
			// 
			this->F8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F8.Image")));
			this->F8->Location = System::Drawing::Point(377, 461);
			this->F8->Margin = System::Windows::Forms::Padding(4);
			this->F8->Name = L"F8";
			this->F8->Size = System::Drawing::Size(53, 50);
			this->F8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F8->TabIndex = 76;
			this->F8->TabStop = false;
			this->F8->Tag = L"empty";
			this->F8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F7
			// 
			this->F7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F7.Image")));
			this->F7->Location = System::Drawing::Point(377, 404);
			this->F7->Margin = System::Windows::Forms::Padding(4);
			this->F7->Name = L"F7";
			this->F7->Size = System::Drawing::Size(53, 50);
			this->F7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F7->TabIndex = 75;
			this->F7->TabStop = false;
			this->F7->Tag = L"empty";
			this->F7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F6
			// 
			this->F6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F6.Image")));
			this->F6->Location = System::Drawing::Point(377, 346);
			this->F6->Margin = System::Windows::Forms::Padding(4);
			this->F6->Name = L"F6";
			this->F6->Size = System::Drawing::Size(53, 50);
			this->F6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F6->TabIndex = 74;
			this->F6->TabStop = false;
			this->F6->Tag = L"empty";
			this->F6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F5
			// 
			this->F5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F5.Image")));
			this->F5->Location = System::Drawing::Point(377, 289);
			this->F5->Margin = System::Windows::Forms::Padding(4);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(53, 50);
			this->F5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F5->TabIndex = 73;
			this->F5->TabStop = false;
			this->F5->Tag = L"empty";
			this->F5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F4
			// 
			this->F4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F4.Image")));
			this->F4->Location = System::Drawing::Point(377, 231);
			this->F4->Margin = System::Windows::Forms::Padding(4);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(53, 50);
			this->F4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F4->TabIndex = 72;
			this->F4->TabStop = false;
			this->F4->Tag = L"empty";
			this->F4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F3
			// 
			this->F3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3.Image")));
			this->F3->Location = System::Drawing::Point(377, 174);
			this->F3->Margin = System::Windows::Forms::Padding(4);
			this->F3->Name = L"F3";
			this->F3->Size = System::Drawing::Size(53, 50);
			this->F3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F3->TabIndex = 71;
			this->F3->TabStop = false;
			this->F3->Tag = L"empty";
			this->F3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F2
			// 
			this->F2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2.Image")));
			this->F2->Location = System::Drawing::Point(377, 116);
			this->F2->Margin = System::Windows::Forms::Padding(4);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(53, 50);
			this->F2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F2->TabIndex = 70;
			this->F2->TabStop = false;
			this->F2->Tag = L"empty";
			this->F2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// F1
			// 
			this->F1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1.Image")));
			this->F1->Location = System::Drawing::Point(377, 59);
			this->F1->Margin = System::Windows::Forms::Padding(4);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(53, 50);
			this->F1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->F1->TabIndex = 69;
			this->F1->TabStop = false;
			this->F1->Tag = L"empty";
			this->F1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G13
			// 
			this->G13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G13.Image")));
			this->G13->Location = System::Drawing::Point(439, 749);
			this->G13->Margin = System::Windows::Forms::Padding(4);
			this->G13->Name = L"G13";
			this->G13->Size = System::Drawing::Size(53, 50);
			this->G13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G13->TabIndex = 94;
			this->G13->TabStop = false;
			this->G13->Tag = L"empty";
			this->G13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G12
			// 
			this->G12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G12.Image")));
			this->G12->Location = System::Drawing::Point(439, 691);
			this->G12->Margin = System::Windows::Forms::Padding(4);
			this->G12->Name = L"G12";
			this->G12->Size = System::Drawing::Size(53, 50);
			this->G12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G12->TabIndex = 93;
			this->G12->TabStop = false;
			this->G12->Tag = L"empty";
			this->G12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G11
			// 
			this->G11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G11.Image")));
			this->G11->Location = System::Drawing::Point(439, 634);
			this->G11->Margin = System::Windows::Forms::Padding(4);
			this->G11->Name = L"G11";
			this->G11->Size = System::Drawing::Size(53, 50);
			this->G11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G11->TabIndex = 92;
			this->G11->TabStop = false;
			this->G11->Tag = L"empty";
			this->G11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G10
			// 
			this->G10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G10.Image")));
			this->G10->Location = System::Drawing::Point(439, 576);
			this->G10->Margin = System::Windows::Forms::Padding(4);
			this->G10->Name = L"G10";
			this->G10->Size = System::Drawing::Size(53, 50);
			this->G10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G10->TabIndex = 91;
			this->G10->TabStop = false;
			this->G10->Tag = L"empty";
			this->G10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G9
			// 
			this->G9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G9.Image")));
			this->G9->Location = System::Drawing::Point(439, 519);
			this->G9->Margin = System::Windows::Forms::Padding(4);
			this->G9->Name = L"G9";
			this->G9->Size = System::Drawing::Size(53, 50);
			this->G9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G9->TabIndex = 90;
			this->G9->TabStop = false;
			this->G9->Tag = L"empty";
			this->G9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G8
			// 
			this->G8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G8.Image")));
			this->G8->Location = System::Drawing::Point(439, 461);
			this->G8->Margin = System::Windows::Forms::Padding(4);
			this->G8->Name = L"G8";
			this->G8->Size = System::Drawing::Size(53, 50);
			this->G8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G8->TabIndex = 89;
			this->G8->TabStop = false;
			this->G8->Tag = L"empty";
			this->G8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G7
			// 
			this->G7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G7.Image")));
			this->G7->Location = System::Drawing::Point(439, 404);
			this->G7->Margin = System::Windows::Forms::Padding(4);
			this->G7->Name = L"G7";
			this->G7->Size = System::Drawing::Size(53, 50);
			this->G7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G7->TabIndex = 88;
			this->G7->TabStop = false;
			this->G7->Tag = L"empty";
			this->G7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G6
			// 
			this->G6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G6.Image")));
			this->G6->Location = System::Drawing::Point(439, 346);
			this->G6->Margin = System::Windows::Forms::Padding(4);
			this->G6->Name = L"G6";
			this->G6->Size = System::Drawing::Size(53, 50);
			this->G6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G6->TabIndex = 87;
			this->G6->TabStop = false;
			this->G6->Tag = L"empty";
			this->G6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G5
			// 
			this->G5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G5.Image")));
			this->G5->Location = System::Drawing::Point(439, 289);
			this->G5->Margin = System::Windows::Forms::Padding(4);
			this->G5->Name = L"G5";
			this->G5->Size = System::Drawing::Size(53, 50);
			this->G5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G5->TabIndex = 86;
			this->G5->TabStop = false;
			this->G5->Tag = L"empty";
			this->G5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G4
			// 
			this->G4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G4.Image")));
			this->G4->Location = System::Drawing::Point(439, 231);
			this->G4->Margin = System::Windows::Forms::Padding(4);
			this->G4->Name = L"G4";
			this->G4->Size = System::Drawing::Size(53, 50);
			this->G4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G4->TabIndex = 85;
			this->G4->TabStop = false;
			this->G4->Tag = L"empty";
			this->G4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G3
			// 
			this->G3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3.Image")));
			this->G3->Location = System::Drawing::Point(439, 174);
			this->G3->Margin = System::Windows::Forms::Padding(4);
			this->G3->Name = L"G3";
			this->G3->Size = System::Drawing::Size(53, 50);
			this->G3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G3->TabIndex = 84;
			this->G3->TabStop = false;
			this->G3->Tag = L"empty";
			this->G3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G2
			// 
			this->G2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2.Image")));
			this->G2->Location = System::Drawing::Point(439, 116);
			this->G2->Margin = System::Windows::Forms::Padding(4);
			this->G2->Name = L"G2";
			this->G2->Size = System::Drawing::Size(53, 50);
			this->G2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G2->TabIndex = 83;
			this->G2->TabStop = false;
			this->G2->Tag = L"empty";
			this->G2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// G1
			// 
			this->G1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1.Image")));
			this->G1->Location = System::Drawing::Point(439, 59);
			this->G1->Margin = System::Windows::Forms::Padding(4);
			this->G1->Name = L"G1";
			this->G1->Size = System::Drawing::Size(53, 50);
			this->G1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->G1->TabIndex = 82;
			this->G1->TabStop = false;
			this->G1->Tag = L"empty";
			this->G1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H13
			// 
			this->H13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H13.Image")));
			this->H13->Location = System::Drawing::Point(500, 749);
			this->H13->Margin = System::Windows::Forms::Padding(4);
			this->H13->Name = L"H13";
			this->H13->Size = System::Drawing::Size(53, 50);
			this->H13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H13->TabIndex = 107;
			this->H13->TabStop = false;
			this->H13->Tag = L"empty";
			this->H13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H12
			// 
			this->H12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H12.Image")));
			this->H12->Location = System::Drawing::Point(500, 691);
			this->H12->Margin = System::Windows::Forms::Padding(4);
			this->H12->Name = L"H12";
			this->H12->Size = System::Drawing::Size(53, 50);
			this->H12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H12->TabIndex = 106;
			this->H12->TabStop = false;
			this->H12->Tag = L"empty";
			this->H12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H11
			// 
			this->H11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H11.Image")));
			this->H11->Location = System::Drawing::Point(500, 634);
			this->H11->Margin = System::Windows::Forms::Padding(4);
			this->H11->Name = L"H11";
			this->H11->Size = System::Drawing::Size(53, 50);
			this->H11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H11->TabIndex = 105;
			this->H11->TabStop = false;
			this->H11->Tag = L"empty";
			this->H11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H10
			// 
			this->H10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H10.Image")));
			this->H10->Location = System::Drawing::Point(500, 576);
			this->H10->Margin = System::Windows::Forms::Padding(4);
			this->H10->Name = L"H10";
			this->H10->Size = System::Drawing::Size(53, 50);
			this->H10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H10->TabIndex = 104;
			this->H10->TabStop = false;
			this->H10->Tag = L"empty";
			this->H10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H9
			// 
			this->H9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H9.Image")));
			this->H9->Location = System::Drawing::Point(500, 519);
			this->H9->Margin = System::Windows::Forms::Padding(4);
			this->H9->Name = L"H9";
			this->H9->Size = System::Drawing::Size(53, 50);
			this->H9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H9->TabIndex = 103;
			this->H9->TabStop = false;
			this->H9->Tag = L"empty";
			this->H9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H8
			// 
			this->H8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H8.Image")));
			this->H8->Location = System::Drawing::Point(500, 461);
			this->H8->Margin = System::Windows::Forms::Padding(4);
			this->H8->Name = L"H8";
			this->H8->Size = System::Drawing::Size(53, 50);
			this->H8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H8->TabIndex = 102;
			this->H8->TabStop = false;
			this->H8->Tag = L"empty";
			this->H8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H7
			// 
			this->H7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7.Image")));
			this->H7->Location = System::Drawing::Point(500, 404);
			this->H7->Margin = System::Windows::Forms::Padding(4);
			this->H7->Name = L"H7";
			this->H7->Size = System::Drawing::Size(53, 50);
			this->H7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H7->TabIndex = 101;
			this->H7->TabStop = false;
			this->H7->Tag = L"empty";
			this->H7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H6
			// 
			this->H6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6.Image")));
			this->H6->Location = System::Drawing::Point(500, 346);
			this->H6->Margin = System::Windows::Forms::Padding(4);
			this->H6->Name = L"H6";
			this->H6->Size = System::Drawing::Size(53, 50);
			this->H6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H6->TabIndex = 100;
			this->H6->TabStop = false;
			this->H6->Tag = L"empty";
			this->H6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H5
			// 
			this->H5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5.Image")));
			this->H5->Location = System::Drawing::Point(500, 289);
			this->H5->Margin = System::Windows::Forms::Padding(4);
			this->H5->Name = L"H5";
			this->H5->Size = System::Drawing::Size(53, 50);
			this->H5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H5->TabIndex = 99;
			this->H5->TabStop = false;
			this->H5->Tag = L"empty";
			this->H5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H4
			// 
			this->H4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4.Image")));
			this->H4->Location = System::Drawing::Point(500, 231);
			this->H4->Margin = System::Windows::Forms::Padding(4);
			this->H4->Name = L"H4";
			this->H4->Size = System::Drawing::Size(53, 50);
			this->H4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H4->TabIndex = 98;
			this->H4->TabStop = false;
			this->H4->Tag = L"empty";
			this->H4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H3
			// 
			this->H3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3.Image")));
			this->H3->Location = System::Drawing::Point(500, 174);
			this->H3->Margin = System::Windows::Forms::Padding(4);
			this->H3->Name = L"H3";
			this->H3->Size = System::Drawing::Size(53, 50);
			this->H3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H3->TabIndex = 97;
			this->H3->TabStop = false;
			this->H3->Tag = L"empty";
			this->H3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H2
			// 
			this->H2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2.Image")));
			this->H2->Location = System::Drawing::Point(500, 116);
			this->H2->Margin = System::Windows::Forms::Padding(4);
			this->H2->Name = L"H2";
			this->H2->Size = System::Drawing::Size(53, 50);
			this->H2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H2->TabIndex = 96;
			this->H2->TabStop = false;
			this->H2->Tag = L"empty";
			this->H2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// H1
			// 
			this->H1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1.Image")));
			this->H1->Location = System::Drawing::Point(500, 59);
			this->H1->Margin = System::Windows::Forms::Padding(4);
			this->H1->Name = L"H1";
			this->H1->Size = System::Drawing::Size(53, 50);
			this->H1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->H1->TabIndex = 95;
			this->H1->TabStop = false;
			this->H1->Tag = L"empty";
			this->H1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I13
			// 
			this->I13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I13.Image")));
			this->I13->Location = System::Drawing::Point(561, 749);
			this->I13->Margin = System::Windows::Forms::Padding(4);
			this->I13->Name = L"I13";
			this->I13->Size = System::Drawing::Size(53, 50);
			this->I13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I13->TabIndex = 120;
			this->I13->TabStop = false;
			this->I13->Tag = L"empty";
			this->I13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I12
			// 
			this->I12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I12.Image")));
			this->I12->Location = System::Drawing::Point(561, 691);
			this->I12->Margin = System::Windows::Forms::Padding(4);
			this->I12->Name = L"I12";
			this->I12->Size = System::Drawing::Size(53, 50);
			this->I12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I12->TabIndex = 119;
			this->I12->TabStop = false;
			this->I12->Tag = L"empty";
			this->I12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I11
			// 
			this->I11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I11.Image")));
			this->I11->Location = System::Drawing::Point(561, 634);
			this->I11->Margin = System::Windows::Forms::Padding(4);
			this->I11->Name = L"I11";
			this->I11->Size = System::Drawing::Size(53, 50);
			this->I11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I11->TabIndex = 118;
			this->I11->TabStop = false;
			this->I11->Tag = L"empty";
			this->I11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I10
			// 
			this->I10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I10.Image")));
			this->I10->Location = System::Drawing::Point(561, 576);
			this->I10->Margin = System::Windows::Forms::Padding(4);
			this->I10->Name = L"I10";
			this->I10->Size = System::Drawing::Size(53, 50);
			this->I10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I10->TabIndex = 117;
			this->I10->TabStop = false;
			this->I10->Tag = L"empty";
			this->I10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I9
			// 
			this->I9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I9.Image")));
			this->I9->Location = System::Drawing::Point(561, 519);
			this->I9->Margin = System::Windows::Forms::Padding(4);
			this->I9->Name = L"I9";
			this->I9->Size = System::Drawing::Size(53, 50);
			this->I9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I9->TabIndex = 116;
			this->I9->TabStop = false;
			this->I9->Tag = L"empty";
			this->I9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I8
			// 
			this->I8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I8.Image")));
			this->I8->Location = System::Drawing::Point(561, 461);
			this->I8->Margin = System::Windows::Forms::Padding(4);
			this->I8->Name = L"I8";
			this->I8->Size = System::Drawing::Size(53, 50);
			this->I8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I8->TabIndex = 115;
			this->I8->TabStop = false;
			this->I8->Tag = L"empty";
			this->I8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I7
			// 
			this->I7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I7.Image")));
			this->I7->Location = System::Drawing::Point(561, 404);
			this->I7->Margin = System::Windows::Forms::Padding(4);
			this->I7->Name = L"I7";
			this->I7->Size = System::Drawing::Size(53, 50);
			this->I7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I7->TabIndex = 114;
			this->I7->TabStop = false;
			this->I7->Tag = L"empty";
			this->I7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I6
			// 
			this->I6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I6.Image")));
			this->I6->Location = System::Drawing::Point(561, 346);
			this->I6->Margin = System::Windows::Forms::Padding(4);
			this->I6->Name = L"I6";
			this->I6->Size = System::Drawing::Size(53, 50);
			this->I6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I6->TabIndex = 113;
			this->I6->TabStop = false;
			this->I6->Tag = L"empty";
			this->I6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I5
			// 
			this->I5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I5.Image")));
			this->I5->Location = System::Drawing::Point(561, 289);
			this->I5->Margin = System::Windows::Forms::Padding(4);
			this->I5->Name = L"I5";
			this->I5->Size = System::Drawing::Size(53, 50);
			this->I5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I5->TabIndex = 112;
			this->I5->TabStop = false;
			this->I5->Tag = L"empty";
			this->I5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I4
			// 
			this->I4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I4.Image")));
			this->I4->Location = System::Drawing::Point(561, 231);
			this->I4->Margin = System::Windows::Forms::Padding(4);
			this->I4->Name = L"I4";
			this->I4->Size = System::Drawing::Size(53, 50);
			this->I4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I4->TabIndex = 111;
			this->I4->TabStop = false;
			this->I4->Tag = L"empty";
			this->I4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I3
			// 
			this->I3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I3.Image")));
			this->I3->Location = System::Drawing::Point(561, 174);
			this->I3->Margin = System::Windows::Forms::Padding(4);
			this->I3->Name = L"I3";
			this->I3->Size = System::Drawing::Size(53, 50);
			this->I3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I3->TabIndex = 110;
			this->I3->TabStop = false;
			this->I3->Tag = L"empty";
			this->I3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I2
			// 
			this->I2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I2.Image")));
			this->I2->Location = System::Drawing::Point(561, 116);
			this->I2->Margin = System::Windows::Forms::Padding(4);
			this->I2->Name = L"I2";
			this->I2->Size = System::Drawing::Size(53, 50);
			this->I2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I2->TabIndex = 109;
			this->I2->TabStop = false;
			this->I2->Tag = L"empty";
			this->I2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// I1
			// 
			this->I1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"I1.Image")));
			this->I1->Location = System::Drawing::Point(561, 59);
			this->I1->Margin = System::Windows::Forms::Padding(4);
			this->I1->Name = L"I1";
			this->I1->Size = System::Drawing::Size(53, 50);
			this->I1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->I1->TabIndex = 108;
			this->I1->TabStop = false;
			this->I1->Tag = L"empty";
			this->I1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J13
			// 
			this->J13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J13.Image")));
			this->J13->Location = System::Drawing::Point(623, 749);
			this->J13->Margin = System::Windows::Forms::Padding(4);
			this->J13->Name = L"J13";
			this->J13->Size = System::Drawing::Size(53, 50);
			this->J13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J13->TabIndex = 133;
			this->J13->TabStop = false;
			this->J13->Tag = L"empty";
			this->J13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J12
			// 
			this->J12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J12.Image")));
			this->J12->Location = System::Drawing::Point(623, 691);
			this->J12->Margin = System::Windows::Forms::Padding(4);
			this->J12->Name = L"J12";
			this->J12->Size = System::Drawing::Size(53, 50);
			this->J12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J12->TabIndex = 132;
			this->J12->TabStop = false;
			this->J12->Tag = L"empty";
			this->J12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J11
			// 
			this->J11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J11.Image")));
			this->J11->Location = System::Drawing::Point(623, 634);
			this->J11->Margin = System::Windows::Forms::Padding(4);
			this->J11->Name = L"J11";
			this->J11->Size = System::Drawing::Size(53, 50);
			this->J11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J11->TabIndex = 131;
			this->J11->TabStop = false;
			this->J11->Tag = L"empty";
			this->J11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J10
			// 
			this->J10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J10.Image")));
			this->J10->Location = System::Drawing::Point(623, 576);
			this->J10->Margin = System::Windows::Forms::Padding(4);
			this->J10->Name = L"J10";
			this->J10->Size = System::Drawing::Size(53, 50);
			this->J10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J10->TabIndex = 130;
			this->J10->TabStop = false;
			this->J10->Tag = L"empty";
			this->J10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J9
			// 
			this->J9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J9.Image")));
			this->J9->Location = System::Drawing::Point(623, 519);
			this->J9->Margin = System::Windows::Forms::Padding(4);
			this->J9->Name = L"J9";
			this->J9->Size = System::Drawing::Size(53, 50);
			this->J9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J9->TabIndex = 129;
			this->J9->TabStop = false;
			this->J9->Tag = L"empty";
			this->J9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J8
			// 
			this->J8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J8.Image")));
			this->J8->Location = System::Drawing::Point(623, 461);
			this->J8->Margin = System::Windows::Forms::Padding(4);
			this->J8->Name = L"J8";
			this->J8->Size = System::Drawing::Size(53, 50);
			this->J8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J8->TabIndex = 128;
			this->J8->TabStop = false;
			this->J8->Tag = L"empty";
			this->J8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J7
			// 
			this->J7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J7.Image")));
			this->J7->Location = System::Drawing::Point(623, 404);
			this->J7->Margin = System::Windows::Forms::Padding(4);
			this->J7->Name = L"J7";
			this->J7->Size = System::Drawing::Size(53, 50);
			this->J7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J7->TabIndex = 127;
			this->J7->TabStop = false;
			this->J7->Tag = L"empty";
			this->J7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J6
			// 
			this->J6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J6.Image")));
			this->J6->Location = System::Drawing::Point(623, 346);
			this->J6->Margin = System::Windows::Forms::Padding(4);
			this->J6->Name = L"J6";
			this->J6->Size = System::Drawing::Size(53, 50);
			this->J6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J6->TabIndex = 126;
			this->J6->TabStop = false;
			this->J6->Tag = L"empty";
			this->J6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J5
			// 
			this->J5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J5.Image")));
			this->J5->Location = System::Drawing::Point(623, 289);
			this->J5->Margin = System::Windows::Forms::Padding(4);
			this->J5->Name = L"J5";
			this->J5->Size = System::Drawing::Size(53, 50);
			this->J5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J5->TabIndex = 125;
			this->J5->TabStop = false;
			this->J5->Tag = L"empty";
			this->J5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J4
			// 
			this->J4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J4.Image")));
			this->J4->Location = System::Drawing::Point(623, 231);
			this->J4->Margin = System::Windows::Forms::Padding(4);
			this->J4->Name = L"J4";
			this->J4->Size = System::Drawing::Size(53, 50);
			this->J4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J4->TabIndex = 124;
			this->J4->TabStop = false;
			this->J4->Tag = L"empty";
			this->J4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J3
			// 
			this->J3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J3.Image")));
			this->J3->Location = System::Drawing::Point(623, 174);
			this->J3->Margin = System::Windows::Forms::Padding(4);
			this->J3->Name = L"J3";
			this->J3->Size = System::Drawing::Size(53, 50);
			this->J3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J3->TabIndex = 123;
			this->J3->TabStop = false;
			this->J3->Tag = L"empty";
			this->J3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J2
			// 
			this->J2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J2.Image")));
			this->J2->Location = System::Drawing::Point(623, 116);
			this->J2->Margin = System::Windows::Forms::Padding(4);
			this->J2->Name = L"J2";
			this->J2->Size = System::Drawing::Size(53, 50);
			this->J2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J2->TabIndex = 122;
			this->J2->TabStop = false;
			this->J2->Tag = L"empty";
			this->J2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// J1
			// 
			this->J1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"J1.Image")));
			this->J1->Location = System::Drawing::Point(623, 59);
			this->J1->Margin = System::Windows::Forms::Padding(4);
			this->J1->Name = L"J1";
			this->J1->Size = System::Drawing::Size(53, 50);
			this->J1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->J1->TabIndex = 121;
			this->J1->TabStop = false;
			this->J1->Tag = L"empty";
			this->J1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K13
			// 
			this->K13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K13.Image")));
			this->K13->Location = System::Drawing::Point(684, 749);
			this->K13->Margin = System::Windows::Forms::Padding(4);
			this->K13->Name = L"K13";
			this->K13->Size = System::Drawing::Size(53, 50);
			this->K13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K13->TabIndex = 146;
			this->K13->TabStop = false;
			this->K13->Tag = L"empty";
			this->K13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K12
			// 
			this->K12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K12.Image")));
			this->K12->Location = System::Drawing::Point(684, 691);
			this->K12->Margin = System::Windows::Forms::Padding(4);
			this->K12->Name = L"K12";
			this->K12->Size = System::Drawing::Size(53, 50);
			this->K12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K12->TabIndex = 145;
			this->K12->TabStop = false;
			this->K12->Tag = L"empty";
			this->K12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K11
			// 
			this->K11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K11.Image")));
			this->K11->Location = System::Drawing::Point(684, 634);
			this->K11->Margin = System::Windows::Forms::Padding(4);
			this->K11->Name = L"K11";
			this->K11->Size = System::Drawing::Size(53, 50);
			this->K11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K11->TabIndex = 144;
			this->K11->TabStop = false;
			this->K11->Tag = L"empty";
			this->K11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K10
			// 
			this->K10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K10.Image")));
			this->K10->Location = System::Drawing::Point(684, 576);
			this->K10->Margin = System::Windows::Forms::Padding(4);
			this->K10->Name = L"K10";
			this->K10->Size = System::Drawing::Size(53, 50);
			this->K10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K10->TabIndex = 143;
			this->K10->TabStop = false;
			this->K10->Tag = L"empty";
			this->K10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K9
			// 
			this->K9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K9.Image")));
			this->K9->Location = System::Drawing::Point(684, 519);
			this->K9->Margin = System::Windows::Forms::Padding(4);
			this->K9->Name = L"K9";
			this->K9->Size = System::Drawing::Size(53, 50);
			this->K9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K9->TabIndex = 142;
			this->K9->TabStop = false;
			this->K9->Tag = L"empty";
			this->K9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K8
			// 
			this->K8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K8.Image")));
			this->K8->Location = System::Drawing::Point(684, 461);
			this->K8->Margin = System::Windows::Forms::Padding(4);
			this->K8->Name = L"K8";
			this->K8->Size = System::Drawing::Size(53, 50);
			this->K8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K8->TabIndex = 141;
			this->K8->TabStop = false;
			this->K8->Tag = L"empty";
			this->K8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K7
			// 
			this->K7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K7.Image")));
			this->K7->Location = System::Drawing::Point(684, 404);
			this->K7->Margin = System::Windows::Forms::Padding(4);
			this->K7->Name = L"K7";
			this->K7->Size = System::Drawing::Size(53, 50);
			this->K7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K7->TabIndex = 140;
			this->K7->TabStop = false;
			this->K7->Tag = L"empty";
			this->K7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K6
			// 
			this->K6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K6.Image")));
			this->K6->Location = System::Drawing::Point(684, 346);
			this->K6->Margin = System::Windows::Forms::Padding(4);
			this->K6->Name = L"K6";
			this->K6->Size = System::Drawing::Size(53, 50);
			this->K6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K6->TabIndex = 139;
			this->K6->TabStop = false;
			this->K6->Tag = L"empty";
			this->K6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K5
			// 
			this->K5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K5.Image")));
			this->K5->Location = System::Drawing::Point(684, 289);
			this->K5->Margin = System::Windows::Forms::Padding(4);
			this->K5->Name = L"K5";
			this->K5->Size = System::Drawing::Size(53, 50);
			this->K5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K5->TabIndex = 138;
			this->K5->TabStop = false;
			this->K5->Tag = L"empty";
			this->K5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K4
			// 
			this->K4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K4.Image")));
			this->K4->Location = System::Drawing::Point(684, 231);
			this->K4->Margin = System::Windows::Forms::Padding(4);
			this->K4->Name = L"K4";
			this->K4->Size = System::Drawing::Size(53, 50);
			this->K4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K4->TabIndex = 137;
			this->K4->TabStop = false;
			this->K4->Tag = L"empty";
			this->K4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K3
			// 
			this->K3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K3.Image")));
			this->K3->Location = System::Drawing::Point(684, 174);
			this->K3->Margin = System::Windows::Forms::Padding(4);
			this->K3->Name = L"K3";
			this->K3->Size = System::Drawing::Size(53, 50);
			this->K3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K3->TabIndex = 136;
			this->K3->TabStop = false;
			this->K3->Tag = L"empty";
			this->K3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K2
			// 
			this->K2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K2.Image")));
			this->K2->Location = System::Drawing::Point(684, 116);
			this->K2->Margin = System::Windows::Forms::Padding(4);
			this->K2->Name = L"K2";
			this->K2->Size = System::Drawing::Size(53, 50);
			this->K2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K2->TabIndex = 135;
			this->K2->TabStop = false;
			this->K2->Tag = L"empty";
			this->K2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// K1
			// 
			this->K1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"K1.Image")));
			this->K1->Location = System::Drawing::Point(684, 59);
			this->K1->Margin = System::Windows::Forms::Padding(4);
			this->K1->Name = L"K1";
			this->K1->Size = System::Drawing::Size(53, 50);
			this->K1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->K1->TabIndex = 134;
			this->K1->TabStop = false;
			this->K1->Tag = L"empty";
			this->K1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L13
			// 
			this->L13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L13.Image")));
			this->L13->Location = System::Drawing::Point(745, 749);
			this->L13->Margin = System::Windows::Forms::Padding(4);
			this->L13->Name = L"L13";
			this->L13->Size = System::Drawing::Size(53, 50);
			this->L13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L13->TabIndex = 159;
			this->L13->TabStop = false;
			this->L13->Tag = L"empty";
			this->L13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L12
			// 
			this->L12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L12.Image")));
			this->L12->Location = System::Drawing::Point(745, 691);
			this->L12->Margin = System::Windows::Forms::Padding(4);
			this->L12->Name = L"L12";
			this->L12->Size = System::Drawing::Size(53, 50);
			this->L12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L12->TabIndex = 158;
			this->L12->TabStop = false;
			this->L12->Tag = L"empty";
			this->L12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L11
			// 
			this->L11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L11.Image")));
			this->L11->Location = System::Drawing::Point(745, 634);
			this->L11->Margin = System::Windows::Forms::Padding(4);
			this->L11->Name = L"L11";
			this->L11->Size = System::Drawing::Size(53, 50);
			this->L11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L11->TabIndex = 157;
			this->L11->TabStop = false;
			this->L11->Tag = L"empty";
			this->L11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L10
			// 
			this->L10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L10.Image")));
			this->L10->Location = System::Drawing::Point(745, 576);
			this->L10->Margin = System::Windows::Forms::Padding(4);
			this->L10->Name = L"L10";
			this->L10->Size = System::Drawing::Size(53, 50);
			this->L10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L10->TabIndex = 156;
			this->L10->TabStop = false;
			this->L10->Tag = L"empty";
			this->L10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L9
			// 
			this->L9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L9.Image")));
			this->L9->Location = System::Drawing::Point(745, 519);
			this->L9->Margin = System::Windows::Forms::Padding(4);
			this->L9->Name = L"L9";
			this->L9->Size = System::Drawing::Size(53, 50);
			this->L9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L9->TabIndex = 155;
			this->L9->TabStop = false;
			this->L9->Tag = L"empty";
			this->L9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L8
			// 
			this->L8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L8.Image")));
			this->L8->Location = System::Drawing::Point(745, 461);
			this->L8->Margin = System::Windows::Forms::Padding(4);
			this->L8->Name = L"L8";
			this->L8->Size = System::Drawing::Size(53, 50);
			this->L8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L8->TabIndex = 154;
			this->L8->TabStop = false;
			this->L8->Tag = L"empty";
			this->L8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L7
			// 
			this->L7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L7.Image")));
			this->L7->Location = System::Drawing::Point(745, 404);
			this->L7->Margin = System::Windows::Forms::Padding(4);
			this->L7->Name = L"L7";
			this->L7->Size = System::Drawing::Size(53, 50);
			this->L7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L7->TabIndex = 153;
			this->L7->TabStop = false;
			this->L7->Tag = L"empty";
			this->L7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L6
			// 
			this->L6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L6.Image")));
			this->L6->Location = System::Drawing::Point(745, 346);
			this->L6->Margin = System::Windows::Forms::Padding(4);
			this->L6->Name = L"L6";
			this->L6->Size = System::Drawing::Size(53, 50);
			this->L6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L6->TabIndex = 152;
			this->L6->TabStop = false;
			this->L6->Tag = L"empty";
			this->L6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L5
			// 
			this->L5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L5.Image")));
			this->L5->Location = System::Drawing::Point(745, 289);
			this->L5->Margin = System::Windows::Forms::Padding(4);
			this->L5->Name = L"L5";
			this->L5->Size = System::Drawing::Size(53, 50);
			this->L5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L5->TabIndex = 151;
			this->L5->TabStop = false;
			this->L5->Tag = L"empty";
			this->L5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L4
			// 
			this->L4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L4.Image")));
			this->L4->Location = System::Drawing::Point(745, 231);
			this->L4->Margin = System::Windows::Forms::Padding(4);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(53, 50);
			this->L4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L4->TabIndex = 150;
			this->L4->TabStop = false;
			this->L4->Tag = L"empty";
			this->L4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L3
			// 
			this->L3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L3.Image")));
			this->L3->Location = System::Drawing::Point(745, 174);
			this->L3->Margin = System::Windows::Forms::Padding(4);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(53, 50);
			this->L3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L3->TabIndex = 149;
			this->L3->TabStop = false;
			this->L3->Tag = L"empty";
			this->L3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L2
			// 
			this->L2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L2.Image")));
			this->L2->Location = System::Drawing::Point(745, 116);
			this->L2->Margin = System::Windows::Forms::Padding(4);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(53, 50);
			this->L2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L2->TabIndex = 148;
			this->L2->TabStop = false;
			this->L2->Tag = L"empty";
			this->L2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// L1
			// 
			this->L1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"L1.Image")));
			this->L1->Location = System::Drawing::Point(745, 59);
			this->L1->Margin = System::Windows::Forms::Padding(4);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(53, 50);
			this->L1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->L1->TabIndex = 147;
			this->L1->TabStop = false;
			this->L1->Tag = L"empty";
			this->L1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M13
			// 
			this->M13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M13.Image")));
			this->M13->Location = System::Drawing::Point(807, 749);
			this->M13->Margin = System::Windows::Forms::Padding(4);
			this->M13->Name = L"M13";
			this->M13->Size = System::Drawing::Size(53, 50);
			this->M13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M13->TabIndex = 172;
			this->M13->TabStop = false;
			this->M13->Tag = L"empty";
			this->M13->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M12
			// 
			this->M12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M12.Image")));
			this->M12->Location = System::Drawing::Point(807, 691);
			this->M12->Margin = System::Windows::Forms::Padding(4);
			this->M12->Name = L"M12";
			this->M12->Size = System::Drawing::Size(53, 50);
			this->M12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M12->TabIndex = 171;
			this->M12->TabStop = false;
			this->M12->Tag = L"empty";
			this->M12->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M11
			// 
			this->M11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M11.Image")));
			this->M11->Location = System::Drawing::Point(807, 634);
			this->M11->Margin = System::Windows::Forms::Padding(4);
			this->M11->Name = L"M11";
			this->M11->Size = System::Drawing::Size(53, 50);
			this->M11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M11->TabIndex = 170;
			this->M11->TabStop = false;
			this->M11->Tag = L"empty";
			this->M11->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M10
			// 
			this->M10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M10.Image")));
			this->M10->Location = System::Drawing::Point(807, 576);
			this->M10->Margin = System::Windows::Forms::Padding(4);
			this->M10->Name = L"M10";
			this->M10->Size = System::Drawing::Size(53, 50);
			this->M10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M10->TabIndex = 169;
			this->M10->TabStop = false;
			this->M10->Tag = L"empty";
			this->M10->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M9
			// 
			this->M9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M9.Image")));
			this->M9->Location = System::Drawing::Point(807, 519);
			this->M9->Margin = System::Windows::Forms::Padding(4);
			this->M9->Name = L"M9";
			this->M9->Size = System::Drawing::Size(53, 50);
			this->M9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M9->TabIndex = 168;
			this->M9->TabStop = false;
			this->M9->Tag = L"empty";
			this->M9->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M8
			// 
			this->M8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M8.Image")));
			this->M8->Location = System::Drawing::Point(807, 461);
			this->M8->Margin = System::Windows::Forms::Padding(4);
			this->M8->Name = L"M8";
			this->M8->Size = System::Drawing::Size(53, 50);
			this->M8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M8->TabIndex = 167;
			this->M8->TabStop = false;
			this->M8->Tag = L"empty";
			this->M8->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M7
			// 
			this->M7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M7.Image")));
			this->M7->Location = System::Drawing::Point(807, 404);
			this->M7->Margin = System::Windows::Forms::Padding(4);
			this->M7->Name = L"M7";
			this->M7->Size = System::Drawing::Size(53, 50);
			this->M7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M7->TabIndex = 166;
			this->M7->TabStop = false;
			this->M7->Tag = L"empty";
			this->M7->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M6
			// 
			this->M6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M6.Image")));
			this->M6->Location = System::Drawing::Point(807, 346);
			this->M6->Margin = System::Windows::Forms::Padding(4);
			this->M6->Name = L"M6";
			this->M6->Size = System::Drawing::Size(53, 50);
			this->M6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M6->TabIndex = 165;
			this->M6->TabStop = false;
			this->M6->Tag = L"empty";
			this->M6->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M5
			// 
			this->M5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M5.Image")));
			this->M5->Location = System::Drawing::Point(807, 289);
			this->M5->Margin = System::Windows::Forms::Padding(4);
			this->M5->Name = L"M5";
			this->M5->Size = System::Drawing::Size(53, 50);
			this->M5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M5->TabIndex = 164;
			this->M5->TabStop = false;
			this->M5->Tag = L"empty";
			this->M5->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M4
			// 
			this->M4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M4.Image")));
			this->M4->Location = System::Drawing::Point(807, 231);
			this->M4->Margin = System::Windows::Forms::Padding(4);
			this->M4->Name = L"M4";
			this->M4->Size = System::Drawing::Size(53, 50);
			this->M4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M4->TabIndex = 163;
			this->M4->TabStop = false;
			this->M4->Tag = L"empty";
			this->M4->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M3
			// 
			this->M3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M3.Image")));
			this->M3->Location = System::Drawing::Point(807, 174);
			this->M3->Margin = System::Windows::Forms::Padding(4);
			this->M3->Name = L"M3";
			this->M3->Size = System::Drawing::Size(53, 50);
			this->M3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M3->TabIndex = 162;
			this->M3->TabStop = false;
			this->M3->Tag = L"empty";
			this->M3->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M2
			// 
			this->M2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M2.Image")));
			this->M2->Location = System::Drawing::Point(807, 116);
			this->M2->Margin = System::Windows::Forms::Padding(4);
			this->M2->Name = L"M2";
			this->M2->Size = System::Drawing::Size(53, 50);
			this->M2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M2->TabIndex = 161;
			this->M2->TabStop = false;
			this->M2->Tag = L"empty";
			this->M2->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// M1
			// 
			this->M1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"M1.Image")));
			this->M1->Location = System::Drawing::Point(807, 59);
			this->M1->Margin = System::Windows::Forms::Padding(4);
			this->M1->Name = L"M1";
			this->M1->Size = System::Drawing::Size(53, 50);
			this->M1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->M1->TabIndex = 160;
			this->M1->TabStop = false;
			this->M1->Tag = L"empty";
			this->M1->Click += gcnew System::EventHandler(this, &Game::chosen);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"empty.png");
			this->imageList1->Images->SetKeyName(1, L"deepgreen.png");
			this->imageList1->Images->SetKeyName(2, L"lightgreen.png");
			this->imageList1->Images->SetKeyName(3, L"red.png");
			this->imageList1->Images->SetKeyName(4, L"brown.png");
			// 
			// brown
			// 
			this->brown->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brown.Image")));
			this->brown->Location = System::Drawing::Point(1120, 116);
			this->brown->Name = L"brown";
			this->brown->Size = System::Drawing::Size(40, 40);
			this->brown->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->brown->TabIndex = 173;
			this->brown->TabStop = false;
			this->brown->Click += gcnew System::EventHandler(this, &Game::choosecolor);
			// 
			// deepgreen
			// 
			this->deepgreen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deepgreen.Image")));
			this->deepgreen->Location = System::Drawing::Point(981, 115);
			this->deepgreen->Name = L"deepgreen";
			this->deepgreen->Size = System::Drawing::Size(40, 40);
			this->deepgreen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->deepgreen->TabIndex = 174;
			this->deepgreen->TabStop = false;
			this->deepgreen->Click += gcnew System::EventHandler(this, &Game::choosecolor);
			// 
			// empty
			// 
			this->empty->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"empty.Image")));
			this->empty->Location = System::Drawing::Point(1166, 116);
			this->empty->Name = L"empty";
			this->empty->Size = System::Drawing::Size(40, 40);
			this->empty->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->empty->TabIndex = 175;
			this->empty->TabStop = false;
			this->empty->Click += gcnew System::EventHandler(this, &Game::choosecolor);
			// 
			// lightgreen
			// 
			this->lightgreen->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lightgreen.Image")));
			this->lightgreen->Location = System::Drawing::Point(1028, 115);
			this->lightgreen->Name = L"lightgreen";
			this->lightgreen->Size = System::Drawing::Size(40, 40);
			this->lightgreen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lightgreen->TabIndex = 176;
			this->lightgreen->TabStop = false;
			this->lightgreen->Click += gcnew System::EventHandler(this, &Game::choosecolor);
			// 
			// red
			// 
			this->red->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"red.Image")));
			this->red->Location = System::Drawing::Point(1074, 115);
			this->red->Name = L"red";
			this->red->Size = System::Drawing::Size(40, 40);
			this->red->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->red->TabIndex = 177;
			this->red->TabStop = false;
			this->red->Click += gcnew System::EventHandler(this, &Game::choosecolor);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1437, 911);
			this->Controls->Add(this->red);
			this->Controls->Add(this->lightgreen);
			this->Controls->Add(this->empty);
			this->Controls->Add(this->deepgreen);
			this->Controls->Add(this->brown);
			this->Controls->Add(this->M13);
			this->Controls->Add(this->M12);
			this->Controls->Add(this->M11);
			this->Controls->Add(this->M10);
			this->Controls->Add(this->M9);
			this->Controls->Add(this->M8);
			this->Controls->Add(this->M7);
			this->Controls->Add(this->M6);
			this->Controls->Add(this->M5);
			this->Controls->Add(this->M4);
			this->Controls->Add(this->M3);
			this->Controls->Add(this->M2);
			this->Controls->Add(this->M1);
			this->Controls->Add(this->L13);
			this->Controls->Add(this->L12);
			this->Controls->Add(this->L11);
			this->Controls->Add(this->L10);
			this->Controls->Add(this->L9);
			this->Controls->Add(this->L8);
			this->Controls->Add(this->L7);
			this->Controls->Add(this->L6);
			this->Controls->Add(this->L5);
			this->Controls->Add(this->L4);
			this->Controls->Add(this->L3);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->K13);
			this->Controls->Add(this->K12);
			this->Controls->Add(this->K11);
			this->Controls->Add(this->K10);
			this->Controls->Add(this->K9);
			this->Controls->Add(this->K8);
			this->Controls->Add(this->K7);
			this->Controls->Add(this->K6);
			this->Controls->Add(this->K5);
			this->Controls->Add(this->K4);
			this->Controls->Add(this->K3);
			this->Controls->Add(this->K2);
			this->Controls->Add(this->K1);
			this->Controls->Add(this->J13);
			this->Controls->Add(this->J12);
			this->Controls->Add(this->J11);
			this->Controls->Add(this->J10);
			this->Controls->Add(this->J9);
			this->Controls->Add(this->J8);
			this->Controls->Add(this->J7);
			this->Controls->Add(this->J6);
			this->Controls->Add(this->J5);
			this->Controls->Add(this->J4);
			this->Controls->Add(this->J3);
			this->Controls->Add(this->J2);
			this->Controls->Add(this->J1);
			this->Controls->Add(this->I13);
			this->Controls->Add(this->I12);
			this->Controls->Add(this->I11);
			this->Controls->Add(this->I10);
			this->Controls->Add(this->I9);
			this->Controls->Add(this->I8);
			this->Controls->Add(this->I7);
			this->Controls->Add(this->I6);
			this->Controls->Add(this->I5);
			this->Controls->Add(this->I4);
			this->Controls->Add(this->I3);
			this->Controls->Add(this->I2);
			this->Controls->Add(this->I1);
			this->Controls->Add(this->H13);
			this->Controls->Add(this->H12);
			this->Controls->Add(this->H11);
			this->Controls->Add(this->H10);
			this->Controls->Add(this->H9);
			this->Controls->Add(this->H8);
			this->Controls->Add(this->H7);
			this->Controls->Add(this->H6);
			this->Controls->Add(this->H5);
			this->Controls->Add(this->H4);
			this->Controls->Add(this->H3);
			this->Controls->Add(this->H2);
			this->Controls->Add(this->H1);
			this->Controls->Add(this->G13);
			this->Controls->Add(this->G12);
			this->Controls->Add(this->G11);
			this->Controls->Add(this->G10);
			this->Controls->Add(this->G9);
			this->Controls->Add(this->G8);
			this->Controls->Add(this->G7);
			this->Controls->Add(this->G6);
			this->Controls->Add(this->G5);
			this->Controls->Add(this->G4);
			this->Controls->Add(this->G3);
			this->Controls->Add(this->G2);
			this->Controls->Add(this->G1);
			this->Controls->Add(this->F13);
			this->Controls->Add(this->F12);
			this->Controls->Add(this->F11);
			this->Controls->Add(this->F10);
			this->Controls->Add(this->F9);
			this->Controls->Add(this->F8);
			this->Controls->Add(this->F7);
			this->Controls->Add(this->F6);
			this->Controls->Add(this->F5);
			this->Controls->Add(this->F4);
			this->Controls->Add(this->F3);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->E13);
			this->Controls->Add(this->E12);
			this->Controls->Add(this->E11);
			this->Controls->Add(this->E10);
			this->Controls->Add(this->E9);
			this->Controls->Add(this->E8);
			this->Controls->Add(this->E7);
			this->Controls->Add(this->E6);
			this->Controls->Add(this->E5);
			this->Controls->Add(this->E4);
			this->Controls->Add(this->E3);
			this->Controls->Add(this->E2);
			this->Controls->Add(this->E1);
			this->Controls->Add(this->D13);
			this->Controls->Add(this->D12);
			this->Controls->Add(this->D11);
			this->Controls->Add(this->D10);
			this->Controls->Add(this->D9);
			this->Controls->Add(this->D8);
			this->Controls->Add(this->D7);
			this->Controls->Add(this->D6);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->C13);
			this->Controls->Add(this->C12);
			this->Controls->Add(this->C11);
			this->Controls->Add(this->C10);
			this->Controls->Add(this->C9);
			this->Controls->Add(this->C8);
			this->Controls->Add(this->C7);
			this->Controls->Add(this->C6);
			this->Controls->Add(this->C5);
			this->Controls->Add(this->C4);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B13);
			this->Controls->Add(this->B12);
			this->Controls->Add(this->B11);
			this->Controls->Add(this->B10);
			this->Controls->Add(this->B9);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A13);
			this->Controls->Add(this->A12);
			this->Controls->Add(this->A11);
			this->Controls->Add(this->A10);
			this->Controls->Add(this->A9);
			this->Controls->Add(this->A8);
			this->Controls->Add(this->A7);
			this->Controls->Add(this->A6);
			this->Controls->Add(this->A5);
			this->Controls->Add(this->A4);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelPoints);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->I1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->J1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->K1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->L1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->M1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deepgreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->empty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lightgreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->red))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void chosen(System::Object^  sender, System::EventArgs^  e) {

	PictureBox^ image = (PictureBox^)sender;

	if (press == 1) {
		image->Image = imageList1->Images[1];
		image->Tag = deepgreen;
	}
	else if (press == 2) {
		image->Image = imageList1->Images[2];
		image->Tag = lightgreen;
	}
	else if (press == 3) {
		image->Image = imageList1->Images[3];
		image->Tag = red;
	}
	else if (press == 4) {
		image->Image = imageList1->Images[4];
		image->Tag = brown;
	}
	else if (press == 0) {
		image->Image = imageList1->Images[0];
		image->Tag = empty;
	}

	win();
	//image->Enabled = false;

}
private: System::Void choosecolor(System::Object^  sender, System::EventArgs^  e) {
	PictureBox^ color = (PictureBox^)sender;
	
	if (color == deepgreen)
		press = 1;
	else if (color == lightgreen)
		press = 2;
	else if (color == red)
		press = 3;
	else if (color == brown)
		press = 4;
	else
		press = 0;
}
		 private: Void win() {

			 if (

			 (A11->Tag == deepgreen) && (B10->Tag == deepgreen) && 
			 (C9->Tag == deepgreen) && (C8->Tag == deepgreen) &&
			 (D7->Tag == deepgreen) && (E6->Tag == deepgreen) &&
			 (F6->Tag == deepgreen) && (G6->Tag == deepgreen)

				 ) won = true;

		 }
};
}
