#include <iostream>
#include "MyDll.h"
using namespace std;

int main()
{
    char firstLine[1024], secondLine[1024], thirdLine[1024], resultLine[1024];
    int startPosition, lenght;
    bool exit = false;
    int function = 1;
    while (exit == false)
    {
        cout << "Select Functuion\n1. GetLenght\n2. Cocncat\n3. Copy\n4. Delete\n5. Insert\n6. IndexOf\n7. LastIndexOf\n8. Replace\n9. ReplaceAll\n10. Exit\n";
        cin >> function;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            system("cls");
            continue;
        }
        switch (function)
        {
        case 1:
            cout << "Enter the line\n";
            cin >> firstLine;
            cout << GetLenght(firstLine) << endl;
            system("pause");
            firstLine[0] = '\0';
            system("cls");
            break;
        case 2:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            Concat(firstLine, secondLine, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 3:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the start position\n";
            cin >> startPosition;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                startPosition = 0;
            }
            cout << "Enter the lenght\n";
            cin >> lenght;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                lenght = 0;
            }
            Copy(firstLine, startPosition, lenght, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 4:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the start position\n";
            cin >> startPosition;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                startPosition = 0;
            }
            cout << "Enter the lenght\n";
            cin >> lenght;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                lenght = 0;
            }
            Delete(firstLine, startPosition, lenght, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 5:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            cout << "Enter the start position\n";
            cin >> startPosition;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(100, '\n');
                startPosition = 0;
            }
            Insert(firstLine, startPosition, secondLine, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 6:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            cout << IndexOf(firstLine, secondLine) << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            system("cls");
            break;
        case 7:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            cout << LastIndexOf(firstLine, secondLine) << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            system("cls");
            break;
        case 8:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            cout << "Enter the third line\n";
            cin >> thirdLine;
            Replace(firstLine, secondLine, thirdLine, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            thirdLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 9:
            cout << "Enter the first line\n";
            cin >> firstLine;
            cout << "Enter the second line\n";
            cin >> secondLine;
            cout << "Enter the third line\n";
            cin >> thirdLine;
            ReplaceAll(firstLine, secondLine, thirdLine, resultLine);
            cout << resultLine << endl;
            system("pause");
            firstLine[0] = '\0';
            secondLine[0] = '\0';
            thirdLine[0] = '\0';
            resultLine[0] = '\0';
            system("cls");
            break;
        case 10:
            exit = true;
            return 0;
        }


    }

}




