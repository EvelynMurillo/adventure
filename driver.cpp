//Evelyn Murillo , Mario Martinez, Zamba Diallo, Angel Gonzalez
#include<iostream>


using namespace std;


int main()
{












}
double barronCliffSpelunk( int numOfPeople)
{

    double baseCharge = 700.00;//per person
    double equipmentRental = 40.00;//day per person
    int numOfDays;
    double total;
    double discount;
    
    
    if(numOfPeople < 5 )
    {
        total =(numOfPeople * baseCharge ) + (numOfDays *equipmentRental);
     
     return total;
     }
     else if ( numOfpeople => 5)
     {
        total= (numOfPeople * baseCharge) +(numOfdays * equipemtRental);
         discount = (total * .9);
         return discount;
    }
 }   
