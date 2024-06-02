#include <memory>
#include <string>
#include <iostream>

using namespace std;

class Book;

class Articles
{
    public:
    string title;
    // Implementation of the Articles class.

	~Articles() {
		cout<< "Article object is freed at location: " << this <<endl;
	}
	std::shared_ptr<Book> _book;
};

class Book
{
    public:
    string title;
    // Implementation of the Articles class.

	~Book() {
		cout<< "Book object is freed at location: " << this <<endl;
	}
	std::shared_ptr<Articles> _art;
};

void createCircularReference() {
	auto thisBook = std::make_shared<Book>();
	thisBook->title = "good book";
	auto thisArticle = std::make_shared<Articles>();
	thisArticle->title = "interesting article";
	thisArticle->_book = thisBook;
	thisBook->_art = thisArticle;
	cout << "artical use count: "<< thisArticle.use_count() <<endl;
	cout << "book use count: "<< thisBook.use_count() <<endl;
}

int main()
{
    //example basic usage
	// if (0) {
	// 	//creation
	// 	shared_ptr<Articles> p1(new Articles());
	// 	auto p = std::make_shared<Articles>(); //preferred way
	// 	p1->title = "good article";
    // 	// Initialise the pointer P1 as you would normally do with a normal pointer, 
	// 	// this'll print the title of the article
    // 	cout << "p1: " << p1->title << endl;
    // 	shared_ptr<Articles> p2 = p1; //assignment 
	// 	cout << "p2: " << p2->title << endl;
	// 	// This'll print 2 as Reference Counter is 2
    // 	// The memory will only be freed when both the pointers P1 and P2 have gone 
	// 	// out of scope or released the ownership of the location.
	// 	cout << p1.use_count() << endl;

	// };

	//example 2, circular reference cases of using shared pointer
	if (1) {
		createCircularReference();
		// noticed that no desctrutor of underlying class is called
	}

	return 0;
}
