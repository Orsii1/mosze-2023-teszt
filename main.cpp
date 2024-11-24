#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Helyes változónév
    std::cout << "1-100 ertekek duplazasa" << std::endl; // Helyes szintaxis
    for (int i = 0; i < N_ELEMENTS; i++) // Hibás feltétel javítása
    {
        b[i] = (i + 1) * 2; // 1-től 100-ig duplázás
    }
    for (int i = 0; i < N_ELEMENTS; i++) // Hibás iteráció javítása
    {
        std::cout << "Ertek: " << b[i] << std::endl; // Pontos kimenet
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // Inicializálás
    for (int i = 0; i < N_ELEMENTS; i++) // Hibás vessző javítása
    {
        atlag += b[i]; // Összegzés
    }
    atlag /= N_ELEMENTS; // Átlag számítása
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Memóriaszivárgás elkerülése
    return 0;

    cout << "Hello World" << endl;

}
