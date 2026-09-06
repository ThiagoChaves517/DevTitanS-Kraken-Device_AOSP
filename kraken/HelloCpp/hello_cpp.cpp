#include "hello_cpp.h"

namespace devtitans::hello // Entra no pacote devtitans::hello
{
    void HelloCpp::printHello() // Implementa o método printHello da classe HelloCpp
    {
        std::cout << "Hello World in C++!\n";
        ALOG(LOG_INFO, "DevTITANS", "Hello World in C++ (LogCat)!");

        HelloCppLib helloLib;
        std::cout << "Pi value from Lib: " << helloLib.computePiValue() << "\n";
    }
}
// namespace

// Programas em C++ também precisam do MAIN

using namespace devtitans::hello; // Permite usar HelloCpp diretamente ao invés de devtitans::hello::HelloCpp

int main() 
{
    HelloCpp hello;               // Variável hello, da classe HelloCpp, do pacote devtitans::hello
    hello.printHello();           // Executa o método printHello
    return 0;
}