#include <iostream>
using namespace std;

void temperature();
void distance();
void electricCurrent();
void time();
void mass();
void group();

int main()
{
	int answer;
	char exit;
	bool exits = false;
	do
	{
		do
		{
			cout << "Choose from the following coverter:\n";
			cout << "[1] Temperature\n[2] Distance\n[3] Electric Current\n[4] Time\n[5] Mass\n";
			cout << "Answer: ";
			cin >> answer;
			cout << "______________________________________\n\n";
		} while (answer < 1 || answer > 6);
	
		switch (answer)
		{
			case (1):
				temperature();
				break;
			case (2):
				distance();
				break;
			case (3):
				electricCurrent();
				break;
			case (4):
				time();
				break;
			case (5):
				mass();
				break;
			case (6):
				group();
				break;
		}
		
		do
		{
			cout << "______________________________________\n\n";
			cout << "Type \"y\" for yes || Type \"n\" for no \n";
			cout << "Would you like to select another SI Unit?: ";
			cin >> exit;
			
			switch (exit)
			{
				case 'y':
				case 'Y':
				case 'n':
				case 'N':
					exits = false;
					break;
				default:
					exits = true;
					break;
			} 
			
		} while (exits == true);
		
		
	} while (exit == 'y' || exit == 'Y');
	return 0;
}

void temperature()
{
	float fahr, cel, kel;
   int option, option2;
   
   do
   {
   		cout<<"Choose from the following conversions:"<<endl; //Options to choose, whether which conversion is needed to be used/
  		cout<<"[1] Celsius \n[2] Fahrenheit \n[3] Kelvin"<<endl;
   		cout << "Answer: ";
   		cin>>option;
  		cout << "__________________________________________________\n\n";
   } while (option < 1 || option > 3);
   

   switch (option)
   {
   		//Option to convert Celsius to any of the following options/
   		case (1):
   			do
   			{
   				cout<<"Choose in which unit will Celsius be converted to:"<<endl;
   				cout<<"[1] Fahrenheit \n[2] Kelvin"<<endl;
   				cout << "Answer: ";
   				cin>>option2;
   				cout << "______________________________________\n\n";
			   } while (option2 < 1 || option2 > 2);
   		
		
		switch (option2)
		{
			case (1):
			cout<<"Enter the temperature in Celsius: ";
			cin>>cel;
			
    		fahr = (1.8 * cel) + 32.0; //Celsius to Fahrenheit conversion formula/
    		cout<< "Temperature in degree Fahrenheit: "<<fahr<<" F"<<endl;
    		break;
    		
    		case(2):
    		cout<<"Enter the temperature in Celsius: ";
			cin>>cel;
	
    		kel = (cel + 273.15); //Celsius to Kelvin conversion formula/
    		cout<<"Temperature in Kelvin: "<<kel<<" K"<<endl;
    		break;
    		
    		default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
    	
    	//Option to convert Fahrenheit to any of the following options/
		case (2):
			do
			{
				cout<<"Choose in which unit will Fahrenheit be converted to:"<<endl;
   				cout<<"[1] Celsius \n[2] Kelvin"<<endl;
   				cout << "Answer: ";
   				cin>>option2;
   				cout << "______________________________________\n\n";
			} while (option2 < 1 || option2 > 2);
   		
    	
    	switch (option2)
		{
			case (1):
			cout<<"Enter the temperature in Fahrenheit: ";
    		cin>>fahr;

    		cel = (fahr - 32) / 1.8; //Fahrenheit to Celsius conversion formula/
    		cout<<"Temperature in degree Celsius: "<<cel<<" C"<<endl;
    		break;
    		
    		case(2):
    		cout<<"Enter the temperature in Fahrenheit: ";
    		cin>>fahr;
	
    		kel = (fahr - 32) * 5/9 + 273.15; //Fahrenheit to Kelvin conversion formula/
    		cout<<"Temperature in Kelvin: "<<kel<<" K"<<endl;
    		break;
    		
    		default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
    	
    	//Option to convert Kelvin to any of the following options/
   		case (3):
   			do
   			{
   				cout<<"Choose in which unit will Kelvin be converted to:"<<endl;
   				cout<<"[1] Celsius \n[2] Fahrenheit"<<endl;
   				cout << "Answer: ";
   				cin>>option2;
   				cout << "______________________________________\n\n";
			   } while (option2 < 1 || option2 > 2);
    	
		
		switch (option2)
		{
			case (1):
			cout<<"Enter the temperature in Kelvin: ";
    		cin>>kel;

    		cel = (kel - 273.15); //Kelvin to Celsius conversion formula/
    		cout<<"Temperature in degree Celsius: "<<cel<<" C"<<endl;
    		
    		case(2):
    		cout<<"Enter the temperature in Kelvin: ";
    		cin>>kel;
	
    		fahr = (kel - 273.15) * 9/5 + 32; //Kelvin to Fahrenheit conversion formula/
    		cout<<"Temperature in degree Fahrenheit: "<<fahr<<" F"<<endl;
    		break;
    		
    		default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
		break;
		
		default:
    	cout<<"Error detected, Wrong Input."<<endl;
	
	}
	
}

void distance()
{
	float mm, cm, m, km;
	int option, option2;
	
	do 
	{
		cout<<"Select the length unit to be converted: \n";
		cout<<"[1] Millimeter/s \n[2] Centimeter/s \n[3] Meter/s \n[4] Kilometer/s \n";
		cout << "Answer: ";
		cin>>option;
		cout << "_______________________________________________________\n\n";	
	} while (option < 1 || option > 4);
	
	
	switch (option)
	{
		case 1:
			do
			{
				cout<<"\n";
				cout<<"Select the unit to which Millimeter/s will be converted: \n";
				cout<<"[1] Centimeter/s \n[2] Meter/s \n[3] Kilometer/s \n";
				cout << "Answer: ";
				cin>>option2;
				cout << "_______________________________________________________\n\n";
			} while (option2 < 1 || option2 > 3);
		
		
		switch (option2)
		{
			case 1:
			cout<<"\nTo convert, type in Millimeter/s.";
			cout<<"\nMillimeter/s: ";
			cin>>mm;
			cm = mm / 10;
			cout<< mm << " Millimeter/s = " << cm << " Centimeter/s \n";
			break;
			
			case 2:
			cout<<"\nTo convert, type in Millimeter/s.";
			cout<<"\nMillimeter/s: ";
			cin>>mm;
			m = mm / 1000;
			cout<< mm << " Millimeter/s = " << m << " Meter/s \n";
			break;
			
			case 3:
			cout<<"\nTo convert, type in Millimeter/s.";
			cout<<"\nMillimeter/s: ";
			cin>>mm;
			km = mm / 1000000;
			cout<< mm << " Millimeter/s = " << km << " Kilometer/s \n";
			break;
			
			default:
			cout<<"Wrong Input has been recognized as an error. \n";
		
		}
		break;
		
		case 2:
			do 
			{
				cout<<"\n";
				cout<<"Select the unit to which Centimeter/s will be converted: \n";
				cout<<"[1] Millimeter/s \n[2] Meter/s \n[3] Kilometer/s \n";
				cout << "Answer: ";
				cin>>option2;
				cout << "_______________________________________________________\n\n";
			} while (option2 < 1 || option2 > 3);
		
		switch (option2)
		{
			case 1:
			cout<<"\nTo convert, type in Centimeter/s.";
			cout<<"\nCentimeter/s: ";
			cin>>cm;
			mm = cm * 10;
			cout<< cm << " Centimeter/s = " << mm << " Millimeter/s \n";
			break;
			
			case 2:
			cout<<"\nTo convert, type in Centimeter/s.";
			cout<<"\nCentimeter/s: ";
			cin>>cm;
			m = cm / 100;
			cout<< cm << " Centimeter/s = " << m << " Meter/s \n";
			break;
			
			case 3:
			cout<<"\nTo convert, type in Centimeter/s.";
			cout<<"\nCentimeter/s: ";
			cin>>cm;
			km = cm / 100000;
			cout<< cm << " Centimeter/s = " << km << " Kilometer/s \n";
			break;
			
			default:
			cout<<"Wrong Input has been recognized as an error. \n";
		}
		break;
		
		case 3:
			do
			{
				cout<<"\n";
				cout<<"Select the unit to which Meter/s will be converted: \n";
				cout<<"[1] Millimeter/s \n[2] Centimeter/s \n[3] Kilometer/s \n";
				cout << "Answer: ";
				cin>>option2;
				cout << "_______________________________________________________\n\n";
			} while (option2 < 1 || option2 > 3);
		
		
		switch (option2)
		{
			case 1:
			cout<<"\nTo convert, type in Meter/s.";
			cout<<"\nMeter/s: ";
			cin>>m;                              
			mm = m * 1000;
			cout<< m << " Meter/s = " << mm << " Millimeter/s \n";
			break;
			
			case 2:
			cout<<"\nTo convert, type in Meter/s. \n";
			cout<<"\nMeter/s: ";
			cin>>m;
			cm = m * 100;
			cout<< m << " Meter/s = " << cm << " Centimeter/s";
			break;
			                                                 
			case 3:
			cout<<"\nTo convert, type in Meter/s.";
			cout<<"\nMeter/s: ";
			cin>>m;                              
			km = m / 1000;
			cout<< m << " Meter/s = " << km << " Kilometer/s \n";
			break;
			
			default:
			cout<<"Wrong Input has been recognized as an error. \n";
		}
		
		break;
		
		case 4:
			do
			{
				cout<<"\n";
				cout<<"Select the unit to which Kilometer/s will be converted: \n";
				cout<<"[1] Millimeter/s \n[2] Centimeter/s \n[3] Meter/s \n";
				cout << "Answer: ";
				cin>>option2;
				cout << "_______________________________________________________\n\n";
			} while (option2 < 1 || option2 > 3);
		
		
		switch (option2)
		{
			case 1:
			cout<<"\nTo convert, type in Kilometer/s.";
			cout<<"\nKiloeter/s: ";
			cin>>km;
			mm = km * 1000000;                       
			cout<< km << " Kilometer/s = " << mm << " Millimeter/s \n";
			break;
			
			case 2:
			cout<<"\nTo convert, type in Kilometer/s.";
			cout<<"\nKiloeter/s: ";
			cin>>km;
			cm = km * 100000;                        
			cout<< km << " Kilometer/s = " << cm << " Centimeter/s \n";
			break;
			
			case 3:
			cout<<"\nTo convert, type in Kilometer/s.";
			cout<<"\nKiloeter/s: ";
			cin>>km;
			m = km * 1000;                           
			cout<< km << " Kilometer/s = " << m << " Meter/s \n";
			break;
			
			default:
			cout<<"Wrong Input has been recognized as an error. \n";
		}
		break; 
		
		default:
		cout<<"Wrong Input has been recognized as an error. \n";
		break;
		
	}
}

void electricCurrent()
{
		int choice, inChoice ;
	float ampere, milliampere, kiloAmpere, megaAmpere;
	
	cout << "Electric Current Converter\n" << "______________________________\n\n";
	do
	{
		cout << "What is your current unit?\n";
		cout << "[1] milliampere\n[2] Ampere\n[3] KiloAmpere\n[4] MegaAmpere\n";
		cout << "Answer: ";
		cin >> choice;
		cout << "______________________________\n\n";
		
	} while (choice < 1 || choice > 4);
	
	switch (choice)
	{
		case (1):
			do
			{
				cout << "What unit to convert to?\n";
				cout << "[1] Ampere\n[2] KiloAmpere\n[3] MegaAmpere\n";
				cout << "Answer: ";
				cin >> inChoice;
				cout << "______________________________\n\n";	
			} while (inChoice < 1 || inChoice > 3);
			
			switch (inChoice)
			{
				case (1):
					cout << "Enter electric current in milliampere: ";
					cin >> milliampere;
					ampere = (milliampere / 1000);
					cout << "Electric current in Ampere: " << ampere << " A\n";
					break;
				case (2):
					cout << "Enter electric current in milliampere: " ;
					cin >> milliampere;
					kiloAmpere = (milliampere / 1000000);
					cout << "Electric current in KiloAmpere: " << kiloAmpere << " kA\n";
					break;
				case (3):
					cout << "Enter electric current in milliampere: ";
					cin >> milliampere;
					megaAmpere = (milliampere / 1000000000);
					cout << "Electric current in MegaAmpere: " << megaAmpere << " MA\n";
					break;
			}
			break;
			
		case (2):
			do
			{
				cout << "What unit to convert to?\n";
				cout << "[1] milliampere\n[2] KiloAmpere\n[3] MegaAmpere\n";
				cout << "Answer: ";
				cin >> inChoice;
				cout << "______________________________\n\n";	
			} while (inChoice < 1 || inChoice > 3);
			
			switch (inChoice)
			{
				case (1):
					cout << "Enter electric current in Ampere: ";
					cin >> ampere;
					milliampere = (ampere * 1000);
					cout << "Electric current in milliampere: " << milliampere << " mA\n";
					break;
					
				case (2):
					cout << "Enter electric current in Ampere: ";
					cin >> ampere;
					kiloAmpere = (ampere / 1000);
					cout << "Electric current in KiloAmpere: " << kiloAmpere << " kA\n";
					break;
				case (3):
					cout << "Enter electric current in Ampere: ";
					cin >> ampere;
					megaAmpere = (ampere / 1000000);
					cout << "Electric current in MegaAmpere: " << megaAmpere << " MA\n" ;
					break;
			}
			break;
			
		case (3):
			do
			{
				cout << "What unit to convert to?\n";
				cout << "[1] milliampere\n[2] Ampere\n[3] MegaAmpere\n";
				cout << "Answer: ";
				cin >> inChoice;
				cout << "______________________________\n\n";	
			} while (inChoice < 1 || inChoice > 3);
			
			switch (inChoice)
			{
				case (1):
					cout << "Enter electric current in KiloAmpere: ";
					cin >> kiloAmpere;
					milliampere = (kiloAmpere * 1000000);
					cout << "Electric current in milliampere: " << milliampere << " mA\n";
					break;
				case (2):
					cout << "Enter electric current in KiloAmpere: ";
					cin >> kiloAmpere;
					ampere = (kiloAmpere * 1000);
					cout << "Electric current in Ampere: " << ampere << " A\n";
					break;
				case (3):
					cout << "Enter electric current in KiloAmpere: ";
					cin >> kiloAmpere;
					megaAmpere = (kiloAmpere / 1000);
					cout << "Electric current in MegaAmpere: " << megaAmpere << " MA\n";
					break;
			}
			break;
		case (4):
			do
			{
				cout << "What unit to convert to?\n";
				cout << "[1] milliampere\n[2] Ampere\n[3] KiloAmpere\n";
				cout << "Answer: ";
				cin >> inChoice;
				cout << "______________________________\n\n";	
			} while (inChoice < 1 || inChoice > 3);
			
			switch (inChoice)
			{
				case (1):
					cout << "Enter electric current in MegaAmpere: ";
					cin >> megaAmpere;
					milliampere = (megaAmpere * 1000000000);
					cout << "Electric current in milliampere: " << milliampere << " mA\n";
					break;
				case (2):
					cout << "Enter electric current in MegaAmpere: ";
					cin >> megaAmpere;
					ampere = (megaAmpere * 1000000);
					cout << "Electric current in Ampere: " << ampere << " A\n";
					break;
				case (3):
					cout << "Enter electric current in MegaAmpere: ";
					cin >> megaAmpere;
					kiloAmpere = (megaAmpere * 1000);
					cout << "Electric current in kiloAmphere: " << kiloAmpere << " kA\n";
					break;
			}
	}
}

void time()
{
			//Program that converts time
 	int time, time2;
    float  s, min, hr, d, wk, mon, yr;
    
    do
    {
    	cout<<"Choose what time unit you want to convert."<<endl;
 		cout<<"[1] Year/s \n[2] Month/s \n[3] Week/s \n[4] Day/s \n[5] Hour/s \n[6] Minute/s \n[7] Second/s"<<endl;
 		cout<<"What time unit you want to be converted: ";
 		cin>>time;
 		cout << "___________________________________________________\n\n";
	} while (time < 1 || time > 7);
 	
 
 	switch(time)
 	{
 		//To convert Year/s to any of the following time
 		case (1):
 		do 
 		{
 			cout<<"Choose which time unit will Year/s be converted to:"<<endl;
 			cout<<"[1] Month/s \n[2] Week/s \n[3] Day/s \n[4] Hour/s \n[5] Minute/s \n[6] Second/s"<<endl;
 			cout<<"Year/s to:";
			cin>>time2;
			cout << "___________________________________________________\n\n";
		} while (time2 < 1 || time2 > 6);
 		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			mon = (yr * 12); //Year/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<yr<<" year/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			wk = (yr * 52.143); //Year/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<yr<<" year/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			d = (yr * 365); //Year/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<yr<<" year/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			hr = (yr * 8760); //Year/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<yr<<" year/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			min = (yr * 525600); //Year/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<yr<<" year/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Year/s: ";
			cin>>yr;
			
			s = (yr * 3.154e+7); //Year/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<yr<<" year/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
		}
		break;
		
		//To convert Month/s to any of the following time
		case (2):
		do
		{
 			cout<<"Choose which time unit will Month/s be converted to:"<<endl;
 			cout<<"[1] Year/s \n[2] Week/s \n[3] Day/s \n[4] Hour/s \n[5] Minute/s \n[6] Second/s"<<endl;
 			cout<<"Month/s to:";
			cin>>time2;
			cout << "___________________________________________________\n\n";
		} while (time2 < 1 || time2 > 6);
 		
		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			yr = (mon / 12); //Month/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<mon<<" month/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			wk = (mon * 4.345); //Month/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<mon<<" month/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			d = (mon * 30.417); //Month/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<mon<<" month/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			hr = (mon * 730); //Month/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<mon<<" month/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			min = (mon * 43800); //Month/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<mon<<" month/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Month/s: ";
			cin>>mon;
			
			s = (mon * 2.628e+6); //Month/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<yr<<" year/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
		
		//To convert Week/s to any of the following time
		case (3):
		do
		{
			cout<<"Choose which time unit will Week/s be converted to:"<<endl;
 			cout<<"[1] Year/s \n[2] Month/s \n[3] Day/s \n[4] Hour/s \n[5] Minute/s \n[6] Second/s"<<endl;
 			cout<<"Week/s to:";
			cin>>time2;	
			cout << "___________________________________________________\n\n";
		} while (time2 < 1 || time > 6);
		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			yr = (wk / 52.143); //Week/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<wk<<" week/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			mon = (wk / 4.345); //Week/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<wk<<" week/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			d = (wk * 7); //Week/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<wk<<" week/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			hr = (wk * 168); //Week/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<wk<<" week/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			min = (wk * 10080); //Week/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<wk<<" week/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Week/s: ";
			cin>>wk;
			
			s = (wk * 604800); //Week/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<wk<<" week/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
		
		//To convert Day/s to any of the following time
 		case (4):
 			do
 			{
 				cout<<"Choose which time unit will Day/s be converted to:"<<endl;
 				cout<<"[1] Year/s \n[2] Month/s \n[3] Week/s \n[4] Hour/s \n[5] Minute/s \n[6] Second/s"<<endl;
 				cout<<"Day/s to:";
				cin>>time2;
				cout << "___________________________________________________\n\n";
			} while (time2 < 1 || time2 > 6);
 		
		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			yr = (d / 365); //Day/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<d<<" day/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			mon = (d / 30.417); //Day/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<d<<" day/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			wk = (d / 7); //Day/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<d<<" day/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			hr = (d * 24); //Day/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<d<<" day/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			min = (d * 1440); //Day/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<d<<" Day/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Day/s: ";
			cin>>d;
			
			s = (d * 86400); //Day/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<d<<" day/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;	
    	
    	//To convert Hour/s to any of the following time
 		case (5):
 			do
 			{
 				cout<<"Choose which time unit will Hour/s be converted to:"<<endl;
 				cout<<"[1] Year/s \n[2] Month/s \n[3] Week/s \n[4] Day/s \n[5] Minute/s \n[6] Second/s"<<endl;
 				cout<<"Hour/s to:";
				cin>>time2;
				cout << "___________________________________________________\n\n";
			} while (time2 < 1 || time2 > 6);
		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Hour/s: ";
			cin>>hr;
			
			yr = (hr / 8760); //Hour/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Hour/s: ";
			cin>>hr;
			
			mon = (hr / 730); //Hour/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Hour/s: ";
			cin>>hr;
			
			wk = (hr / 168); //Hour/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Hour/s: ";
			cin>>hr;
			
			d = (hr / 24); //Hour/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in hour/s: ";
			cin>>hr;
			
			min = (hr * 60); //Hour/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Hour/s: ";
			cin>>hr;
			
			s = (hr * 3600); //Hour/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<hr<<" hour/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
    	
    	//To convert Minute/s to any of the following time
 		case (6):
 			do
 			{
 				cout<<"Choose which time unit will Minute/s be converted to:"<<endl;
 				cout<<"[1] Year/s \n[2] Month/s \n[3] Week/s \n[4] Day/s \n[5] Hour/s \n[6] Second/s"<<endl;
 				cout<<"Minute/s to:";
				cin>>time2;
				cout << "___________________________________________________\n\n";
			} while (time2 < 1 || time2 > 6);
 		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Minute/s: ";
			cin>>min;
			
			yr = (min / 525600); //Minute/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<min<<" minute/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Minute/s: ";
			cin>>min;
			
			mon = (min / 43800); //Minute/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<min<<" minute/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Minute/s: ";
			cin>>min;
			
			wk = (min / 10080); //Minute/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<min<<" minute/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Minute/s: ";
			cin>>min;
			
			d = (min / 1440); //Minute/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<min<<" minute/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in minute/s: ";
			cin>>min;
			
			hr = (min / 60); //Minute/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<min<<" minute/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Minute/s: ";
			cin>>min;
			
			s = (min * 60); //Minute/s to Second/s conversion formula
			cout<<"There are "<<s<<" second/s in a "<<min<<" minute/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
    	
    	//To convert Second/s to any of the following time
 		case (7):
 			do
			 {
 				cout<<"Choose which time unit will Second/s be converted to:"<<endl;
 				cout<<"[1] Year/s \n[2] Month/s \n[3] Week/s \n[4] Day/s \n[5] Hour/s \n[6] Minute/s"<<endl;
 				cout<<"Second/s to:";
				cin>>time2;
				cout << "___________________________________________________\n\n";
			 } while (time2 < 1 || time2 > 6);
 		
		
		switch (time2)
		{
			case (1):
			cout<<"Enter the time in Second/s: ";
			cin>>s;
			
			yr = (s / 3.154e+7); //Second/s to Year/s conversion formula
			cout<<"There are "<<yr<<" year/s in a "<<s<<" second/s"<<endl;
			break;
			
			case (2):
			cout<<"Enter the time in Seconds/s: ";
			cin>>s;
			
			mon = (s / 2.628e+6); //Second/s to Month/s conversion formula
			cout<<"There are "<<mon<<" month/s in a "<<s<<" second/s"<<endl;
			break;
			
			case (3):
			cout<<"Enter the time in Second/s: ";
			cin>>s;
			
			wk = (s / 604800); //Second/s to Week/s conversion formula
			cout<<"There are "<<wk<<" week/s in a "<<s<<" second/s"<<endl;
			break;
			
			case (4):
			cout<<"Enter the time in Second/s: ";
			cin>>s;
			
			d = (s / 86400); //Second/s to Day/s conversion formula
			cout<<"There are "<<d<<" day/s in a "<<s<<" second/s"<<endl;
			break;
			
			case (5):
			cout<<"Enter the time in second/s: ";
			cin>>s;
			
			hr = (s / 3600); //Second/s to Hour/s conversion formula
			cout<<"There are "<<hr<<" hour/s in a "<<s<<" second/s"<<endl;
			break;
			
			case (6):
			cout<<"Enter the time in Second/s: ";
			cin>>s;
			
			min = (s / 60); //Second/s to Minute/s conversion formula
			cout<<"There are "<<min<<" minute/s in a "<<s<<" second/s"<<endl;
			break;
			
			default:
    		cout<<"Error detected, Wrong Input."<<endl;
    	}
    	break;
    	
    	default:
    	cout<<"Error detected, Wrong Input."<<endl;
	}
}

void mass()
{
	float mg,g,kg;//unit variables
	int choice,choice2;
	
	do
	{
		cout<<"Mass Unit Converter\n"<<endl;
		cout<<"Mass Units:\n[1] Milligram\n[2] Gram\n[3} Kilogram\n"<<endl;
		cout<<"\nSelect a unit for mass conversion (choose only what are indicated): "<<endl;
		cout<<"Answer: ";
		cin>>choice;
		cout << "______________________________________\n\n";
	} while (choice < 1 || choice > 3);
	
	
	switch (choice)//switch case statement
	{
		case (1):
			do
			{
				cout<<"\nSelect unit conversion for Milligram: "<<endl;
				cout<<"[1] Gram\n[2] Kilogram\n"<<endl;
				cout<<"Answer: ";
				cin>>choice2;
				cout << "______________________________________\n\n";
			} while (choice2 < 1 || choice2 > 2);
			
			
		switch (choice2)
		{
			case (1):
				cout<<"\nInput the numerical value for Milligram: ";
				cin>>mg;
			
				g = mg*0.001;//milligrams to grams formula
				cout<<"The value for Gram is: "<<g<<" g"<<endl;
				break;
			
			case (2):
				cout<<"\nInput the numerical value for Milligram: ";
				cin>>mg;
			
				kg= mg*1/1000000;//milligrams to kilograms formula
				cout<<"The value for Kilogram is: "<<kg<<" kg"<<endl;
				break;
				
				default:
				cout<<"\nInput error, please only follow what are indicated."<<endl;
		}
		break;
		
		case (2):
			do
			{
				cout<<"\nSelect unit conversion for Gram: "<<endl;
				cout<<"[1] Milligram\n[2] Kilogram\n"<<endl;
				cout<<"Answer: ";
				cin>>choice2;
				cout << "______________________________________\n\n";
			} while (choice2 < 1 || choice2 > 2);
			
			
			switch (choice2)
		{
			case (1):
				cout<<"\nInput the numerical value for Gram: ";
				cin>>g;
			
				mg = g*1000;//grams to milligrams formula
				cout<<"The value for Milligram is: "<<mg<<" mg"<<endl;
				break;
				
			case (2):
				cout<<"\nInput the numerical value for Gram: ";
				cin>>g;
			
				kg = g*0.001;//grams to kilograms formula
				cout<<"The value for Kilogram is: "<<kg<<" kg"<<endl;
				break;
				
				default:
				cout<<"\nInput error, please only follow what are indicated."<<endl;
		}
		break;
		
		case (3):
			do
			{
				cout<<"\nSelect unit conversion for Kilogram: "<<endl;
				cout<<"[1] Milligram\n[2] Gram\n"<<endl;
				cout<<"Answer: ";
				cin>>choice2;
				cout << "______________________________________\n\n";
			} while (choice2 < 1 || choice2 > 2);
			
			
			switch (choice2)
		{
			case (1):
				cout<<"\nInput the numerical value for Kilogram: ";
				cin>>kg;
			
				mg = kg*1000000;//kilograms to milligrams formula
				cout<<"The value for Milligram is: "<<mg<<" mg"<<endl;
				break;
			
			case (2):
				cout<<"\nInput the numerical value for Kilogram: ";
				cin>>kg;
			
				g= kg*1000;//kil0grams to grams formula
				cout<<"The value for Gram is: "<<g<<" g"<<endl;
				break;
				
				default:
				cout<<"\nInput error, please only follow what are indicated."<<endl;
		}
		break;
	} 
}

void group()
{
	cout << "Made by Group PLDEMIC :DDDDDDDDD\n";
	cout << "Leader: Rafael Espina\nVice Leader: Tiffany Kate Evangelista\n";
	cout << "Members: \nRaymond Arsolon\nRalph Mikhail Barbado\nDenzel Rafael Donato\n";
	cout << "Christian Dale Guiterrez\nJoanna Micka Medina\nMichael Paul Adornado Meneses\n";
}