#include <iostream>
using namespace std;
int main()
{ 
    double A, B, C;
    cout << "Dany tri tochki A, B, C na chislovoj osi. Najti dliny otrezkov AC i BC i ih summu" << endl;
    cout << "Vvedite 3 koordinaty tochek na chislovoj osi cherez zapyatuyu v vide: A, B, C "<< endl;
    cin >> A >> B >> C;
    double AC = abs(A - C);
    double BC = abs(B - C);
    double ACBC = AC + BC;

    cout <<"dlina otrezka AC = " << AC << " dlina otrezka BC = " << BC << " summa AC i BC = " << ACBC << endl;

    return 0;
}