#pragma once

namespace RestaurantOrderingSystemGroup05 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MainForm : public System::Windows::Forms::Form
	{
		bool dragging = false;
		System::Drawing::Point startPoint;

	private: double totalPrice = 0.00;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ ramenAdd;
	private: System::Windows::Forms::Button^ ramenMinus;
	private: System::Windows::Forms::Button^ borgerAdd;
	private: System::Windows::Forms::Button^ borgerMinos;
	private: System::Windows::Forms::Button^ dumplingAdd;
	private: System::Windows::Forms::Button^ minusDumpling;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::ListView^ orderList;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::TextBox^ totalPriceBox;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel12;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel13;

	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ panel14;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Panel^ panel15;

	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel16;

	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button23;

	private: System::Windows::Forms::Panel^ DrinksPanel;
	private: System::Windows::Forms::Panel^ SidesPanel;
	private: System::Windows::Forms::Panel^ DessertsPanel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ MaindishBTN;
	private: System::Windows::Forms::Button^ DrinksBTN;
	private: System::Windows::Forms::Button^ SidedishBTN;
	private: System::Windows::Forms::Button^ DessertBTN;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Button^ exitBtn;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Label^ label60;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::Label^ label61;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Label^ label58;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::Label^ label62;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel54;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Panel^ panel48;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Panel^ panel53;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Panel^ panel52;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Panel^ panel50;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Panel^ panel45;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Panel^ panel51;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Panel^ panel49;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::Panel^ panel47;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Panel^ panel44;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Panel^ panel46;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Panel^ panel43;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::Panel^ panel37;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel38;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Panel^ panel42;
private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Panel^ panel41;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Panel^ panel39;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Panel^ panel40;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Panel^ panel55;
private: System::Windows::Forms::Panel^ panel56;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panel57;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Panel^ panel58;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ panel59;
private: System::Windows::Forms::Label^ n;

private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Panel^ panel60;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::DataGridView^ orderSummaryGridView;




private: System::Windows::Forms::Panel^ panel61;
private: System::Windows::Forms::TextBox^ totalPriceBox1;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Panel^ ty;
private: System::Windows::Forms::Panel^ panel63;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;











	private: System::Windows::Forms::PictureBox^ pictureBox19;

	public:
		MainForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ MainDishPanel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private:
		
		String^ itemnum, ^ qty, ^ ordername, ^ price;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel61 = (gcnew System::Windows::Forms::Panel());
			this->totalPriceBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->orderSummaryGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel60 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->MainDishPanel = (gcnew System::Windows::Forms::Panel());
			this->panel55 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->borgerAdd = (gcnew System::Windows::Forms::Button());
			this->borgerMinos = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ramenAdd = (gcnew System::Windows::Forms::Button());
			this->ramenMinus = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->dumplingAdd = (gcnew System::Windows::Forms::Button());
			this->minusDumpling = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel54 = (gcnew System::Windows::Forms::Panel());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel48 = (gcnew System::Windows::Forms::Panel());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel53 = (gcnew System::Windows::Forms::Panel());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel52 = (gcnew System::Windows::Forms::Panel());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel50 = (gcnew System::Windows::Forms::Panel());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel45 = (gcnew System::Windows::Forms::Panel());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel51 = (gcnew System::Windows::Forms::Panel());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel49 = (gcnew System::Windows::Forms::Panel());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel47 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel44 = (gcnew System::Windows::Forms::Panel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel46 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel43 = (gcnew System::Windows::Forms::Panel());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->orderList = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->totalPriceBox = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->DrinksPanel = (gcnew System::Windows::Forms::Panel());
			this->panel56 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SidesPanel = (gcnew System::Windows::Forms::Panel());
			this->panel57 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->DessertsPanel = (gcnew System::Windows::Forms::Panel());
			this->panel58 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->MaindishBTN = (gcnew System::Windows::Forms::Button());
			this->DrinksBTN = (gcnew System::Windows::Forms::Button());
			this->SidedishBTN = (gcnew System::Windows::Forms::Button());
			this->DessertBTN = (gcnew System::Windows::Forms::Button());
			this->panel59 = (gcnew System::Windows::Forms::Panel());
			this->ty = (gcnew System::Windows::Forms::Panel());
			this->panel63 = (gcnew System::Windows::Forms::Panel());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel61->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderSummaryGridView))->BeginInit();
			this->MainDishPanel->SuspendLayout();
			this->panel55->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel35->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel6->SuspendLayout();
			this->panel36->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel23->SuspendLayout();
			this->panel54->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel48->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->panel24->SuspendLayout();
			this->panel53->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel25->SuspendLayout();
			this->panel52->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel26->SuspendLayout();
			this->panel50->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel18->SuspendLayout();
			this->panel45->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			this->panel27->SuspendLayout();
			this->panel51->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel28->SuspendLayout();
			this->panel49->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel19->SuspendLayout();
			this->panel47->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->panel20->SuspendLayout();
			this->panel44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->panel21->SuspendLayout();
			this->panel46->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->panel22->SuspendLayout();
			this->panel43->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel30->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel37->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel15->SuspendLayout();
			this->panel38->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel42->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel13->SuspendLayout();
			this->panel41->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel39->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel40->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->DrinksPanel->SuspendLayout();
			this->panel56->SuspendLayout();
			this->SidesPanel->SuspendLayout();
			this->panel57->SuspendLayout();
			this->DessertsPanel->SuspendLayout();
			this->panel58->SuspendLayout();
			this->ty->SuspendLayout();
			this->panel63->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->exitBtn);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1365, 32);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel1_Paint);
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MD);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MM);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MU);
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->exitBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitBtn.BackgroundImage")));
			this->exitBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Location = System::Drawing::Point(1337, 4);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(25, 25);
			this->exitBtn->TabIndex = 13;
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MainForm::exitBtn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1445, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(25, 25);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 32);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(290, 667);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->panel61);
			this->panel3->Controls->Add(this->orderSummaryGridView);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->n);
			this->panel3->Controls->Add(this->label38);
			this->panel3->Controls->Add(this->panel60);
			this->panel3->Location = System::Drawing::Point(24, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(242, 610);
			this->panel3->TabIndex = 1;
			// 
			// panel61
			// 
			this->panel61->Controls->Add(this->totalPriceBox1);
			this->panel61->Controls->Add(this->label39);
			this->panel61->Location = System::Drawing::Point(0, 524);
			this->panel61->Name = L"panel61";
			this->panel61->Size = System::Drawing::Size(241, 37);
			this->panel61->TabIndex = 10;
			// 
			// totalPriceBox1
			// 
			this->totalPriceBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalPriceBox1->Location = System::Drawing::Point(125, 6);
			this->totalPriceBox1->Name = L"totalPriceBox1";
			this->totalPriceBox1->ReadOnly = true;
			this->totalPriceBox1->Size = System::Drawing::Size(87, 24);
			this->totalPriceBox1->TabIndex = 7;
			this->totalPriceBox1->Text = L"0";
			this->totalPriceBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(26, 10);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(97, 16);
			this->label39->TabIndex = 4;
			this->label39->Text = L"TOTAL PRICE: ";
			// 
			// orderSummaryGridView
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopLeft;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->orderSummaryGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->orderSummaryGridView->BackgroundColor = System::Drawing::Color::Tan;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->orderSummaryGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->orderSummaryGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->orderSummaryGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->orderSummaryGridView->DefaultCellStyle = dataGridViewCellStyle3;
			this->orderSummaryGridView->EnableHeadersVisualStyles = false;
			this->orderSummaryGridView->GridColor = System::Drawing::Color::White;
			this->orderSummaryGridView->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->orderSummaryGridView->Location = System::Drawing::Point(0, 61);
			this->orderSummaryGridView->Name = L"orderSummaryGridView";
			this->orderSummaryGridView->ReadOnly = true;
			this->orderSummaryGridView->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->orderSummaryGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->orderSummaryGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->orderSummaryGridView->RowHeadersVisible = false;
			this->orderSummaryGridView->RowHeadersWidth = 4;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			this->orderSummaryGridView->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->orderSummaryGridView->Size = System::Drawing::Size(242, 452);
			this->orderSummaryGridView->TabIndex = 9;
			this->orderSummaryGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::orderSummaryGridView_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Item #";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 40;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"Qty";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 30;
			// 
			// Column4
			// 
			this->Column4->Frozen = true;
			this->Column4->HeaderText = L"Total Price";
			this->Column4->MinimumWidth = 7;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 69;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PeachPuff;
			this->button3->Enabled = false;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Peru;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SandyBrown;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(17, 570);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(209, 29);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Print Receipt";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// n
			// 
			this->n->AutoSize = true;
			this->n->BackColor = System::Drawing::Color::Transparent;
			this->n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->n->ForeColor = System::Drawing::Color::Black;
			this->n->Location = System::Drawing::Point(155, 10);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(32, 33);
			this->n->TabIndex = 2;
			this->n->Text = L"n";
			this->n->Click += gcnew System::EventHandler(this, &MainForm::n_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Black;
			this->label38->Location = System::Drawing::Point(3, 11);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(160, 33);
			this->label38->TabIndex = 1;
			this->label38->Text = L"ORDER #:";
			// 
			// panel60
			// 
			this->panel60->Location = System::Drawing::Point(0, 61);
			this->panel60->Name = L"panel60";
			this->panel60->Size = System::Drawing::Size(241, 100);
			this->panel60->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(32, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SJC FOOD HUB";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// MainDishPanel
			// 
			this->MainDishPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->MainDishPanel->Controls->Add(this->panel55);
			this->MainDishPanel->Controls->Add(this->panel9);
			this->MainDishPanel->Controls->Add(this->panel7);
			this->MainDishPanel->Controls->Add(this->panel10);
			this->MainDishPanel->Controls->Add(this->panel6);
			this->MainDishPanel->Controls->Add(this->panel8);
			this->MainDishPanel->Controls->Add(this->panel5);
			this->MainDishPanel->Location = System::Drawing::Point(296, 120);
			this->MainDishPanel->Name = L"MainDishPanel";
			this->MainDishPanel->Size = System::Drawing::Size(663, 574);
			this->MainDishPanel->TabIndex = 2;
			this->MainDishPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// panel55
			// 
			this->panel55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel55->Controls->Add(this->label4);
			this->panel55->Location = System::Drawing::Point(-2, 10);
			this->panel55->Name = L"panel55";
			this->panel55->Size = System::Drawing::Size(665, 50);
			this->panel55->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(238, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(190, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"MAIN DISH";
			this->label4->Click += gcnew System::EventHandler(this, &MainForm::label4_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel9->Controls->Add(this->panel34);
			this->panel9->Controls->Add(this->pictureBox6);
			this->panel9->Controls->Add(this->label8);
			this->panel9->Location = System::Drawing::Point(441, 316);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(206, 206);
			this->panel9->TabIndex = 4;
			// 
			// panel34
			// 
			this->panel34->Controls->Add(this->label60);
			this->panel34->Controls->Add(this->button6);
			this->panel34->Controls->Add(this->button7);
			this->panel34->Location = System::Drawing::Point(1, 159);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(205, 32);
			this->panel34->TabIndex = 55;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::LightCoral;
			this->label60->Location = System::Drawing::Point(71, 4);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(65, 18);
			this->label60->TabIndex = 33;
			this->label60->Text = L"PHP 50";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 4;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(27, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(25, 25);
			this->button6->TabIndex = 33;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 4;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(154, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(25, 25);
			this->button7->TabIndex = 34;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox6->Location = System::Drawing::Point(26, 9);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(157, 130);
			this->pictureBox6->TabIndex = 54;
			this->pictureBox6->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(74, 139);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"CHAOFAN";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel7->Controls->Add(this->panel35);
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Location = System::Drawing::Point(229, 316);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(206, 206);
			this->panel7->TabIndex = 4;
			// 
			// panel35
			// 
			this->panel35->Controls->Add(this->label61);
			this->panel35->Controls->Add(this->button8);
			this->panel35->Controls->Add(this->button9);
			this->panel35->Location = System::Drawing::Point(1, 159);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(205, 32);
			this->panel35->TabIndex = 54;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::LightCoral;
			this->label61->Location = System::Drawing::Point(67, 4);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(74, 18);
			this->label61->TabIndex = 33;
			this->label61->Text = L"PHP 100";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderSize = 4;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(27, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(25, 25);
			this->button8->TabIndex = 36;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 4;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(154, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(25, 25);
			this->button9->TabIndex = 37;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Location = System::Drawing::Point(26, 9);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(157, 130);
			this->pictureBox5->TabIndex = 53;
			this->pictureBox5->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(63, 139);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 16);
			this->label11->TabIndex = 9;
			this->label11->Text = L"FRIED CHICKEN";
			this->label11->Click += gcnew System::EventHandler(this, &MainForm::label11_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel10->Controls->Add(this->panel33);
			this->panel10->Controls->Add(this->pictureBox3);
			this->panel10->Controls->Add(this->label12);
			this->panel10->Location = System::Drawing::Point(441, 73);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(206, 206);
			this->panel10->TabIndex = 3;
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel10_Paint);
			// 
			// panel33
			// 
			this->panel33->Controls->Add(this->label58);
			this->panel33->Controls->Add(this->borgerAdd);
			this->panel33->Controls->Add(this->borgerMinos);
			this->panel33->Location = System::Drawing::Point(1, 159);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(205, 32);
			this->panel33->TabIndex = 37;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->ForeColor = System::Drawing::Color::LightCoral;
			this->label58->Location = System::Drawing::Point(67, 4);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(74, 18);
			this->label58->TabIndex = 33;
			this->label58->Text = L"PHP 100";
			// 
			// borgerAdd
			// 
			this->borgerAdd->BackColor = System::Drawing::Color::White;
			this->borgerAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"borgerAdd.BackgroundImage")));
			this->borgerAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->borgerAdd->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->borgerAdd->FlatAppearance->BorderSize = 4;
			this->borgerAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->borgerAdd->Location = System::Drawing::Point(27, 3);
			this->borgerAdd->Name = L"borgerAdd";
			this->borgerAdd->Size = System::Drawing::Size(25, 25);
			this->borgerAdd->TabIndex = 30;
			this->borgerAdd->UseVisualStyleBackColor = false;
			this->borgerAdd->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// borgerMinos
			// 
			this->borgerMinos->BackColor = System::Drawing::Color::White;
			this->borgerMinos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"borgerMinos.BackgroundImage")));
			this->borgerMinos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->borgerMinos->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->borgerMinos->FlatAppearance->BorderSize = 4;
			this->borgerMinos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->borgerMinos->Location = System::Drawing::Point(154, 3);
			this->borgerMinos->Name = L"borgerMinos";
			this->borgerMinos->Size = System::Drawing::Size(25, 25);
			this->borgerMinos->TabIndex = 31;
			this->borgerMinos->UseVisualStyleBackColor = false;
			this->borgerMinos->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(26, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(157, 130);
			this->pictureBox3->TabIndex = 36;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MainForm::pictureBox3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(79, 139);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 16);
			this->label12->TabIndex = 10;
			this->label12->Text = L"BURGER";
			this->label12->Click += gcnew System::EventHandler(this, &MainForm::label12_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel6->Controls->Add(this->panel36);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Location = System::Drawing::Point(15, 316);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(206, 206);
			this->panel6->TabIndex = 2;
			// 
			// panel36
			// 
			this->panel36->Controls->Add(this->label62);
			this->panel36->Controls->Add(this->button10);
			this->panel36->Controls->Add(this->button11);
			this->panel36->Location = System::Drawing::Point(1, 159);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(205, 32);
			this->panel36->TabIndex = 53;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::LightCoral;
			this->label62->Location = System::Drawing::Point(67, 4);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(74, 18);
			this->label62->TabIndex = 33;
			this->label62->Text = L"PHP 100";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderSize = 4;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(27, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(25, 25);
			this->button10->TabIndex = 39;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderSize = 4;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(154, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(25, 25);
			this->button11->TabIndex = 40;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Location = System::Drawing::Point(26, 9);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(157, 130);
			this->pictureBox4->TabIndex = 52;
			this->pictureBox4->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(51, 139);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(120, 16);
			this->label13->TabIndex = 11;
			this->label13->Text = L"SHAWARMA RICE\r\n";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel8->Controls->Add(this->panel32);
			this->panel8->Controls->Add(this->pictureBox2);
			this->panel8->Controls->Add(this->label10);
			this->panel8->Location = System::Drawing::Point(229, 73);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(206, 206);
			this->panel8->TabIndex = 3;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel8_Paint);
			// 
			// panel32
			// 
			this->panel32->Controls->Add(this->label2);
			this->panel32->Controls->Add(this->ramenAdd);
			this->panel32->Controls->Add(this->ramenMinus);
			this->panel32->Location = System::Drawing::Point(1, 159);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(205, 32);
			this->panel32->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightCoral;
			this->label2->Location = System::Drawing::Point(67, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 18);
			this->label2->TabIndex = 33;
			this->label2->Text = L"PHP 100";
			// 
			// ramenAdd
			// 
			this->ramenAdd->BackColor = System::Drawing::Color::White;
			this->ramenAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ramenAdd.BackgroundImage")));
			this->ramenAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ramenAdd->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ramenAdd->FlatAppearance->BorderSize = 4;
			this->ramenAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ramenAdd->Location = System::Drawing::Point(27, 3);
			this->ramenAdd->Name = L"ramenAdd";
			this->ramenAdd->Size = System::Drawing::Size(25, 25);
			this->ramenAdd->TabIndex = 27;
			this->ramenAdd->UseVisualStyleBackColor = false;
			this->ramenAdd->Click += gcnew System::EventHandler(this, &MainForm::ramenAdd_Click);
			// 
			// ramenMinus
			// 
			this->ramenMinus->BackColor = System::Drawing::Color::White;
			this->ramenMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ramenMinus.BackgroundImage")));
			this->ramenMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ramenMinus->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ramenMinus->FlatAppearance->BorderSize = 4;
			this->ramenMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ramenMinus->Location = System::Drawing::Point(154, 3);
			this->ramenMinus->Name = L"ramenMinus";
			this->ramenMinus->Size = System::Drawing::Size(25, 25);
			this->ramenMinus->TabIndex = 28;
			this->ramenMinus->UseVisualStyleBackColor = false;
			this->ramenMinus->Click += gcnew System::EventHandler(this, &MainForm::ramenMinus_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(26, 9);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(157, 130);
			this->pictureBox2->TabIndex = 35;
			this->pictureBox2->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(82, 139);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 16);
			this->label10->TabIndex = 8;
			this->label10->Text = L"RAMEN";
			this->label10->Click += gcnew System::EventHandler(this, &MainForm::label10_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel5->Controls->Add(this->panel31);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Location = System::Drawing::Point(15, 73);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(206, 206);
			this->panel5->TabIndex = 1;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel5_Paint);
			// 
			// panel31
			// 
			this->panel31->Controls->Add(this->label32);
			this->panel31->Controls->Add(this->dumplingAdd);
			this->panel31->Controls->Add(this->minusDumpling);
			this->panel31->Location = System::Drawing::Point(1, 159);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(205, 32);
			this->panel31->TabIndex = 35;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::LightCoral;
			this->label32->Location = System::Drawing::Point(60, 4);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(88, 18);
			this->label32->TabIndex = 33;
			this->label32->Text = L"PHP 20/pc";
			this->label32->Click += gcnew System::EventHandler(this, &MainForm::label32_Click);
			// 
			// dumplingAdd
			// 
			this->dumplingAdd->BackColor = System::Drawing::Color::White;
			this->dumplingAdd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dumplingAdd.BackgroundImage")));
			this->dumplingAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->dumplingAdd->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->dumplingAdd->FlatAppearance->BorderSize = 4;
			this->dumplingAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dumplingAdd->Location = System::Drawing::Point(27, 3);
			this->dumplingAdd->Name = L"dumplingAdd";
			this->dumplingAdd->Size = System::Drawing::Size(25, 25);
			this->dumplingAdd->TabIndex = 30;
			this->dumplingAdd->UseVisualStyleBackColor = false;
			this->dumplingAdd->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// minusDumpling
			// 
			this->minusDumpling->BackColor = System::Drawing::Color::White;
			this->minusDumpling->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minusDumpling.BackgroundImage")));
			this->minusDumpling->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->minusDumpling->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->minusDumpling->FlatAppearance->BorderSize = 4;
			this->minusDumpling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minusDumpling->Location = System::Drawing::Point(154, 3);
			this->minusDumpling->Name = L"minusDumpling";
			this->minusDumpling->Size = System::Drawing::Size(25, 25);
			this->minusDumpling->TabIndex = 31;
			this->minusDumpling->UseVisualStyleBackColor = false;
			this->minusDumpling->Click += gcnew System::EventHandler(this, &MainForm::minusDumpling_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(26, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(157, 130);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(62, 139);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 16);
			this->label9->TabIndex = 7;
			this->label9->Text = L"DUMPLINGS";
			this->label9->Click += gcnew System::EventHandler(this, &MainForm::label9_Click);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel23->Controls->Add(this->panel54);
			this->panel23->Controls->Add(this->pictureBox18);
			this->panel23->Controls->Add(this->label27);
			this->panel23->Location = System::Drawing::Point(441, 316);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(206, 206);
			this->panel23->TabIndex = 49;
			// 
			// panel54
			// 
			this->panel54->Controls->Add(this->label75);
			this->panel54->Controls->Add(this->button37);
			this->panel54->Controls->Add(this->button36);
			this->panel54->Location = System::Drawing::Point(1, 159);
			this->panel54->Name = L"panel54";
			this->panel54->Size = System::Drawing::Size(205, 32);
			this->panel54->TabIndex = 65;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Transparent;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::LightCoral;
			this->label75->Location = System::Drawing::Point(71, 4);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(65, 18);
			this->label75->TabIndex = 33;
			this->label75->Text = L"PHP 50";
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::White;
			this->button37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.BackgroundImage")));
			this->button37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button37->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button37->FlatAppearance->BorderSize = 4;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Location = System::Drawing::Point(154, 3);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(25, 25);
			this->button37->TabIndex = 34;
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MainForm::button37_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::White;
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button36->FlatAppearance->BorderSize = 4;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(27, 3);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(25, 25);
			this->button36->TabIndex = 33;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MainForm::button36_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox18->Location = System::Drawing::Point(25, 3);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(157, 130);
			this->pictureBox18->TabIndex = 64;
			this->pictureBox18->TabStop = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(62, 136);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(90, 14);
			this->label27->TabIndex = 9;
			this->label27->Text = L"CAKE (1 slice)";
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel17->Controls->Add(this->panel48);
			this->panel17->Controls->Add(this->pictureBox24);
			this->panel17->Controls->Add(this->label20);
			this->panel17->Location = System::Drawing::Point(441, 316);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(206, 206);
			this->panel17->TabIndex = 43;
			// 
			// panel48
			// 
			this->panel48->Controls->Add(this->label69);
			this->panel48->Controls->Add(this->button24);
			this->panel48->Controls->Add(this->button25);
			this->panel48->Location = System::Drawing::Point(1, 159);
			this->panel48->Name = L"panel48";
			this->panel48->Size = System::Drawing::Size(205, 32);
			this->panel48->TabIndex = 63;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Transparent;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->ForeColor = System::Drawing::Color::LightCoral;
			this->label69->Location = System::Drawing::Point(71, 4);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(65, 18);
			this->label69->TabIndex = 33;
			this->label69->Text = L"PHP 50";
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderSize = 4;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(27, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(25, 25);
			this->button24->TabIndex = 33;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MainForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button25->FlatAppearance->BorderSize = 4;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(154, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(25, 25);
			this->button25->TabIndex = 34;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MainForm::button25_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox24->Location = System::Drawing::Point(26, 9);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(157, 130);
			this->pictureBox24->TabIndex = 62;
			this->pictureBox24->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(51, 140);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(111, 14);
			this->label20->TabIndex = 6;
			this->label20->Text = L"POTATO WEDGES";
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel24->Controls->Add(this->panel53);
			this->panel24->Controls->Add(this->pictureBox17);
			this->panel24->Controls->Add(this->label26);
			this->panel24->Location = System::Drawing::Point(229, 316);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(206, 206);
			this->panel24->TabIndex = 50;
			// 
			// panel53
			// 
			this->panel53->Controls->Add(this->label74);
			this->panel53->Controls->Add(this->button39);
			this->panel53->Controls->Add(this->button38);
			this->panel53->Location = System::Drawing::Point(1, 159);
			this->panel53->Name = L"panel53";
			this->panel53->Size = System::Drawing::Size(205, 32);
			this->panel53->TabIndex = 66;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::Transparent;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->ForeColor = System::Drawing::Color::LightCoral;
			this->label74->Location = System::Drawing::Point(71, 4);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(65, 18);
			this->label74->TabIndex = 33;
			this->label74->Text = L"PHP 80";
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::White;
			this->button39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.BackgroundImage")));
			this->button39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button39->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button39->FlatAppearance->BorderSize = 4;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Location = System::Drawing::Point(154, 3);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(25, 25);
			this->button39->TabIndex = 37;
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MainForm::button39_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::White;
			this->button38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.BackgroundImage")));
			this->button38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button38->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button38->FlatAppearance->BorderSize = 4;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Location = System::Drawing::Point(27, 3);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(25, 25);
			this->button38->TabIndex = 36;
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MainForm::button38_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox17->Location = System::Drawing::Point(24, 3);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(157, 130);
			this->pictureBox17->TabIndex = 65;
			this->pictureBox17->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(68, 136);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(69, 14);
			this->label26->TabIndex = 6;
			this->label26->Text = L"TIRAMISU";
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel25->Controls->Add(this->panel52);
			this->panel25->Controls->Add(this->pictureBox15);
			this->panel25->Controls->Add(this->label28);
			this->panel25->Location = System::Drawing::Point(441, 71);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(206, 206);
			this->panel25->TabIndex = 47;
			// 
			// panel52
			// 
			this->panel52->Controls->Add(this->label73);
			this->panel52->Controls->Add(this->button40);
			this->panel52->Controls->Add(this->button41);
			this->panel52->Location = System::Drawing::Point(1, 159);
			this->panel52->Name = L"panel52";
			this->panel52->Size = System::Drawing::Size(205, 32);
			this->panel52->TabIndex = 64;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->ForeColor = System::Drawing::Color::LightCoral;
			this->label73->Location = System::Drawing::Point(71, 4);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(65, 18);
			this->label73->TabIndex = 33;
			this->label73->Text = L"PHP 40";
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::White;
			this->button40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.BackgroundImage")));
			this->button40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button40->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button40->FlatAppearance->BorderSize = 4;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Location = System::Drawing::Point(27, 3);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(25, 25);
			this->button40->TabIndex = 30;
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MainForm::button40_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::White;
			this->button41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.BackgroundImage")));
			this->button41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button41->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button41->FlatAppearance->BorderSize = 4;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Location = System::Drawing::Point(154, 3);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(25, 25);
			this->button41->TabIndex = 31;
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MainForm::button41_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox15->Location = System::Drawing::Point(25, 2);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(157, 130);
			this->pictureBox15->TabIndex = 63;
			this->pictureBox15->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(68, 136);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(75, 14);
			this->label28->TabIndex = 10;
			this->label28->Text = L"ICE CREAM";
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel26->Controls->Add(this->panel50);
			this->panel26->Controls->Add(this->pictureBox16);
			this->panel26->Controls->Add(this->label29);
			this->panel26->Location = System::Drawing::Point(15, 316);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(206, 206);
			this->panel26->TabIndex = 46;
			// 
			// panel50
			// 
			this->panel50->Controls->Add(this->label71);
			this->panel50->Controls->Add(this->button43);
			this->panel50->Controls->Add(this->button42);
			this->panel50->Location = System::Drawing::Point(1, 159);
			this->panel50->Name = L"panel50";
			this->panel50->Size = System::Drawing::Size(205, 32);
			this->panel50->TabIndex = 67;
			this->panel50->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel50_Paint);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::LightCoral;
			this->label71->Location = System::Drawing::Point(71, 4);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(65, 18);
			this->label71->TabIndex = 33;
			this->label71->Text = L"PHP 60";
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::White;
			this->button43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.BackgroundImage")));
			this->button43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button43->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button43->FlatAppearance->BorderSize = 4;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Location = System::Drawing::Point(154, 3);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(25, 25);
			this->button43->TabIndex = 40;
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MainForm::button43_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::White;
			this->button42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.BackgroundImage")));
			this->button42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button42->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button42->FlatAppearance->BorderSize = 4;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Location = System::Drawing::Point(27, 3);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(25, 25);
			this->button42->TabIndex = 39;
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MainForm::button42_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox16->Location = System::Drawing::Point(26, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(157, 130);
			this->pictureBox16->TabIndex = 66;
			this->pictureBox16->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(57, 136);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(94, 14);
			this->label29->TabIndex = 11;
			this->label29->Text = L"MANGO FLOAT";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel18->Controls->Add(this->panel45);
			this->panel18->Controls->Add(this->pictureBox23);
			this->panel18->Controls->Add(this->label21);
			this->panel18->Location = System::Drawing::Point(229, 316);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(206, 206);
			this->panel18->TabIndex = 44;
			// 
			// panel45
			// 
			this->panel45->Controls->Add(this->label66);
			this->panel45->Controls->Add(this->button27);
			this->panel45->Controls->Add(this->button26);
			this->panel45->Location = System::Drawing::Point(1, 159);
			this->panel45->Name = L"panel45";
			this->panel45->Size = System::Drawing::Size(205, 32);
			this->panel45->TabIndex = 62;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Transparent;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::LightCoral;
			this->label66->Location = System::Drawing::Point(71, 4);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(65, 18);
			this->label66->TabIndex = 33;
			this->label66->Text = L"PHP 50";
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button27->FlatAppearance->BorderSize = 4;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(154, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(25, 25);
			this->button27->TabIndex = 37;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MainForm::button27_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->BorderSize = 4;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(27, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(25, 25);
			this->button26->TabIndex = 36;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MainForm::button26_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox23->Location = System::Drawing::Point(26, 9);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(157, 130);
			this->pictureBox23->TabIndex = 61;
			this->pictureBox23->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(50, 140);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(113, 14);
			this->label21->TabIndex = 9;
			this->label21->Text = L"MASHED POTATO";
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel27->Controls->Add(this->panel51);
			this->panel27->Controls->Add(this->pictureBox14);
			this->panel27->Controls->Add(this->label30);
			this->panel27->Location = System::Drawing::Point(229, 71);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(206, 206);
			this->panel27->TabIndex = 48;
			// 
			// panel51
			// 
			this->panel51->Controls->Add(this->label72);
			this->panel51->Controls->Add(this->button44);
			this->panel51->Controls->Add(this->button45);
			this->panel51->Location = System::Drawing::Point(1, 159);
			this->panel51->Name = L"panel51";
			this->panel51->Size = System::Drawing::Size(205, 32);
			this->panel51->TabIndex = 63;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::LightCoral;
			this->label72->Location = System::Drawing::Point(71, 4);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(65, 18);
			this->label72->TabIndex = 33;
			this->label72->Text = L"PHP 60";
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::White;
			this->button44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.BackgroundImage")));
			this->button44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button44->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button44->FlatAppearance->BorderSize = 4;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Location = System::Drawing::Point(27, 3);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(25, 25);
			this->button44->TabIndex = 27;
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MainForm::button44_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::White;
			this->button45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button45.BackgroundImage")));
			this->button45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button45->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button45->FlatAppearance->BorderSize = 4;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Location = System::Drawing::Point(154, 3);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(25, 25);
			this->button45->TabIndex = 28;
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MainForm::button45_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox14->Location = System::Drawing::Point(24, 2);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(157, 130);
			this->pictureBox14->TabIndex = 62;
			this->pictureBox14->TabStop = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(62, 136);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(80, 14);
			this->label30->TabIndex = 8;
			this->label30->Text = L"HALO-HALO";
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel28->Controls->Add(this->panel49);
			this->panel28->Controls->Add(this->pictureBox13);
			this->panel28->Controls->Add(this->label31);
			this->panel28->Location = System::Drawing::Point(15, 71);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(206, 206);
			this->panel28->TabIndex = 45;
			// 
			// panel49
			// 
			this->panel49->Controls->Add(this->label70);
			this->panel49->Controls->Add(this->button46);
			this->panel49->Controls->Add(this->button47);
			this->panel49->Location = System::Drawing::Point(1, 159);
			this->panel49->Name = L"panel49";
			this->panel49->Size = System::Drawing::Size(205, 32);
			this->panel49->TabIndex = 62;
			this->panel49->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel49_Paint);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::Transparent;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::Color::LightCoral;
			this->label70->Location = System::Drawing::Point(71, 4);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(65, 18);
			this->label70->TabIndex = 33;
			this->label70->Text = L"PHP 60";
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::White;
			this->button46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.BackgroundImage")));
			this->button46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button46->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button46->FlatAppearance->BorderSize = 4;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Location = System::Drawing::Point(27, 3);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(25, 25);
			this->button46->TabIndex = 30;
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MainForm::button46_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::White;
			this->button47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.BackgroundImage")));
			this->button47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button47->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button47->FlatAppearance->BorderSize = 4;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Location = System::Drawing::Point(154, 3);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(25, 25);
			this->button47->TabIndex = 31;
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MainForm::button47_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox13->Location = System::Drawing::Point(25, 2);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(157, 130);
			this->pictureBox13->TabIndex = 61;
			this->pictureBox13->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(63, 136);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(85, 14);
			this->label31->TabIndex = 7;
			this->label31->Text = L"CHEESECAKE";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel19->Controls->Add(this->panel47);
			this->panel19->Controls->Add(this->pictureBox21);
			this->panel19->Controls->Add(this->label22);
			this->panel19->Location = System::Drawing::Point(441, 71);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(206, 206);
			this->panel19->TabIndex = 41;
			// 
			// panel47
			// 
			this->panel47->Controls->Add(this->label68);
			this->panel47->Controls->Add(this->button28);
			this->panel47->Controls->Add(this->button29);
			this->panel47->Location = System::Drawing::Point(1, 159);
			this->panel47->Name = L"panel47";
			this->panel47->Size = System::Drawing::Size(205, 32);
			this->panel47->TabIndex = 66;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->ForeColor = System::Drawing::Color::LightCoral;
			this->label68->Location = System::Drawing::Point(71, 4);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(65, 18);
			this->label68->TabIndex = 33;
			this->label68->Text = L"PHP 20";
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->BorderSize = 4;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(27, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(25, 25);
			this->button28->TabIndex = 30;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MainForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button29->FlatAppearance->BorderSize = 4;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(154, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(25, 25);
			this->button29->TabIndex = 31;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MainForm::button29_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox21->Location = System::Drawing::Point(26, 9);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(157, 130);
			this->pictureBox21->TabIndex = 65;
			this->pictureBox21->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(56, 140);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(97, 14);
			this->label22->TabIndex = 10;
			this->label22->Text = L"SPRING ROLLS";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel20->Controls->Add(this->panel44);
			this->panel20->Controls->Add(this->pictureBox22);
			this->panel20->Controls->Add(this->label23);
			this->panel20->Location = System::Drawing::Point(15, 316);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(206, 206);
			this->panel20->TabIndex = 40;
			// 
			// panel44
			// 
			this->panel44->Controls->Add(this->label65);
			this->panel44->Controls->Add(this->button31);
			this->panel44->Controls->Add(this->button30);
			this->panel44->Location = System::Drawing::Point(1, 159);
			this->panel44->Name = L"panel44";
			this->panel44->Size = System::Drawing::Size(205, 32);
			this->panel44->TabIndex = 61;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::LightCoral;
			this->label65->Location = System::Drawing::Point(71, 4);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(65, 18);
			this->label65->TabIndex = 33;
			this->label65->Text = L"PHP 20";
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button31->FlatAppearance->BorderSize = 4;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(154, 3);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(25, 25);
			this->button31->TabIndex = 40;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MainForm::button31_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->BorderSize = 4;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(27, 3);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(25, 25);
			this->button30->TabIndex = 39;
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MainForm::button30_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox22->Location = System::Drawing::Point(26, 9);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(157, 130);
			this->pictureBox22->TabIndex = 60;
			this->pictureBox22->TabStop = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(65, 140);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(80, 14);
			this->label23->TabIndex = 11;
			this->label23->Text = L"EXTRA RICE";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel21->Controls->Add(this->panel46);
			this->panel21->Controls->Add(this->pictureBox20);
			this->panel21->Controls->Add(this->label24);
			this->panel21->Location = System::Drawing::Point(229, 71);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(206, 206);
			this->panel21->TabIndex = 42;
			// 
			// panel46
			// 
			this->panel46->Controls->Add(this->label67);
			this->panel46->Controls->Add(this->button32);
			this->panel46->Controls->Add(this->button33);
			this->panel46->Location = System::Drawing::Point(1, 159);
			this->panel46->Name = L"panel46";
			this->panel46->Size = System::Drawing::Size(205, 32);
			this->panel46->TabIndex = 63;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::LightCoral;
			this->label67->Location = System::Drawing::Point(71, 4);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(65, 18);
			this->label67->TabIndex = 33;
			this->label67->Text = L"PHP 50";
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button32->FlatAppearance->BorderSize = 4;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(27, 3);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(25, 25);
			this->button32->TabIndex = 27;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MainForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button33->FlatAppearance->BorderSize = 4;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(154, 3);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(25, 25);
			this->button33->TabIndex = 28;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MainForm::button33_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox20->Location = System::Drawing::Point(26, 9);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(157, 130);
			this->pictureBox20->TabIndex = 62;
			this->pictureBox20->TabStop = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(60, 140);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 14);
			this->label24->TabIndex = 8;
			this->label24->Text = L"ONION RINGS";
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel22->Controls->Add(this->panel43);
			this->panel22->Controls->Add(this->pictureBox19);
			this->panel22->Controls->Add(this->label25);
			this->panel22->Location = System::Drawing::Point(15, 71);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(206, 206);
			this->panel22->TabIndex = 39;
			// 
			// panel43
			// 
			this->panel43->Controls->Add(this->label64);
			this->panel43->Controls->Add(this->button34);
			this->panel43->Controls->Add(this->button35);
			this->panel43->Location = System::Drawing::Point(1, 159);
			this->panel43->Name = L"panel43";
			this->panel43->Size = System::Drawing::Size(205, 32);
			this->panel43->TabIndex = 60;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->ForeColor = System::Drawing::Color::LightCoral;
			this->label64->Location = System::Drawing::Point(71, 4);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(65, 18);
			this->label64->TabIndex = 33;
			this->label64->Text = L"PHP 50";
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button34->FlatAppearance->BorderSize = 4;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(27, 3);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(25, 25);
			this->button34->TabIndex = 30;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MainForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::White;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button35->FlatAppearance->BorderSize = 4;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(154, 3);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(25, 25);
			this->button35->TabIndex = 31;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MainForm::button35_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox19->Location = System::Drawing::Point(26, 9);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(157, 130);
			this->pictureBox19->TabIndex = 59;
			this->pictureBox19->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(81, 140);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 14);
			this->label25->TabIndex = 7;
			this->label25->Text = L"FRIES";
			this->label25->Click += gcnew System::EventHandler(this, &MainForm::label25_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Tan;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label3);
			this->panel4->Location = System::Drawing::Point(296, 38);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(663, 28);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel4_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(280, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"FOOD MENU";
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			// 
			// orderList
			// 
			this->orderList->BackColor = System::Drawing::Color::Tan;
			this->orderList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->orderList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderList->GridLines = true;
			this->orderList->HideSelection = false;
			this->orderList->Location = System::Drawing::Point(965, 73);
			this->orderList->Name = L"orderList";
			this->orderList->Size = System::Drawing::Size(392, 564);
			this->orderList->TabIndex = 4;
			this->orderList->UseCompatibleStateImageBehavior = false;
			this->orderList->View = System::Windows::Forms::View::Details;
			this->orderList->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::orderList_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ITEM #";
			this->columnHeader1->Width = 63;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"QTY";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 52;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"ORDER NAME";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 191;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"PRICE";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 80;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::Tan;
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Controls->Add(this->label56);
			this->panel29->Location = System::Drawing::Point(965, 38);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(392, 28);
			this->panel29->TabIndex = 4;
			this->panel29->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel29_Paint);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(135, 0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(145, 24);
			this->label56->TabIndex = 2;
			this->label56->Text = L"YOUR ORDER";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Tan;
			this->panel30->Controls->Add(this->button2);
			this->panel30->Controls->Add(this->totalPriceBox);
			this->panel30->Controls->Add(this->label59);
			this->panel30->Controls->Add(this->label57);
			this->panel30->Location = System::Drawing::Point(965, 643);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(392, 51);
			this->panel30->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PeachPuff;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Peru;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SandyBrown;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(248, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"PLACE ORDER";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click_1);
			// 
			// totalPriceBox
			// 
			this->totalPriceBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalPriceBox->Location = System::Drawing::Point(149, 16);
			this->totalPriceBox->Name = L"totalPriceBox";
			this->totalPriceBox->ReadOnly = true;
			this->totalPriceBox->Size = System::Drawing::Size(65, 20);
			this->totalPriceBox->TabIndex = 6;
			this->totalPriceBox->Text = L"0";
			this->totalPriceBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->totalPriceBox->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged_1);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(116, 18);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(32, 16);
			this->label59->TabIndex = 5;
			this->label59->Text = L"PHP";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(17, 18);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(97, 16);
			this->label57->TabIndex = 3;
			this->label57->Text = L"TOTAL PRICE: ";
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button23->FlatAppearance->BorderSize = 4;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(154, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(25, 25);
			this->button23->TabIndex = 31;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MainForm::button23_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(70, 140);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(63, 14);
			this->label19->TabIndex = 7;
			this->label19->Text = L"ICED TEA";
			this->label19->Click += gcnew System::EventHandler(this, &MainForm::label19_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderSize = 4;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(27, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(25, 25);
			this->button22->TabIndex = 30;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainForm::button22_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel16->Controls->Add(this->panel37);
			this->panel16->Controls->Add(this->pictureBox7);
			this->panel16->Controls->Add(this->label19);
			this->panel16->Location = System::Drawing::Point(15, 71);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(206, 206);
			this->panel16->TabIndex = 33;
			// 
			// panel37
			// 
			this->panel37->Controls->Add(this->label33);
			this->panel37->Controls->Add(this->button22);
			this->panel37->Controls->Add(this->button23);
			this->panel37->Location = System::Drawing::Point(1, 159);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(205, 32);
			this->panel37->TabIndex = 56;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::LightCoral;
			this->label33->Location = System::Drawing::Point(71, 4);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(65, 18);
			this->label33->TabIndex = 33;
			this->label33->Text = L"PHP 40";
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Location = System::Drawing::Point(26, 9);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(157, 130);
			this->pictureBox7->TabIndex = 55;
			this->pictureBox7->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(61, 140);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 14);
			this->label18->TabIndex = 8;
			this->label18->Text = L"ICED COFFEE";
			this->label18->Click += gcnew System::EventHandler(this, &MainForm::label18_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->BorderSize = 4;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(154, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(25, 25);
			this->button21->TabIndex = 28;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->BorderSize = 4;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(27, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(25, 25);
			this->button20->TabIndex = 27;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::button20_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel15->Controls->Add(this->panel38);
			this->panel15->Controls->Add(this->pictureBox8);
			this->panel15->Controls->Add(this->label18);
			this->panel15->Location = System::Drawing::Point(229, 71);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(206, 206);
			this->panel15->TabIndex = 36;
			// 
			// panel38
			// 
			this->panel38->Controls->Add(this->label34);
			this->panel38->Controls->Add(this->button20);
			this->panel38->Controls->Add(this->button21);
			this->panel38->Location = System::Drawing::Point(1, 159);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(205, 32);
			this->panel38->TabIndex = 57;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::LightCoral;
			this->label34->Location = System::Drawing::Point(71, 4);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(65, 18);
			this->label34->TabIndex = 33;
			this->label34->Text = L"PHP 60";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox8->Location = System::Drawing::Point(26, 9);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(157, 130);
			this->pictureBox8->TabIndex = 56;
			this->pictureBox8->TabStop = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button19->FlatAppearance->BorderSize = 4;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(154, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(25, 25);
			this->button19->TabIndex = 40;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(46, 140);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(116, 14);
			this->label17->TabIndex = 11;
			this->label17->Text = L"SPARKLING SODA";
			this->label17->Click += gcnew System::EventHandler(this, &MainForm::label17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderSize = 4;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(27, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(25, 25);
			this->button18->TabIndex = 39;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel14->Controls->Add(this->panel42);
			this->panel14->Controls->Add(this->pictureBox12);
			this->panel14->Controls->Add(this->label17);
			this->panel14->Location = System::Drawing::Point(15, 316);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(206, 206);
			this->panel14->TabIndex = 34;
			// 
			// panel42
			// 
			this->panel42->Controls->Add(this->label63);
			this->panel42->Controls->Add(this->button19);
			this->panel42->Controls->Add(this->button18);
			this->panel42->Location = System::Drawing::Point(1, 159);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(205, 32);
			this->panel42->TabIndex = 58;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::LightCoral;
			this->label63->Location = System::Drawing::Point(71, 4);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(65, 18);
			this->label63->TabIndex = 33;
			this->label63->Text = L"PHP 50";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox12->Location = System::Drawing::Point(26, 9);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(157, 130);
			this->pictureBox12->TabIndex = 57;
			this->pictureBox12->TabStop = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button17->FlatAppearance->BorderSize = 4;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(154, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(25, 25);
			this->button17->TabIndex = 31;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(81, 140);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 14);
			this->label14->TabIndex = 6;
			this->label14->Text = L"COKE";
			this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderSize = 4;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(27, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(25, 25);
			this->button16->TabIndex = 30;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel13->Controls->Add(this->panel41);
			this->panel13->Controls->Add(this->pictureBox9);
			this->panel13->Controls->Add(this->label14);
			this->panel13->Location = System::Drawing::Point(441, 71);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(206, 206);
			this->panel13->TabIndex = 35;
			// 
			// panel41
			// 
			this->panel41->Controls->Add(this->label37);
			this->panel41->Controls->Add(this->button16);
			this->panel41->Controls->Add(this->button17);
			this->panel41->Location = System::Drawing::Point(1, 159);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(205, 32);
			this->panel41->TabIndex = 57;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::LightCoral;
			this->label37->Location = System::Drawing::Point(71, 4);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(65, 18);
			this->label37->TabIndex = 33;
			this->label37->Text = L"PHP 30";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox9->Location = System::Drawing::Point(26, 9);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(157, 130);
			this->pictureBox9->TabIndex = 56;
			this->pictureBox9->TabStop = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->BorderSize = 4;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(154, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(25, 25);
			this->button15->TabIndex = 37;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(73, 140);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 14);
			this->label15->TabIndex = 9;
			this->label15->Text = L"MILKTEA";
			this->label15->Click += gcnew System::EventHandler(this, &MainForm::label15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderSize = 4;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(27, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(25, 25);
			this->button14->TabIndex = 36;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel12->Controls->Add(this->panel39);
			this->panel12->Controls->Add(this->pictureBox11);
			this->panel12->Controls->Add(this->label15);
			this->panel12->Location = System::Drawing::Point(229, 316);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(206, 206);
			this->panel12->TabIndex = 38;
			// 
			// panel39
			// 
			this->panel39->Controls->Add(this->label35);
			this->panel39->Controls->Add(this->button15);
			this->panel39->Controls->Add(this->button14);
			this->panel39->Location = System::Drawing::Point(1, 159);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(205, 32);
			this->panel39->TabIndex = 58;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::LightCoral;
			this->label35->Location = System::Drawing::Point(71, 4);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(65, 18);
			this->label35->TabIndex = 33;
			this->label35->Text = L"PHP 80";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox11->Location = System::Drawing::Point(26, 9);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(157, 130);
			this->pictureBox11->TabIndex = 57;
			this->pictureBox11->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(53, 140);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(112, 14);
			this->label16->TabIndex = 10;
			this->label16->Text = L"PINEAPPLE JUICE";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->BorderSize = 4;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(154, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(25, 25);
			this->button13->TabIndex = 34;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderSize = 4;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(27, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(25, 25);
			this->button12->TabIndex = 33;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->panel11->Controls->Add(this->panel40);
			this->panel11->Controls->Add(this->pictureBox10);
			this->panel11->Controls->Add(this->label16);
			this->panel11->Location = System::Drawing::Point(441, 316);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(206, 206);
			this->panel11->TabIndex = 37;
			// 
			// panel40
			// 
			this->panel40->Controls->Add(this->label36);
			this->panel40->Controls->Add(this->button12);
			this->panel40->Controls->Add(this->button13);
			this->panel40->Location = System::Drawing::Point(1, 159);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(205, 32);
			this->panel40->TabIndex = 58;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::LightCoral;
			this->label36->Location = System::Drawing::Point(71, 4);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(65, 18);
			this->label36->TabIndex = 33;
			this->label36->Text = L"PHP 40";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox10->Location = System::Drawing::Point(26, 9);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(157, 130);
			this->pictureBox10->TabIndex = 57;
			this->pictureBox10->TabStop = false;
			// 
			// DrinksPanel
			// 
			this->DrinksPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->DrinksPanel->Controls->Add(this->panel56);
			this->DrinksPanel->Controls->Add(this->panel11);
			this->DrinksPanel->Controls->Add(this->panel16);
			this->DrinksPanel->Controls->Add(this->panel15);
			this->DrinksPanel->Controls->Add(this->panel14);
			this->DrinksPanel->Controls->Add(this->panel13);
			this->DrinksPanel->Controls->Add(this->panel12);
			this->DrinksPanel->Location = System::Drawing::Point(294, 120);
			this->DrinksPanel->Name = L"DrinksPanel";
			this->DrinksPanel->Size = System::Drawing::Size(663, 574);
			this->DrinksPanel->TabIndex = 6;
			this->DrinksPanel->Visible = false;
			// 
			// panel56
			// 
			this->panel56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel56->Controls->Add(this->label5);
			this->panel56->Location = System::Drawing::Point(-2, 10);
			this->panel56->Name = L"panel56";
			this->panel56->Size = System::Drawing::Size(665, 50);
			this->panel56->TabIndex = 59;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(264, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 37);
			this->label5->TabIndex = 2;
			this->label5->Text = L"DRINKS";
			// 
			// SidesPanel
			// 
			this->SidesPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->SidesPanel->Controls->Add(this->panel57);
			this->SidesPanel->Controls->Add(this->panel21);
			this->SidesPanel->Controls->Add(this->panel17);
			this->SidesPanel->Controls->Add(this->panel22);
			this->SidesPanel->Controls->Add(this->panel20);
			this->SidesPanel->Controls->Add(this->panel19);
			this->SidesPanel->Controls->Add(this->panel18);
			this->SidesPanel->Location = System::Drawing::Point(294, 120);
			this->SidesPanel->Name = L"SidesPanel";
			this->SidesPanel->Size = System::Drawing::Size(663, 574);
			this->SidesPanel->TabIndex = 7;
			this->SidesPanel->Visible = false;
			// 
			// panel57
			// 
			this->panel57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel57->Controls->Add(this->label6);
			this->panel57->Location = System::Drawing::Point(-2, 10);
			this->panel57->Name = L"panel57";
			this->panel57->Size = System::Drawing::Size(665, 50);
			this->panel57->TabIndex = 45;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(272, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 37);
			this->label6->TabIndex = 2;
			this->label6->Text = L"SIDES";
			// 
			// DessertsPanel
			// 
			this->DessertsPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->DessertsPanel->Controls->Add(this->panel58);
			this->DessertsPanel->Controls->Add(this->panel23);
			this->DessertsPanel->Controls->Add(this->panel25);
			this->DessertsPanel->Controls->Add(this->panel24);
			this->DessertsPanel->Controls->Add(this->panel28);
			this->DessertsPanel->Controls->Add(this->panel26);
			this->DessertsPanel->Controls->Add(this->panel27);
			this->DessertsPanel->Location = System::Drawing::Point(294, 120);
			this->DessertsPanel->Name = L"DessertsPanel";
			this->DessertsPanel->Size = System::Drawing::Size(663, 574);
			this->DessertsPanel->TabIndex = 8;
			this->DessertsPanel->Visible = false;
			// 
			// panel58
			// 
			this->panel58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel58->Controls->Add(this->label7);
			this->panel58->Location = System::Drawing::Point(-2, 10);
			this->panel58->Name = L"panel58";
			this->panel58->Size = System::Drawing::Size(665, 50);
			this->panel58->TabIndex = 51;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(242, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(195, 37);
			this->label7->TabIndex = 2;
			this->label7->Text = L"DESSERTS";
			// 
			// MaindishBTN
			// 
			this->MaindishBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(10)));
			this->MaindishBTN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->MaindishBTN->FlatAppearance->BorderSize = 3;
			this->MaindishBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->MaindishBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->MaindishBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MaindishBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaindishBTN->Location = System::Drawing::Point(307, 73);
			this->MaindishBTN->Name = L"MaindishBTN";
			this->MaindishBTN->Size = System::Drawing::Size(156, 41);
			this->MaindishBTN->TabIndex = 9;
			this->MaindishBTN->Text = L"MAIN DISH";
			this->MaindishBTN->UseVisualStyleBackColor = false;
			this->MaindishBTN->Click += gcnew System::EventHandler(this, &MainForm::MaindishBTN_Click);
			// 
			// DrinksBTN
			// 
			this->DrinksBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DrinksBTN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->DrinksBTN->FlatAppearance->BorderSize = 3;
			this->DrinksBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DrinksBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DrinksBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DrinksBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DrinksBTN->Location = System::Drawing::Point(469, 73);
			this->DrinksBTN->Name = L"DrinksBTN";
			this->DrinksBTN->Size = System::Drawing::Size(156, 41);
			this->DrinksBTN->TabIndex = 10;
			this->DrinksBTN->Text = L"DRINKS";
			this->DrinksBTN->UseVisualStyleBackColor = false;
			this->DrinksBTN->Click += gcnew System::EventHandler(this, &MainForm::DrinksBTN_Click);
			// 
			// SidedishBTN
			// 
			this->SidedishBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->SidedishBTN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->SidedishBTN->FlatAppearance->BorderSize = 3;
			this->SidedishBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->SidedishBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->SidedishBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SidedishBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SidedishBTN->Location = System::Drawing::Point(631, 73);
			this->SidedishBTN->Name = L"SidedishBTN";
			this->SidedishBTN->Size = System::Drawing::Size(156, 41);
			this->SidedishBTN->TabIndex = 11;
			this->SidedishBTN->Text = L"SIDE DISH";
			this->SidedishBTN->UseVisualStyleBackColor = false;
			this->SidedishBTN->Click += gcnew System::EventHandler(this, &MainForm::SidedishBTN_Click);
			// 
			// DessertBTN
			// 
			this->DessertBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(207)),
				static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DessertBTN->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->DessertBTN->FlatAppearance->BorderSize = 3;
			this->DessertBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DessertBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)), static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(103)));
			this->DessertBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DessertBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DessertBTN->Location = System::Drawing::Point(793, 73);
			this->DessertBTN->Name = L"DessertBTN";
			this->DessertBTN->Size = System::Drawing::Size(156, 41);
			this->DessertBTN->TabIndex = 12;
			this->DessertBTN->Text = L"DESSERT";
			this->DessertBTN->UseVisualStyleBackColor = false;
			this->DessertBTN->Click += gcnew System::EventHandler(this, &MainForm::DessertBTN_Click);
			// 
			// panel59
			// 
			this->panel59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel59->Location = System::Drawing::Point(294, 652);
			this->panel59->Name = L"panel59";
			this->panel59->Size = System::Drawing::Size(665, 29);
			this->panel59->TabIndex = 46;
			// 
			// ty
			// 
			this->ty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->ty->Controls->Add(this->panel63);
			this->ty->Location = System::Drawing::Point(296, 120);
			this->ty->Name = L"ty";
			this->ty->Size = System::Drawing::Size(663, 574);
			this->ty->TabIndex = 47;
			this->ty->Visible = false;
			// 
			// panel63
			// 
			this->panel63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel63->Controls->Add(this->label41);
			this->panel63->Controls->Add(this->label40);
			this->panel63->Location = System::Drawing::Point(1, 215);
			this->panel63->Name = L"panel63";
			this->panel63->Size = System::Drawing::Size(665, 153);
			this->panel63->TabIndex = 5;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::Black;
			this->label41->Location = System::Drawing::Point(210, 71);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(275, 37);
			this->label41->TabIndex = 3;
			this->label41->Text = L"FOR ORDERING";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Black;
			this->label40->Location = System::Drawing::Point(238, 20);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(215, 37);
			this->label40->TabIndex = 2;
			this->label40->Text = L"THANK YOU";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1365, 699);
			this->Controls->Add(this->panel59);
			this->Controls->Add(this->DessertBTN);
			this->Controls->Add(this->SidedishBTN);
			this->Controls->Add(this->DrinksBTN);
			this->Controls->Add(this->MaindishBTN);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->orderList);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->DrinksPanel);
			this->Controls->Add(this->SidesPanel);
			this->Controls->Add(this->DessertsPanel);
			this->Controls->Add(this->ty);
			this->Controls->Add(this->MainDishPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"0";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel61->ResumeLayout(false);
			this->panel61->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->orderSummaryGridView))->EndInit();
			this->MainDishPanel->ResumeLayout(false);
			this->panel55->ResumeLayout(false);
			this->panel55->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel36->ResumeLayout(false);
			this->panel36->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel54->ResumeLayout(false);
			this->panel54->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel48->ResumeLayout(false);
			this->panel48->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel53->ResumeLayout(false);
			this->panel53->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel52->ResumeLayout(false);
			this->panel52->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel50->ResumeLayout(false);
			this->panel50->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel45->ResumeLayout(false);
			this->panel45->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel51->ResumeLayout(false);
			this->panel51->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel49->ResumeLayout(false);
			this->panel49->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel47->ResumeLayout(false);
			this->panel47->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel44->ResumeLayout(false);
			this->panel44->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel46->ResumeLayout(false);
			this->panel46->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel43->ResumeLayout(false);
			this->panel43->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel37->ResumeLayout(false);
			this->panel37->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel38->ResumeLayout(false);
			this->panel38->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel42->ResumeLayout(false);
			this->panel42->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel41->ResumeLayout(false);
			this->panel41->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel39->ResumeLayout(false);
			this->panel39->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel40->ResumeLayout(false);
			this->panel40->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->DrinksPanel->ResumeLayout(false);
			this->panel56->ResumeLayout(false);
			this->panel56->PerformLayout();
			this->SidesPanel->ResumeLayout(false);
			this->panel57->ResumeLayout(false);
			this->panel57->PerformLayout();
			this->DessertsPanel->ResumeLayout(false);
			this->panel58->ResumeLayout(false);
			this->panel58->PerformLayout();
			this->ty->ResumeLayout(false);
			this->panel63->ResumeLayout(false);
			this->panel63->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MD(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//dragging = true;
	//startPoint = System::Drawing::Point(e->X, e->Y);
}
private: System::Void MM(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//if (dragging) {
	//	System::Drawing::Point currentScreenPos = PointToScreen(e->Location);
	//	this->Location = System::Drawing::Point(currentScreenPos.X - startPoint.X, currentScreenPos.Y - startPoint.Y);
	//}
}
private: System::Void MU(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//dragging = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 100;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("BURGER", 1, 100.00);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 100;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("BURGER", 100.00);
}
private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void orderList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: void UpdateItemNumbers() {
	for (int i = 0; i < orderList->Items->Count; i++) {
		orderList->Items[i]->SubItems[0]->Text = (i + 1).ToString(); 
	}
}
private: void UpdateItemQuantity(String^ itemName, int qty, double pricePerUnit) {
	for (int i = 0; i < orderList->Items->Count; i++) {
		ListViewItem^ item = orderList->Items[i];
		if (item->SubItems[2]->Text == itemName) {
			
			int currentQty = Int32::Parse(item->SubItems[1]->Text);
			int newQty = currentQty + qty;
			item->SubItems[1]->Text = newQty.ToString();

			double newTotalPrice = newQty * pricePerUnit;
			item->SubItems[3]->Text = newTotalPrice.ToString("F2");
			return;
		}
	}
	ListViewItem^ newItem = gcnew ListViewItem((orderList->Items->Count + 1).ToString()); 
	newItem->SubItems->Add(qty.ToString());
	newItem->SubItems->Add(itemName);
	newItem->SubItems->Add((qty * pricePerUnit).ToString("F2")); 
	orderList->Items->Add(newItem);

	UpdateItemNumbers(); 
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 20;
	totalPriceBox->Text = currentTotal.ToString();

	UpdateItemQuantity("DUMPLING", 1, 20.00);
}
private: void DecreaseItemQuantity(String^ itemName, double pricePerUnit) {
	for (int i = 0; i < orderList->Items->Count; i++) {
		ListViewItem^ item = orderList->Items[i];
		if (item->SubItems[2]->Text == itemName) {
			int currentQty = Int32::Parse(item->SubItems[1]->Text);
			if (currentQty > 1) {
				int newQty = currentQty - 1;
				item->SubItems[1]->Text = newQty.ToString();

				double newTotalPrice = newQty * pricePerUnit;
				item->SubItems[3]->Text = newTotalPrice.ToString("F2");
			}
			else {
				orderList->Items->Remove(item);
				UpdateItemNumbers(); 
			}
			return;
		}
	}
}

private: System::Void minusDumpling_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 20;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();

	DecreaseItemQuantity("DUMPLING", 20.00);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 100;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("SHAWARMA RICE", 100.00);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 40;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("ICED TEA", 40.00);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("SPARKLING SODA", 50.00);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("FRIES", 50.00);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 20;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("EXTRA RICE", 20.00);
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 60;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("CHEESECAKE", 60.00);
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 60;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("MANGO FLOAT", 60.00);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 80;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("TIRAMISU", 1, 80.00);
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 80;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("TIRAMISU", 80.00);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("CAKE 1 slice", 1, 50.00);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("CAKE 1 slice", 50.00);
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 40;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("ICE CREAM", 40.00);
}
private: System::Void ramenAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 100;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("RAMEN", 1, 100.00);
}
private: System::Void ramenMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 100;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("RAMEN", 100.00);

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 100;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("SHAWARMA RICE", 1, 100.00);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 100;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("FRIED CHICKEN", 1, 100.00);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 100;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("FRIED CHICKEN", 100.00);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("CHAO FAN", 1, 50.00);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("CHAO FAN", 50.00);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 40;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("ICED TEA", 1, 40.00);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 60;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("ICED COFFEE", 1, 60.00);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 60;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("ICED COFFEE", 60.00);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 30;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("COKE", 1, 30.00);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 30;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("COKE", 30.00);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("SPARKLING SODA", 1, 50.00);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 80;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("MILKTEA", 1, 80.00);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 80;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("MILKTEA", 80.00);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 40;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("PINEAPPLE JUICE", 1, 40.00);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 40;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("PINEAPPLE JUICE", 40.00);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("FRIES", 1, 50.00);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("ONION RINGS", 1, 50.00);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("ONION RINGS", 50.00);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 20;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("SPRING ROLLS", 1, 20.00);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 20;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("SPRING ROLLS", 20.00);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 20;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("EXTRA RICE", 1, 20.00);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("MASHED POTATO", 1, 50.00);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("MASHED POTATO", 50.00);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("POTATO WEDGES", 1, 50.00);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 50;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("POTATO WEDGES", 50.00);
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 60;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("CHEESECAKE", 1, 60.00);
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 60;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("HALO-HALO", 1, 60.00);
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal -= 60;
	if (currentTotal < 0) {
		currentTotal = 0;
	}
	totalPriceBox->Text = currentTotal.ToString();
	DecreaseItemQuantity("HALO-HALO", 60.00);
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 40;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("ICE CREAM", 1, 40.00);
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentTotal = System::Convert::ToInt32(totalPriceBox->Text);
	currentTotal += 50;
	totalPriceBox->Text = currentTotal.ToString();
	UpdateItemQuantity("MANGO FLOAT", 1, 50.00);
}
private: System::Void totalPrice_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel29_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MaindishBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	MaindishBTN->BackColor = System::Drawing::Color::FromArgb(200, 51, 27, 10);
	DrinksBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	SidedishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DessertBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	MainDishPanel->Visible = true;
	DrinksPanel->Visible = false;
	SidesPanel->Visible = false;
	DessertsPanel->Visible = false;

}
private: System::Void DrinksBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	MaindishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DrinksBTN->BackColor = System::Drawing::Color::FromArgb(200, 51, 27, 10);
	SidedishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DessertBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	MainDishPanel->Visible = false;
	DrinksPanel->Visible = true;
	SidesPanel->Visible = false;
	DessertsPanel->Visible = false;
}
private: System::Void SidedishBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	MaindishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DrinksBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	SidedishBTN->BackColor = System::Drawing::Color::FromArgb(200, 51, 27, 10);
	DessertBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	MainDishPanel->Visible = false;
	DrinksPanel->Visible = false;
	SidesPanel->Visible = true;
	DessertsPanel->Visible = false;
}
private: System::Void DessertBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	MaindishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DrinksBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	SidedishBTN->BackColor = System::Drawing::Color::FromArgb(200, 207, 146, 103);
	DessertBTN->BackColor = System::Drawing::Color::FromArgb(200, 51, 27, 10);
	MainDishPanel->Visible = false;
	DrinksPanel->Visible = false;
	SidesPanel->Visible = false;
	DessertsPanel->Visible = true;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (orderList == nullptr || orderList->Items->Count == 0) {
			MessageBox::Show("You must order first", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		Random^ rand = gcnew Random();
		int min = 2000;
		int max = 5000;
		int randomNumber = rand->Next(min, max + 1);
		this->n->Text = randomNumber.ToString();

		for (int i = 0; i < orderList->Items->Count; i++) {
		ListViewItem^ item = orderList->Items[i];
		int itemNumber = Int32::Parse(item->SubItems[0]->Text); 
		String^ itemName = item->SubItems[2]->Text; 
		String^ qty = item->SubItems[1]->Text;       
		String^ totalPrice = item->SubItems[3]->Text; 

		this->orderSummaryGridView->Rows->Add(itemNumber.ToString(), itemName, qty, totalPrice);
		totalPriceBox1->Text = totalPriceBox->Text;
		
	}
	MainDishPanel->Visible = false;
	DrinksPanel->Visible = false;
	SidesPanel->Visible = false;
	DessertsPanel->Visible = false;
	ty->Visible = true;
	orderList->Items->Clear();
	button2->Enabled = false;
	button3->Enabled = true;
	totalPriceBox->Text = "0";
	MaindishBTN->Enabled = false;
	DrinksBTN->Enabled = false;
	SidedishBTN->Enabled = false;
	DessertBTN->Enabled = false;

}
private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel49_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel50_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (orderSummaryGridView->Rows->Count > 0) {
		orderSummaryGridView->Rows->Clear();

		button3->Enabled = false;
		button2->Enabled = true;
		this->n->Text = "n";
		totalPriceBox->Text = "0"; 
		MessageBox::Show("You can now proceed to the counter! Than you!","Order", MessageBoxButtons::OK, MessageBoxIcon::Information);
		MainDishPanel->Visible = true;
		ty->Visible = false;
		MaindishBTN->Enabled = true;
		DrinksBTN->Enabled = true;
		SidedishBTN->Enabled = true;
		DessertBTN->Enabled = true;








	}
	else {
		MessageBox::Show("The order summary is already empty", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void n_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void orderSummaryGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}






};
}
