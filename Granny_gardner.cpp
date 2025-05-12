#include <iostream>
using namespace std;

struct FlowerCounts {
    int sunbuds = 0;
    int moonblossoms = 0;
    int starroots = 0;
    int crystal = 0;
    int wildleaf = 0;
    int resting = 0;
};

void processDay(int day, FlowerCounts &f) {
    cout << "Today is Day " << day << " : ";

    if (day % 12 == 0) {
        f.resting++;
        cout << "The Soil is resting." << endl;
        return;
    }

    if (day % 6 == 0) {
        f.crystal++;
        cout << "I planted 1 Crystal Flower" << endl;
        return;
    }

    if (day % 2 == 0) {
        f.sunbuds += 2;
        cout << "I planted 2 Sunbuds";
    }

    if (day % 3 == 0) {
        if (day % 2 == 0) cout << " | ";
        f.moonblossoms += 3;
        cout << "I planted 3 Moonblossoms";
    }

    if (day % 4 == 0) {
        if (day % 2 == 0 || day % 3 == 0) cout << " | ";
        f.starroots += 4;
        cout << "I planted 4 Starroots";
    }

    if (day % 2 != 0 && day % 3 != 0 && day % 4 != 0) {
        f.wildleaf++;
        cout << "I planted 1 Wildleaf";
    }

    cout << endl;
}

void printSummary(const FlowerCounts &f) {
    int total = f.sunbuds + f.moonblossoms + f.starroots + f.crystal + f.wildleaf;
    cout << "\nFinal Summary:\n";
    cout << "--------------------\n";
    cout << "Sunbuds        : " << f.sunbuds << endl;
    cout << "Moonblossoms   : " << f.moonblossoms << endl;
    cout << "Starroots      : " << f.starroots << endl;
    cout << "Crystal Flowers: " << f.crystal << endl;
    cout << "Wildleafs      : " << f.wildleaf << endl;
    cout << "Resting Days   : " << f.resting << endl;
    cout << "--------------------\n";
    cout << "Total Flowers Planted: " << total << endl;
}

int main() {
    int N;
    cout << "===============================================\n";
    cout << "I will be planting Flowers :) \n";
    cout << "===============================================\n";
    cout << "Kitne Dino tak Phool lagau : ";
    cin >> N;

    FlowerCounts f; 

    cout<<"\nDear Diary \nThese is what i did in the following days ";
    cout << "\nDaily Log:\n";
    for (int day = 1; day <= N; ++day) {
        processDay(day, f);
    }
    printSummary(f);
    
    cout<<"\nYour's - \nGranny's Granddaughter ";
    return 0;
}
