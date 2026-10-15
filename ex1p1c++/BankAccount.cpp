#include "BankAccount.hpp"

using namespace std;

// Constructeur par defaut
BankAccount::BankAccount() {
    m_numero = "";
    m_solde = 0.0;
}

// Constructeur parametre
BankAccount::BankAccount(const string& numero, double soldeInitial) {
    m_numero = numero;

    if (soldeInitial >= 0) {
        m_solde = soldeInitial;
    } else {
        m_solde = 0.0;
    }
}

// Deposer de l'argent
void BankAccount::deposer(double montant) {
    if (montant > 0) {
        m_solde += montant;
        cout << "Depot effectue avec succes." << endl;
    } else {
        cout << "Montant invalide !" << endl;
    }
}

// Retirer de l'argent
bool BankAccount::retirer(double montant) {
    if (montant <= 0) {
        cout << "Montant invalide !" << endl;
        return false;
    }

    if (montant > m_solde) {
        cout << "Solde insuffisant !" << endl;
        return false;
    }

    m_solde -= montant;
    cout << "Retrait effectue avec succes." << endl;
    return true;
}

// Afficher les informations du compte
void BankAccount::afficher() const {
    cout << "Numero du compte : " << m_numero << endl;
    cout << "Solde : " << m_solde << " DH" << endl;
}

// Retourner le numero du compte
string BankAccount::getNumero() const {
    return m_numero;
}

// Retourner le solde
double BankAccount::getSolde() const {
    return m_solde;
}