//PassingUnderTankCPP
//Author: Austin Smith
//Email: ThatSmittyDude@outlook.com
//github.com/ThatSmittyDude
//Unix Timestamp: 1706046298

#include <iostream>
#include <cmath>

//Terms
//fullLaps = Amount of laps on a full tank of fuel
//adjLaps = Desired laps per tank of fuel
//adj = The recommended fuel tank percentage to acheive desired laps per tank

int main(){
while (true){
    float fullLaps, adjLaps, adj;                                   //Variables

    std::cout << "Amount of laps on full tank: ";                   //iostream | display output "Full laps: "
    std::cin >> fullLaps;                                           //iostream | accept input for fullLaps variable

    std::cout << "Desired fuel run in laps: ";                      //iostream | display output "Desired fuel run in laps: "
    std::cin >> adjLaps;                                            //iostream | accept input for adjLaps variable

    adj = std::round(float(adjLaps / fullLaps) * 100) , 1;          //Mathematical function to find recomended fuel tank percentage, rounds using iostream

    std::cout << "Recommended fuel percentage: " << adj;            //iostream | display "Recomended fuel percentage" and the percentage calculated

    std::cout << "\nContinue? y/n: ";                               //iostream | dispaly on new line "Continue? y/n"
    char user_input;                                                //C++ | expect user to input charactor
    std::cin >> user_input;                                         //iostream | accept user input for above prompt

    if (user_input != 'y' && user_input != 'Y'){                    //C++ | if user input is anything other than Y or y, break the loop
        std::cout << "Exiting..." << std::endl;                     //iostream | dispaly exit message and end loop
        break; // exit the loop                                     //C++ | closes program
    }
}
    return 0;                                                       //Succesfull command returns 0, errors return any other value
}