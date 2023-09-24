

#include <iostream>
#include <string>
/*
std::string s;
1.strlen - strlen s.length() 
2.strcpy - strcpy/ =
3.strcmp - strcmp/ s.compare()  
4.strcat - strcat/ += в С++ доступна конкатенация строк 
5.someString[index] - someString.at(index)
6.realloc - push_back - можно измененить размер массива и добавить элемент в конец. (точного аналога нет)
7.realloc - pop_back - можно уменьшить размер массива на 1. (точного аналога нет)
Главная разница в том, что в C строки не имеют своего типа данных, в то время как в C++ это 
std::string, также в C строки не могут быть объявлены с помощью литералов

*/


template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    std::string input_string;
    std::string sorted_string;
    std::cout<<"Введите строку: "; 
    std::getline(std::cin, input_string);
    for(char c : input_string){  //прохожу по каждому символу
        if (!std::isspace(c) && !std::ispunct(c)){ //если это не пробил и пункт. добавляю в строку
            sorted_string += c;
        }
    }
    short len = sorted_string.length();
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - 1; j++){
            if (sorted_string[j] > sorted_string[j+1]){
                swap(sorted_string[j], sorted_string[j+1]);
            }
        }
    }
    
    std::cout<<std::endl;
    std::cout<<"Отсортированная строка: "<<sorted_string;
    return 0;
}

