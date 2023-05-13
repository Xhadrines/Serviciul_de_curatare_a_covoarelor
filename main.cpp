/*
 * Autor: Xhadrines
 *
 * Data: 23.11.2022
 * 
 * Descriere:
 * 	In aceast programel am vrut sa completez aceasta provocare:
 *
 * 	Frank's Carpet Cleaning Service
 *		Charges:
 *			$25 per small room
 *			$35 per large room
 *		Sales tax rate is 6%
 *		Estimates are valid for 30 days
 *
 *		Prompt the user for the number of small and large rooms they would like cleaned
 *		and provide an estimate such as:
 *			Estimate for carpet cleaning service
 *			Number of small rooms: 3
 *			Number of large rooms: 1
 *			Price per small room: $25
 *			Price per large room: $35
 *			Cost : $110
 *			Tax: $6.6
 *			Total estimate: $116.6
 *			This estimate is valid for 30 days
 *
 * P.S. Aceasta aplicatie a fost realizata in linux folosind terminalul
 */

#include <iostream>

using namespace std;

int main() 
{    
	int camereMici {0};
	int camereMari {0};
	const double  pretCamereMici{25.0};
    	const double  pretCamereMari {35.0};
	const double taxa {0.06};
    	const int estimare {30};
	
    	cout << "Bun venit la Serviciul de curatare a covoarelor Frank!" << endl;
	
	cout << endl;
    
	cout << "Cate camere mici vrei sa cureti: ";
    
	cin >> camereMici;
    
	cout << "Cate camere mari vrei sa cureti: ";
    
	cin >> camereMari;
	
	cout << endl;
    
   	cout << "Estimare pentru serviciul de curățare a covoarelor:" << endl;
    
	cout << "\tNumarul de camere mici: " << camereMici << endl;
    
	cout << "\tNumarul de camere mari: " << camereMari << endl;
    
    	cout << "\tPretul pe camere mici: $" << pretCamereMici << endl;
    
	cout << "\tPretul pe camere mari: $" << pretCamereMari << endl;
    
    	cout << "\tSuma fara taxa : $" << ( pretCamereMici * camereMici ) + ( pretCamereMari * camereMari ) << endl;
            
    	cout << "\tTaxa: $" << ( ( pretCamereMici * camereMici ) + ( pretCamereMari * camereMari ) ) * taxa << endl;
            
    	cout << endl;
    
	cout << "Suma cu taxa: $" << ( ( pretCamereMici * camereMici ) + ( pretCamereMari * camereMari ) ) + ( ( ( pretCamereMici * camereMici ) + ( pretCamereMari * camereMari ) ) * taxa ) << endl;
    
	cout << "Aceasta estimare este valabila pentru " << estimare << " zile" << endl;
	
    	return 0;
}

