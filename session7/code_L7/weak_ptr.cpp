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
	// std::shared_ptr<Book> _book;
	std::weak_ptr<Book> _book;
};

class Book
{
public:
	Book(string _title): title(_title){};
	Book (){};
    string title;
    // Implementation of the Articles class.

	~Book() {
		cout<< "Book object is freed at location: " << this <<endl;
	}
	// std::weak_ptr<Articles> _art;
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
	if (0) {
		createCircularReference();
		// noticed that no desctrutor of underlying class is called
	}

	// example2, use of lock() to check if object still exist
	if (true) {	
		std::shared_ptr<Book> sp = std::make_shared<Book>();
		std::weak_ptr<Book> wp = sp;
		// std::shared_ptr<Book> sp1 = sp;
		std::cout << "wp.use_count() = " << wp.use_count() << std::endl;
		
		if (auto locked_sp = wp.lock()) {
			std::cout << "The value of the shared pointer is " << locked_sp->title << std::endl;
		} 
		else {
			std::cout << "The object has been deleted" << std::endl;
		}
		
		sp.reset();
		// wp.reset();
		
		std::cout << "wp.use_count() = " << wp.use_count() << std::endl;
		
		if (auto locked_sp = wp.lock()) {
			// std::cout << "The value of the shared pointer is " << *locked_sp << std::endl;
			std::cout << "The value of the shared pointer is " << locked_sp->title << std::endl;
		} else {
			std::cout << "The object has been deleted" << std::endl;
		}

	}

	return 0;
}
