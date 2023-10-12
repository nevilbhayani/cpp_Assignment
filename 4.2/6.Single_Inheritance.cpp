#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
protected:
    string name;
    int age;

public:
    void inputData()
    {
        cout << "Enter the player's Name: ";
        cin >> name;
        cout << "Enter the player's Age: ";
        cin >> age;
    }

    void displayData()
    {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Cricketer's Age: " << age << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns,averageRuns,bestPerformance;

public:
    void inputBatsmanData()
    {
        inputData();
        cout << "Enter Total Runs: ";
        cin >> totalRuns;
        cout << "Enter Best Performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns()
    {
        averageRuns = static_cast<double>(totalRuns) / 10;
    }

    void displayBatsmanData()
    {
        displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main()
{
    Batsman batsman;

    cout << "Enter Batsman's Information:" << endl;
    batsman.inputBatsmanData();

    batsman.calculateAverageRuns();

    cout << "\nBatsman's Details:" << endl;
    batsman.displayBatsmanData();

    return 0;
}
