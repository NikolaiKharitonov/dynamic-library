#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

extern "C" MYDLL_API int GetLenght(char* line);
extern "C" MYDLL_API void Concat(char* firstLine, char* secondLine, char* resultLine);
extern "C" MYDLL_API void Copy(char* firstLine, int startPosition, int lenght, char* resultLine);
extern "C" MYDLL_API void Delete(char* firstLine, int startPosition, int lenght, char* resultLine);
extern "C" MYDLL_API void Insert(char* firstLine, int startPosition, char* secondLine, char* resultLine);
extern "C" MYDLL_API int IndexOf(char* firstLine, char* secondLine);
extern "C" MYDLL_API int LastIndexOf(char* firstLine, char* secondLine);
extern "C" MYDLL_API void Replace(char* firstLine, char* secondLine, char* thirdLine, char* resultLine);
extern "C" MYDLL_API void ReplaceAll(char* firstLine, char* secondLine, char* thirdLine, char* resultLine);
