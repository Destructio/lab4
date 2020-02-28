#include "Header.h"

double getD(TextBox^ TB)
{

	if (TB->Text->Length == 0)
	{
		MessageBox::Show("Введите не пустоту", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		TB->Focus();
		return 0;
	}
	else {
		return Convert::ToDouble(TB->Text);
	}


}

void putD(double x, double y, TextBox^ TB, TextBox^ TB2)
{
	TB->Text = x.ToString();
	TB2->Text = y.ToString();
}