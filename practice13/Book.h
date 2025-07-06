#pragma once
#include <iostream>

class Book {
private:
	char* author;
	char* name;
	char* publish;
	int year;
	int pageCount;
public:
	explicit Book() : Book(nullptr, nullptr, nullptr, 0, 0) { }
	Book(const char* author, const char* name, const char* publish, int year, int pageCount);
	~Book() {
		if (this->author) delete[] this->author;
		if (this->name) delete[] this->name;
		if (this->publish) delete[] this->publish;
	}

	char* GetAuthor() {
		return author;
	}

	char* GetName() {
		return name;
	}

	char* GetPublish() {
		return publish;
	}

	int GetYear() {
		return year;
	}

	int GetPageCount() {
		return pageCount;
	}

	void PrintBook() const;

	Book& SetAuthor(const char* author);
	Book& SetName(const char* name);
	Book& SetPublish(const char* publish);
	Book& SetYear(int year);
	Book& SetPageCount(int pageCount);
};

void PrintBooksByAuthor(Book book[], int size);
void PrintBooksByPublish(Book book[], int size);
void PrintBooksByYear(Book books[], int size);

