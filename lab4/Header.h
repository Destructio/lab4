#pragma once
using namespace System;
using namespace System::Windows::Forms;
#include <cmath>

double getD(TextBox^);
void putD(double, double, TextBox^,TextBox^);

double z(double, double, double, double, double, double, ListBox^, double&);
double f(double, double);