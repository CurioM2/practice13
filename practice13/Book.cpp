#include "Book.h"

//CONSTRUCTORS
Book::Book(const char* author, const char* name, const char* publish, int year, int pageCount) : year(year), pageCount(pageCount) {
	if (author) {
		this->author = new char[strlen(author) + 1];
		strcpy_s(this->author, strlen(author) + 1, author);
	}
	else this->author = nullptr;

	if (name) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	else this->name = nullptr;

	if (publish) {
		this->publish = new char[strlen(publish) + 1];
		strcpy_s(this->publish, strlen(publish) + 1, publish);
	}
	else this->publish = nullptr;
}
//CONSTRUCTORS

//METHODS
void Book::PrintBook() const {
	std::cout << "Автор книги: " << author << '\n' << "Назва книги: " << name << '\n' << "Видавництво: " << publish << '\n';
	std::cout << "Рік випуску: " << year << '\n' << "Кількість сторінок: " << pageCount << '\n';
}
//SETTERS
Book& Book::SetAuthor(const char* author) {
	if (author) {
		this->author = new char[strlen(author) + 1];
		strcpy_s(this->author, strlen(author) + 1, author);
	}
	else {
		this->author = nullptr;
	}
	return *this;
}

Book& Book::SetName(const char* name) {
	if (name) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	else {
		this->name = nullptr;
	}
	return *this;
}

Book& Book::SetPublish(const char* publish) {
	if (publish) {
		this->publish = new char[strlen(publish) + 1];
		strcpy_s(this->publish, strlen(publish) + 1, publish);
	}
	else {
		this->publish = nullptr;
	}
	return *this;
}

Book& Book::SetYear(int year) {
	this->year = year;
	return *this;
}

Book& Book::SetPageCount(int pageCount) {
	this->pageCount = pageCount;
	return *this;
}
//SETTERS
//METHODS

//FUNCTIONS
void PrintBooksByAuthor(Book books[], int size) {
	char input[50];
	std::cout << "Введіть автора: ";
	std::cin.getline(input, 50);
	std::cout << '\n';
	std::cout << "Список книг цього автора: " << '\n';
	int check = 0;
	for (int i = 0; i < size; i++) {
		if (strcmp(input, books[i].GetAuthor()) == 0) {
			check++;
			books[i].PrintBook();
			std::cout << '\n';
		}
	}
	if (check == 0) {
		std::cout << "Книг не знайдено." << '\n';
		std::cout << '\n';
	}
}

void PrintBooksByPublish(Book books[], int size) {
	char input[50];
	std::cout << "Введіть видавництво: ";
	std::cin.getline(input, 50);
	std::cout << '\n';
	std::cout << "Список книг, випущених цим видавництвом: " << '\n';
	int check = 0;
	for (int i = 0; i < size; i++) {
		if (strcmp(input, books[i].GetPublish()) == 0) {
			check++;
			books[i].PrintBook();
			std::cout << '\n';
		}
	}
	if (check == 0) {
		std::cout << "Книг не знайдено." << '\n';
		std::cout << '\n';
	}
}

void PrintBooksByYear(Book books[], int size) {
	int input;
	std::cout << "Введіть рік: ";
	std::cin >> input;
	std::cout << '\n';
	std::cout << "Список книг, випущених після заданого року: " << '\n';
	int check = 0;
	for (int i = 0; i < size; i++) {
		if (input < books[i].GetYear()) {
			check++;
			books[i].PrintBook();
			std::cout << '\n';
		}
	}
	if (check == 0) {
		std::cout << "Книг не знайдено." << '\n';
		std::cout << '\n';
	}
}