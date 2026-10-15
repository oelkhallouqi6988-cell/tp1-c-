#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main() {
    BankAccount compte1("12345", 1000.0);

    compte1.afficher();

    cout << "\n--- Depot ---" << endl;
    compte1.deposer(500.0);
    compte1.afficher();

    cout << "\n--- Retrait ---" << endl;
    compte1.retirer(200.0);
    compte1.afficher();

    cout << "\n--- Test solde insuffisant ---" << endl;
    compte1.retirer(2000.0);
    compte1.afficher();

    return 0;
}