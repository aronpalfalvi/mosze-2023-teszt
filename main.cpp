#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
        // Bug: used undeclared NELEMENTS (should be N_ELEMENTS)
    int *b = new int[N_ELEMENTS];

    // Bug: wrong quote char and missing semicolon
    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // Bug: incomplete loop header, initialize and compare correctly
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    // Bug: loop condition incorrect and missing output formatting
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    // Bug: atlag not initialized
    int atlag = 0;

    // Bug: comma instead of semicolon in for, missing semicolon inside
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // Memoria felszabadítása
    return 0;
}
