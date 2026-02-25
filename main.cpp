#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hibás név: NELEMENTS -> N_ELEMENTS
    int* b = new int[N_ELEMENTS];
    // Rossz idézõjel és hiányzó pontosvesszõ
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // Hiányos ciklusfej
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    // Hibás feltétel (i) és hiányzó pontosvesszõ
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // Nincs kezdõérték (0) adva
    int atlag = 0;
    // Vesszõ hiba a ciklusban és hiányzó pontosvesszõ a törzsben
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Memória felszabadítása
    return 0;
}