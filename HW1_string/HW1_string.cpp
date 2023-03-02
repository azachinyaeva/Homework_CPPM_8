#include <iostream>

class WrongLenghtException : public std::exception {
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string str, int forbidden_length) {
    if (str.length() == forbidden_length) {
        throw WrongLenghtException();
    }
    return str.length();
    
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int stop_lenght;
    std::string word;
    int lenght;
    std::cout << "Введите запретную длину: \n";
    std::cin >> stop_lenght;
    do {
        std::cout << "Введите слово: \n";
        std::cin >> word;
        try
        {
            lenght = function(word, stop_lenght);
            std::cout << "Длина слова \"" << word << "\" равна " << lenght << '\n';
        }
        catch (const WrongLenghtException& wr)
        {
            std::cout << wr.what() << '\n';
            break;
        }
        catch (...) { 
            std::cout << "Неизвестная ошибка" << '\n';
            break;
        }
    } 
    while (lenght != stop_lenght);

}

