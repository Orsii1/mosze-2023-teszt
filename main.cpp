#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Hibás NELEMENTS 
    std::cout << '1-100 ertekek duplazasa' // Hibás szintaxis
    for (int i = 0;) // Hibás for ciklus
    {
        b[i] = i * 2; // Hibás ciklus feltétel
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // Hibás kimenet
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // Hibás vessző 
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    // Memóriaszivárgás elkerülésének kihagyása
    return 0;
}
