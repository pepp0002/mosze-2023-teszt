#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // Hiba: NELEMENTS helyett N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  // Hiba: Az idézőjelek helyett kettős idézőjeleket kell használni a szövegben
    for (int i = 0;)  // Hiba: Hiányzik az i értékének kezdő értéke
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // Hiba: A második for ciklus feltétele mindig hamis, így soha nem fut le
    {
        std::cout << "Ertek:"  // Hiba: Hiányzik a << operátor után a b[i] változó
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)  // Hiba: A vessző helyett pontosvesszőt kell használni a ciklus számlálójánál
    {
        atlag += b[i]  // Hiba: Hiányzik a művelet jobb oldaláról a befejező pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
