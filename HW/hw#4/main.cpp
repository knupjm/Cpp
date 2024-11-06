#include "InkJetPrinter.h"
#include "LaserPrinter.h"

using namespace std;

int main() {
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    InkJetPrinter inkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter laserPrinter("SCX-6x45", "삼성전자", 3, 20);

    while (true) {
        int choice, amount;
        cout << endl << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> choice >> amount;

        if (choice == 1) {
            inkJetPrinter.printInkJet(amount);
        }
        else if (choice == 2) {
            laserPrinter.printLaser(amount);
        }

        inkJetPrinter.show();
        laserPrinter.show();

        char keepPrinting;
        cout << "계속 프린트하시겠습니까(y/n)>>";
        cin >> keepPrinting;
        if (keepPrinting == 'y') {
            continue;
        }
        break;
    }

    return 0;
}
