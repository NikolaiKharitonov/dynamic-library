#include "pch.h";
#include "MyDll.h";
int GetLenght(char* line)
{
    int result = 0;
    for (result = 0; line[result] != '\0'; result++);
    return result;
}
void Concat(char* firstLine, char* secondLine, char* resultLine)
{
    int startPosition = GetLenght(firstLine);
    int sum = startPosition + GetLenght(secondLine);
    int i = 0;
    int j = 0;
    for (i; i < sum; i++)
    {
        if (i < startPosition)
        {
            resultLine[i] = firstLine[j];
            j++;
        }
        else
        {
            if (i == startPosition) j = 0;
            resultLine[i] = secondLine[j];
            j++;
        }
    }
    resultLine[i] = '\0';
}
void Copy(char* firstLine, int startPosition, int lenght, char* resultLine)
{
    if (startPosition < 0) startPosition = 0;
    if (lenght <= 0) lenght = 0;
    int i = 0;
    int j = 0;
    for (i = startPosition; i < startPosition + lenght; i++)
    {
        resultLine[j] = firstLine[i];
        j++;
    }
    resultLine[j] = '\0';
}
void Delete(char* firstLine, int startPosition, int lenght, char* resultLine)
{
    if (startPosition < 0) startPosition = 0;
    if (lenght <= 0) lenght = 0;
    int i = 0;
    int j = 0;
    for (i = 0; firstLine[i] != '\0'; i++)
    {
        if (i < startPosition || i > startPosition + lenght - 1)
        {
            resultLine[j] = firstLine[i];
            j++;
        }
    }
    resultLine[j] = '\0';
}
void Insert(char* firstLine, int startPosition, char* secondLine, char* resultLine)
{
    int firstLineLenght = GetLenght(firstLine);
    int secondLineLenght = GetLenght(secondLine);
    int i;
    int j = 0;
    int k = 0;
    if (startPosition < 0) startPosition = 0;
    if (startPosition > firstLineLenght) startPosition = firstLineLenght;
    for (i = 0; i < firstLineLenght + secondLineLenght; i++)
    {
        if (i < startPosition || i > startPosition + secondLineLenght - 1)
        {
            resultLine[i] = firstLine[j];
            j++;
        }
        else
        {
            resultLine[i] = secondLine[k];
            k++;
        }
    }
    resultLine[i] = '\0';
}
int IndexOf(char* firstLine, char* secondLine)
{
    int result = 0;
    int test = 0;
    int j = 0;
    int firstLineLenght = GetLenght(firstLine);
    int secondLineLenght = GetLenght(secondLine);
    for (int i = 0; i < firstLineLenght; i++)
    {
        if (firstLine[i] == secondLine[j])
        {
            test++;
            j++;
        }
        else
        {
            test = 0;
            j = 0;
        }
        if (test == secondLineLenght)
        {
            result = i - secondLineLenght;
            break;
        }
    }
    if (test == secondLineLenght)
    {
        return result += 1;
    }
    else
    {
        return result = -1;
    }
}
int LastIndexOf(char* firstLine, char* secondLine)
{
    int firstLineLenght = GetLenght(firstLine);
    int secondLineLenght = GetLenght(secondLine);
    int result = 0;
    int test = 0;
    int j = secondLineLenght - 1;
    for (int i = firstLineLenght - 1; i >= 0; i--)
    {
        if (firstLine[i] == secondLine[j])
        {
            test++;
            j--;
        }
        else
        {
            test = 0;
            j = secondLineLenght - 1;;
        }
        if (test == secondLineLenght)
        {
            result = i - 1;
            break;
        }
    }
    if (test == secondLineLenght)
    {
        return result += 1;
    }
    else
    {
        return result = -1;
    }
}
void Replace(char* firstLine, char* secondLine, char* thirdLine, char* resultLine)
{
    int firstLineLenght = GetLenght(firstLine);
    int secondLineLenght = GetLenght(secondLine);
    int thirdLineLenght = GetLenght(thirdLine);
    int startPosition = IndexOf(firstLine, secondLine);
    if (startPosition == -1)
    {
        for (int i = 0; i < firstLineLenght; i++)
        {
            resultLine[i] = firstLine[i];
        }
        resultLine[firstLineLenght] = '\0';
    }
    else
    {
        char temp[1024];
        int i = 0;
        int j = 0;
        int k = 0;
        for (i = 0; firstLine[i] != '\0'; i++)
        {
            if (i < startPosition || i >= startPosition + secondLineLenght)
            {
                temp[j] = firstLine[i];
                j++;
            }
            temp[j] = '\0';
        }
        j = 0;
        for (i = 0; i < firstLineLenght - secondLineLenght + thirdLineLenght; i++)
        {
            if (i < startPosition || i > startPosition + thirdLineLenght - 1)
            {
                resultLine[i] = temp[j];
                j++;
            }
            else
            {
                resultLine[i] = thirdLine[k];
                k++;
            }
        }
        resultLine[i] = '\0';
    }
}
void ReplaceAll(char* firstLine, char* secondLine, char* thirdLine, char* resultLine)
{
    int startPosition = IndexOf(firstLine, secondLine);
    bool check = true;
    int count = 0;
    while (check == true)
    {
        if (startPosition == -1)
        {
            check = false;
            break;
        }
        else
        {
            if (count == 0)
            {
                Replace(firstLine, secondLine, thirdLine, resultLine);
                startPosition = IndexOf(resultLine, secondLine);
                count++;
            }
            else
            {
                Replace(resultLine, secondLine, thirdLine, resultLine);
                startPosition = IndexOf(resultLine, secondLine);
            }
        }
    }
}
