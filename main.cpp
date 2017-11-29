/*Eoin Finlay
  Least Squares of Linear Regression
  04 Oct 2017*/

//Preprocessor Directives
#include <iostream>
#include <math.h>

using namespace std;
//Main Function
int main()
{   //Variable Declarations
    double setX[100]= {0}, setY[100]= {0};
    double sumX, sumY, sumXY,xSQ, avgX, avgY, m, c;
    int n, i;
    //do while with Logic OR to ensure correct amount of datapoints are entered
    do
    {
        cout << "Enter the amount of data points: ";//Prompting user to enter amount of datapoints
        cin >> n;//input number of datapoints
    }
    while ((n <= 0) || (n > 100));

    //initialising several variables to zero
    i = 0;
    sumX = 0;
    sumY = 0;
    sumXY = 0;

    for (i=0; i<n; i++)//for loop to enter values for x & y
    {
        cout << "Datapoint " << i << " x and y:";
        cin >> setX[i] >> setY[i];
    }

    cout << endl;
    cout << "Table of values entered" << endl;

    for (i=0; i<n; i++)// loop to display table of values entered
    {
        cout << setX[i] << " " << setY[i] << endl;
        sumX = sumX + setX[i];//assigning sumX to an equation (running total)
        sumY = sumY + setY[i];//assigning sumY to an equation (running total)
        sumXY = sumXY + (setX[i] * setY[i]);//assigning sumXY to an equation (running total)
        xSQ = xSQ + pow(setX[i], 2.0);//assigning xSQ to an equation (running total)
    }

    avgX = sumX / n;//calculating average of sumX
    avgY = sumY / n;//calculating average of sumY

    //displaying all calculated values
    cout << endl;
    cout << "Sum of X = " << sumX << endl;
    cout << "Sum of Y = " << sumY << endl;
    cout << "Product of XY = " << sumXY << endl;
    cout << "X^2 = " << xSQ << endl;
    cout << "Average value of X = " << avgX << endl;
    cout << "Average value of Y = " << avgY << endl;

    m = ((n*sumXY) - (sumX*sumY)) / ((n*xSQ) - pow(sumX, 2.0));//equation to get slope of line

    c = avgY - (m * avgX);//equation to get Y intercept

    //displaying slope and Y intercept
    cout << endl;
    cout << "Slope of line = " << m << endl;
    cout << "Y Intercept = " << c << endl;


    return 0;
}
