#include <iostream>
#include <Windows.h>
#include "Book.h"

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    //Book book;
    //book.SetAuthor("template").SetName("sample").SetPublish("example").SetYear(0000).SetPageCount(000);
    //book.PrintBook();

    const int size = 3;
    Book books[size] = {
        Book("Кузнецов Максим", "Що Робити Коли Ти Закохався У Вигаданого Персонажа І Тебе За Це Ненавидять", "Devolver Publishing House", 2025, 228),
        Book("Юркевич Володимир", "Не йдіть у ITSTEP", "Vivat", 2035, 207),
        Book("Конрад Розет", "GRIS: Історія розробки", "Calders", 2077, 333)
    };
    PrintBooksByAuthor(books, size);
    PrintBooksByPublish(books, size);
    PrintBooksByYear(books, size);


}

 