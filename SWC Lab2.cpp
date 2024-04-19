#include <iostream>
using namespace std;

// Function Prototypes
double celciusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

int main() 
{
    double temperature;
    char scale;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter scale (C for Celsius, F for Fahrenheit): ";
    cin >> scale;

    // Check if the scale is Celsius or Fahrenheit
    if (scale == 'C' || scale == 'c') 
	{
        // Convert temperature from Celsius to Fahrenheit
        double convertedTemp = celciusToFahrenheit(temperature);
        // Output the converted temperature
        cout << "Converted temperature: " << convertedTemp << " F" << endl;
    }
    else if (scale == 'F' || scale == 'f') 
	{
        // Convert temperature from Fahrenheit to Celsius
        double convertedTemp = fahrenheitToCelcius(temperature);
        // Output the converted temperature
        cout << "Converted temperature: " << convertedTemp << " C" << endl;
    }
    else 
	{
        // Output error message for invalid scale
        cout << "Invalid scale entered." << endl;
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
double celciusToFahrenheit(double celcius) 
{
    return (celcius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelcius(double fahrenheit) 
{
    return (fahrenheit - 32) * 5 / 9;
}
