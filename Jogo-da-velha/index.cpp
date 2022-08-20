#include <iostream>

using namespace std;

void Menu(string text, int quant)
{
    cout << "=========================================== \n";
    cout << "============== Jogo da forca ============== \n";
    cout << "=========================================== \n";
    cout << "- Adivinhe qual é o " << text << "\n";
    cout << "_____    \n";
    cout << "|    |   \n";
    cout << "|    0   \n";
    cout << "|   (|)  \n";
    cout << "|    |   \n";
    cout << "|   ( )  \n\n";
    for (int i = 0; i < quant; i++)
    {
        cout << "_ ";
    }
    cout << "\n\n";
}

int main()
{
    Menu("animal", 6);

    system("pause");
    return 0;
}