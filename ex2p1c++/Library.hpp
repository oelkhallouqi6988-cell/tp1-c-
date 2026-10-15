#include "Library.hpp"

using namespace std;

// Ajouter un livre
void Library::ajouterLivre(const Book& livre) {
    m_livres.push_back(livre);
    cout << "Livre ajoute avec succes !" << endl;
}

// Rechercher un livre par ISBN
const Book* Library::trouverParISBN(const string& isbn) const {
    for (const Book& livre : m_livres) {
        if (livre.getISBN() == isbn) {
            return &livre;
        }
    }

    return nullptr;
}

// Afficher tous les livres
void Library::listerLivres() const {
    if (m_livres.empty()) {
        cout << "La bibliotheque est vide." << endl;
        return;
    }

    for (const Book& livre : m_livres) {
        livre.afficher();
        cout << "-------------------" << endl;
    }
}