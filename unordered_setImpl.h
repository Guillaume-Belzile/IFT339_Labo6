//
//  unordered_setImpl.h
//  unordered_multiset
//
//  Auteur : Jean Goulet
//  Copyleft 2017
//
//  Modifie par : Vincent Ducharme, Hiver 2018
//
//  Devoir fait par
//     Coéquipier 1 : Guillaume Belzile
//     Coéquipier 2 : Olivier Mailhot

#ifndef unordered_multisetImpl_h
#define unordered_multisetImpl_h


///////////////////////////////////////////
// avancer et reculer un iterateur

template <typename TYPE,typename classe_de_dispersion>
void unordered_multiset<TYPE, classe_de_dispersion>::iterator::avancer()
{
    if(POS == (*ALV)->end()){
        while (*ALV == nullptr) {
            ALV++;
        }
        POS = (*ALV)->begin();
    }
    else {
        POS++;
    }
}

template <typename TYPE,typename classe_de_dispersion>
void unordered_multiset<TYPE, classe_de_dispersion>::iterator::reculer()
{
    if(POS == (*ALV)->begin()){
        while (*ALV == nullptr) {
            ALV--;
        }
        POS = --(*ALV).end();
    }
    else {
        POS--;
    }
}

/////////////////////////////////////////////////////////////////////
// fonctions generatrices

template <typename TYPE,typename classe_de_dispersion>
typename unordered_multiset<TYPE,classe_de_dispersion>::iterator
unordered_multiset<TYPE, classe_de_dispersion>::insert(const TYPE& VAL)
{
    if (facteur_max < SIZE / REP.size())
        rehash(REP.size() + REP.size() + 1);


}

template <typename TYPE,typename classe_de_dispersion>
size_t unordered_multiset<TYPE, classe_de_dispersion>::erase(const TYPE& VAL)
{
    if (SIZE / REP.size() < facteur_min)
        rehash( (REP.size() - 1) / 2);


}

template <typename TYPE,typename classe_de_dispersion>
typename unordered_multiset<TYPE,classe_de_dispersion>::iterator
unordered_multiset<TYPE, classe_de_dispersion>::erase(typename unordered_multiset<TYPE, classe_de_dispersion>::iterator i)
{

    return i;
}

#endif // unordered_multisetImpl_h
