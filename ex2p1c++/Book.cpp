#include "Book.hpp"

using namespace std;

// Constructeur par defaut
Book::Book() {
    m_titre = "";
    m_auteur = "";
    m_isbn = "";
    m_annee = 0;
}

// Constructeur parametre
Book::Book(const string& titre,
           const string& auteur,
           const string& isbn,
           int annee) {
    m_titre = titre;
    m_auteur = auteur;
    m_isbn = isbn;
    m_annee = annee;
}

// Getters
string Book::getTitre() const {
    return m_titre;
}

string Book::getAuteur() const {
    return m_auteur;
}

string Book::getISBN() const {
    return m_isbn;
}

int Book::getAnnee() const {
    return m_annee;
}

// Afficher les informations du livre
void Book::afficher() const {
    cout << "Titre : " << m_titre << endl;
    cout << "Auteur : " << m_auteur << endl;
    cout << "ISBN : " << m_isbn << endl;
    cout << "Annee : " << m_annee << endl;
}