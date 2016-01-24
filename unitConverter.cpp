#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <iomanip>

using namespace std;

double liquid(double choiceL1, double amountL, double choiceL2)
{
	double tsp;
	double tbsp;
	double c;
	double o;
	double p;
	double q;
	double g;
	double m;
	double l;
	double answer = 0;
	
	if(choiceL1 == 1) //teaspoon
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL / 3.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL / 48.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL / 6.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL / 96.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 192.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 768.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 5.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 203.0;
			answer = l;
		}
	}
	
	if(choiceL1 == 2) //tablespoon
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 3.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL / 16.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL / 2.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL / 32.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 64.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 256.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 15.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 67.0;
			answer = l;
		}
	}
	
	if(choiceL1 == 3) //cup
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 48.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 16.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL * 8.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL / 2.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 4.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallons
		{
			g = amountL / 16.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 237.0;
			answer = m;
		}
		if(choiceL2 == 9) //gallon
		{
			l = amountL / (4.2);
			answer = l;
		}
	}
	
	if(choiceL1 == 4) //ounce
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 6.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 2.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL / 8.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL / 16.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 32.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 128.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 30.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 34.0;
			answer = l;
		}
	}
	
	if(choiceL1 == 5) //pint
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 96.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 32.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL * 2.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL * 16.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 2.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 8.0;
			answer = q;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 473.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 2.0;
			answer = l;
		}
	}
	
	if(choiceL1 == 6) //quart
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 192.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 64.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL * 4.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL * 32.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL * 2.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL;
			answer = amountL;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 4.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 946.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL * 0.9;
			answer = l;
		}
	}
	
	if(choiceL1 == 7) //gallon
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 768.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 256.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL * 16.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL * 128.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL * 8.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL * 4.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 3785.0;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 0.3;
			answer = l;
		}
	}
	
	if(choiceL1 == 8) //milliliter
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 0.2;
			amountL = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 0.7;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL / 237.0;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL / 30.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL / 437.0;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 946.0;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL / 3785.0;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL;
			answer = m;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL / 1000.0;
			answer = l;
		}
	}
	
	if(choiceL1 == 9) //liter
	{
		if(choiceL2 == 1) //teaspoon
		{
			tsp = amountL * 203.0;
			answer = tsp;
		}
		if(choiceL2 == 2) //tablespoon
		{
			tbsp = amountL * 67.0;
			answer = tbsp;
		}
		if(choiceL2 == 3) //cup
		{
			c = amountL * 4.2;
			answer = c;
		}
		if(choiceL2 == 4) //ounce
		{
			o = amountL * 34.0;
			answer = o;
		}
		if(choiceL2 == 5) //pint
		{
			p = amountL * 2.1;
			answer = p;
		}
		if(choiceL2 == 6) //quart
		{
			q = amountL / 0.9;
			answer = q;
		}
		if(choiceL2 == 7) //gallon
		{
			g = amountL * 0.3;
			answer = g;
		}
		if(choiceL2 == 8) //milliliter
		{
			m = amountL * 1000.0;
			answer = amountL;
		}
		if(choiceL2 == 9) //liter
		{
			l = amountL;
			answer = l;
		}
	}
	
	return answer;
}

double weight(double choiceW1, double amountW, double choiceW2)
{
	double lb;
	double oz;
	double g; 
	double kg;
	double answer = 0;

	if (choiceW1 == 1) //ounce
	{
		if (choiceW2 == 1)//ounce
		{
			oz = amountW;
			answer = oz;
		}
		if (choiceW2 == 2)//pound
		{
			lb = amountW / 16.0;
			answer = lb;
		}
		if (choiceW2 == 3)//gram
		{
			g = amountW * 28.0;
			answer = g;
		}
		if (choiceW2 == 4)//kilogram
		{
			kg = amountW / 35.0;
			answer = kg;
		}
	}
	if (choiceW1 == 2)//pound
	{
		if (choiceW2 == 1)//ounce
		{
			oz = amountW * 16.0;
			answer = oz;
		}
		if (choiceW2 == 2)//pound
		{
			lb = amountW;
			answer = lb;
		}
		if (choiceW2 == 3)//gram
		{
			g = amountW * 454.0;
			answer = g;
		}
		if (choiceW2 == 4)//kilogram
		{
			kg = amountW / 2.2;
			answer = kg;
		}
	}
	if (choiceW1 == 3)//gram
	{
		if (choiceW2 == 1)//ounce
		{
			oz = amountW / 28.0;
			answer = oz;
		}
		if (choiceW2 == 2)//pound
		{
			lb = amountW / 454.0;
			answer = lb;
		}
		if (choiceW2 == 3)//gram
		{
			g = amountW;
			answer = g;
		}
		if (choiceW2 == 4)//kilogram
		{
			kg = amountW / 1000.0;
			answer = kg;
		}
	}
	if (choiceW1 == 4)//kilogram
	{
		if (choiceW2 == 1)//ounce
		{
			oz = amountW * 35.0;
			answer = oz;
		}
		if (choiceW2 == 2)//pound
		{
			lb = amountW * 2.2;
			answer = lb;
		}
		if (choiceW2 == 3)//gram
		{
			g = amountW * 1000.0;
			answer = g;
		}
		if (choiceW2 == 4)//kilogram
		{
			kg = amountW;
			answer = kg;
		}
	}
	return answer;

}

double temperature(double choiceT1, double amountT, double choiceT2)
{
	double F;
	double C;
	double answer = 0;
	
	if(choiceT1 == 1) //Fahrenheit
	{
		if(choiceT2 == 1) //Fahrenheit
		{
			F = amountT;
			answer = F;
		}
		else if(choiceT2 == 2) //Celsius
		{
			C = (amountT - 32) / 1.8;
			answer = C;
		}
	}
	
	else if(choiceT1 == 2) //Celsius
	{
		if(choiceT2 == 1) //Fahrenheit
		{
			F = (amountT * 1.8) + 32;
			answer = F;
		}
		else if(choiceT2 == 2) //Celsius
		{
			C = amountT;
			answer = C;
		}
	}
	
	return answer;
}


double Menu()
{
	cout << "\nBaking and Cooking Unit Conversion Calculator\n";
	cout << "Are you converting liquid, weight, or temperature? \n";
	
	double option; //main option
	double option1;
	double option2;
	double option3;
	
	double choiceL1 = 0;
	double choiceL2 = 0;
	double amountL = 0;
	
	double choiceW1;
	double choiceW2;
	double amountW;
	
	double choiceT1 = 0;
	double choiceT2 = 0;
	double amountT = 0;
	
	cout << "1. Liquid" << endl;
	cout << "2. Weight" << endl;
	cout << "3. Temperature" << endl;
	cout << "Choice - ";
	cin >> option;
	
	if(cin.good())
	{
		if(option == 1)
		{
			cout << "\nPlease pick the unit for which you wish to convert from: " << endl;
			cout << "1. teaspoon" << endl;
			cout << "2. tablespoon" << endl;
			cout << "3. cup" << endl;
			cout << "4. ounce" << endl;
			cout << "5. pint" << endl;
			cout << "6. quart" << endl;
			cout << "7. gallon" << endl;
			cout << "8. milliliter" << endl;
			cout << "9. liter" << endl;
			cout << "Choice - ";
			cin >> choiceL1;
			
			cout << "Please enter the amount for which you wish to convert: " << endl;
			cout << "Amount - ";
			cin >> amountL;
			
			cout << "Please pick the unit, from the menu above, from which you wish to convert to: " << endl;
			cout << "Choice - ";
			cin >> choiceL2;
			
			option1 = liquid(choiceL1, amountL, choiceL2);
			if (choiceL1 == 1 && choiceL2 == 1)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 2)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 3)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 4)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 5)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 6)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 7)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 8)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 1 && choiceL2 == 9)
			{
				cout << amountL << " teaspoon(s) is " << option1 << " liter(s)" << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 1)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 2)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 3)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 4)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 5)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 6)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 7)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 8)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 2 && choiceL2 == 9)
			{
				cout << amountL << " tablespoon(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 1)
			{
				cout << amountL << " cup(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 2)
			{
				cout << amountL << " cup(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 3)
			{
				cout << amountL << " cup(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 4)
			{
				cout << amountL << " cup(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 5)
			{
				cout << amountL << " cup(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 6)
			{
				cout << amountL << " cup(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 7)
			{
				cout << amountL << " cup(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 8)
			{
				cout << amountL << " cup(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 3 && choiceL2 == 9)
			{
				cout << amountL << " cup(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 1)
			{
				cout << amountL << " ounce(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 2)
			{
				cout << amountL << " ounce(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 3)
			{
				cout << amountL << " ounce(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 4)
			{
				cout << amountL << " ounce(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 5)
			{
				cout << amountL << " ounce(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 6)
			{
				cout << amountL << " ounce(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 7)
			{
				cout << amountL << " ounce(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 8)
			{
				cout << amountL << " ounce(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 4 && choiceL2 == 9)
			{
				cout << amountL << " ounce(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 1)
			{
				cout << amountL << " pint(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 2)
			{
				cout << amountL << " pint(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 3)
			{
				cout << amountL << " pint(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 4)
			{
				cout << amountL << " pint(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 5)
			{
				cout << amountL << " pint(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 6)
			{
				cout << amountL << " pint(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 7)
			{
				cout << amountL << " pint(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 8)
			{
				cout << amountL << " pint(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 5 && choiceL2 == 9)
			{
				cout << amountL << " pint(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 1)
			{
				cout << amountL << " quarts) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 2)
			{
				cout << amountL << " quart(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 3)
			{
				cout << amountL << " quart(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 4)
			{
				cout << amountL << " quartquart(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 5)
			{
				cout << amountL << " quart(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 6)
			{
				cout << amountL << " quart(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 7)
			{
				cout << amountL << " quart(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 8)
			{
				cout << amountL << " quart(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 6 && choiceL2 == 9)
			{
				cout << amountL << " quart(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 1)
			{
				cout << amountL << " gallon(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 2)
			{
				cout << amountL << " gallon(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 3)
			{
				cout << amountL << " gallon(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 4)
			{
				cout << amountL << " gallon(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 5)
			{
				cout << amountL << " gallon(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 6)
			{
				cout << amountL << " gallon(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 7)
			{
				cout << amountL << " gallon(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 8)
			{
				cout << amountL << " gallon(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 7 && choiceL2 == 9)
			{
				cout << amountL << " gallon(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 1)
			{
				cout << amountL << " milliliter(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 2)
			{
				cout << amountL << " milliliter(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 3)
			{
				cout << amountL << " milliliter(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 4)
			{
				cout << amountL << " milliliter(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 5)
			{
				cout << amountL << " milliliter(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 6)
			{
				cout << amountL << " milliliter(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 7)
			{
				cout << amountL << " milliliter(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 8)
			{
				cout << amountL << " milliliter(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 8 && choiceL2 == 9)
			{
				cout << amountL << " milliliter(s) is " << option1 << " liter(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 1)
			{
				cout << amountL << " liter(s) is " << option1 << " teaspoon(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 2)
			{
				cout << amountL << " liter(s) is " << option1 << " tablespoon(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 3)
			{
				cout << amountL << " liter(s) is " << option1 << " cup(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 4)
			{
				cout << amountL << " liter(s) is " << option1 << " ounce(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 5)
			{
				cout << amountL << " liter(s) is " << option1 << " pint(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 6)
			{
				cout << amountL << " liter(s) is " << option1 << " quart(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 7)
			{
				cout << amountL << " liter(s) is " << option1 << " gallon(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 8)
			{
				cout << amountL << " liter(s) is " << option1 << " milliliter(s)." << endl;
			}
			
			else if (choiceL1 == 9 && choiceL2 == 9)
			{
				cout << amountL << " liter(s) is " << option1 << " liter(s)." << endl;

			}
		}
	
		if (option == 2)
		{
			cout << "\nPlease pick the unit for which you wish to convert from: " << endl;
			cout << "1. ounce" << endl;
			cout << "2. pound" << endl;
			cout << "3. gram" << endl;
			cout << "4. kilogram" << endl;
			cout << "Choice - ";
			cin >> choiceW1;

			cout << "Please enter the amount for which you wish to convert: " << endl;
			cout << "Amount - ";
			cin >> amountW;

			cout << "Please pick the unit, from the menu above, from which you wish to convert to: " << endl;
			cout << "Choice - ";
			cin >> choiceW2;

			option2 = weight(choiceW1, amountW, choiceW2);

			if (choiceW1 == 1 && choiceW2 == 2)
			{
				cout << amountW << " ounce(s) is " << option2 << " pound(s)" << endl;
			}
			
			else if (choiceW1 == 1 && choiceW2 == 1)
			{
				cout << amountW << " ounce(s) is " << option2 << " ounce(s)" << endl;
			}
			
			else if (choiceW1 == 1 && choiceW2 == 3)
			{
				cout << amountW << " ounce(s) is " << option2 << " gram(s)" << endl;
			}
			
			else if (choiceW1 == 1 && choiceW2 == 4)
			{
				cout << amountW << " ounce(s) is " << option2 << " kilogram(s)" << endl;
			}
			
			else if (choiceW1 == 2 && choiceW2 == 2)
			{
				cout << amountW << " pound(s) is " << option2 << " pound(s)" << endl;
			}
			
			else if (choiceW1 == 2 && choiceW2 == 1)
			{
				cout << amountW << " pound(s) is " << option2 << " ounce(s)" << endl;
			}
			
			else if (choiceW1 == 2 && choiceW2 == 3)
			{
				cout << amountW << " pound(s) is " << option2 << " gram(s)" << endl;
			}
			
			else if (choiceW1 == 2 && choiceW2 == 4)
			{
				cout << amountW << " pound(s) is " << option2 << " kilogram(s)" << endl;
			}
			
			else if (choiceW1 == 3 && choiceW2 == 2)
			{
				cout << amountW << " gram(s) is " << option2 << " pound(s)" << endl;
			}
			
			else if (choiceW1 == 3 && choiceW2 == 1)
			{
				cout << amountW << " gram(s) is " << option2 << " ounce(s)" << endl;
			}
			
			else if (choiceW1 == 3 && choiceW2 == 3)
			{
				cout << amountW << " gram(s) is " << option2 << " gram(s)" << endl;
			}
			
			else if (choiceW1 == 3 && choiceW2 == 4)
			{
				cout << amountW << " gram(s) is " << option2 << " kilogram(s)" << endl;
			}
			
			else if (choiceW1 == 4 && choiceW2 == 2)
			{
				cout << amountW << " kilogram(s) is " << option2 << " pound(s)" << endl;
			}
			
			else if (choiceW1 == 4 && choiceW2 == 1){
				cout << amountW << " kilogram(s) is " << option2 << " ounce(s)" << endl;
			}

			else if (choiceW1 == 4 && choiceW2 == 3){
				cout << amountW << " kilogram(s) is " << option2 << " gram(s)" << endl;
			}

			else if (choiceW1 == 4 && choiceW2 == 4)
			{
				cout << amountW << " kilogram(s) is " << option2 << " kilogram(s)" << endl;
			}
		}
	
		if(option == 3)
		{
			cout << "\nPlease pick the unit for which you wish to convert from: " << endl;
			cout << "1. Fahrenheit" << endl;
			cout << "2. Celsius" << endl;
			cout << "Choice - ";
			cin >> choiceT1;
			
			cout << "Please enter the amount for which you wish to convert: " << endl;
			cout << "Amount - ";
			cin >> amountT;
			
			cout << "Please pick the unit, from the menu above, for which you wish to convert to: " << endl;
			cout << "Choice - ";
			cin >> choiceT2;
			
			//will print out temperature conversion 
			option3 = temperature(choiceT1, amountT, choiceT2);

			if (choiceT1 == 1 && choiceT2 == 2)
			{
				cout << amountT << " degrees Fahrenheit is " << option3 << " degrees Celsius." << endl;
			}

			else if (choiceT1 == 2 && choiceT2 == 1)
			{
				cout << amountT << " degrees Celsius is " << option3 << " degrees Fahrenheit." << endl;
			}

			else if (choiceT1 == 1 && choiceT2 == 1)
			{
				cout << amountT << " degrees Fahrenheit is " << option3 << " degrees Fahrenheit" << endl;
			}

			else if (choiceT1 == 2 && choiceT2 == 2)
			{
				cout << amountT << " degrees Celsius is " << option3 << " degrees Celsius" << endl;
			}
		}
	}
	
	if(cin.fail() || option < 1 || option > 3) 
	//input validation for menu choices as well as program size
	{
		cin.clear();
		cin.ignore(200, '\n');
		cout << "ERROR!" << endl;
	}
	
	return 0;
}


