//typedef void(*HelloWorldFunc)();
//typedef int(*AddTwoNumbersFunc)(int, int);
//typedef void(*PrintValuesFunc)(int);
using PrintHelloWorldFunc = void(*)();
using AddTwoNumbersFunc = int(*)(int, int);
using PrintValuesFunc = void(*)(int);