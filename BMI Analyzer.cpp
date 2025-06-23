#include <iostream>

int main()
{
    std::cout << "This is a BMI Analyzer! \n";
    std::cout << "A BMI is your Body Mass Index. It is a measure of body fat based on your height and weight. We are going to find out yours.\n";
    std::cout << "What is your name?\n";
    std::string name;
    std::cin >> name;

    std::cout << "Are you entering your height as feet/inches or centimeters, " << name << "? \n";
    std::string FeetCenti;
    std::cin >> FeetCenti;

    double h1; //height feet inputted
    double h2; //height inches inputted
    double h3; //height in cm
    double weight1;
    int w1; // 
    double h3Meters;
    double height1;
    double height2;


    if (FeetCenti == "feet" || FeetCenti == "inches" || FeetCenti == "ft") {
        
        std::cout << "\nEnter your height, what are the feet?: ";
        std::cin >> h1;
        std::cout << "\nEnter the inches: ";
        std::cin >> h2;
        height1 = h1 * 30.48;
        height2 = h2 * 2.54 ;
        h3 = height1 + height2;
        //Will convert this to cm

        h3Meters = h3 / 100.0;

    } else if (FeetCenti == "centimeters" || FeetCenti == "cm") {

        std::cout << "\nEnter your height in centimeters: ";
        std::cin >> h3;

        h3Meters = h3 / 100.0;
       

    } else {

        std::cout << "\nThat won't work. ";

        return 0;

    }

    std::cout << "Are you entering your weight as Kilograms or pounds? ";
    std::string kilolb;
    std::cin >> kilolb;

    if (kilolb == "Kilograms" || kilolb == "kg" || kilolb == "kgs") {

        std::cout << "\nEnter your weight in kilograms: ";
        std::cin >> w1;
        

    } else if (kilolb == "lb" || kilolb == "pounds" || kilolb == "lbs") {

        //Will convert this into kg
        std::cout << "\nEnter your weight in pounds: ";
        std::cin >> weight1;
        w1 = weight1 * 0.4536;

    } else {

        std::cout << "\nThat won't work. ";

        return 0;

    }

    double bodyMassIndex;
    bodyMassIndex = w1 / (h3Meters * h3Meters);

    std::cout << name << ", your BMI (Body Mass Index) is " << bodyMassIndex << "\n";


    if (bodyMassIndex < 18.5 ) {

        std::cout << name << ", you are underweight! \n";


    } else if (bodyMassIndex >= 18.5 && bodyMassIndex < 25) {

        std::cout << name << ", you are normal weight :D ! \n";

    } else if (bodyMassIndex >= 25 && bodyMassIndex < 30) {

        std::cout << name << ", you are getting obese! \n";

    } else if (bodyMassIndex >= 30 && bodyMassIndex < 35) {

        std::cout << name << ", you are obese! \n";

    } else {

        std::cout << name << ", you are REALLY obese! \n";

    }




   



}

