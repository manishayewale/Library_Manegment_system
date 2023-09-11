#include"Book.h"
class Library
{
	int size,index;
	Book *bks;
	static int cnt;
	public:
		Library(int);
		bool isEmpty();
		bool isFull();
		void addBook(Book&);
		void searchBook(int);
		void updateBook(int);
		void deleteBook(int);
		void displayBook();
		void showCount();
		~Library();
};
