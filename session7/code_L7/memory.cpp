#include <iostream>
#include <memory>

using namespace std;

static size_t TOTAL_MEMORY = 0;

void* operator new(size_t size) 
{
	cout<< "Allocating " << size << " bytes ..." <<endl;
	TOTAL_MEMORY += size;
	return malloc(size);
}

void operator delete(void* memory, size_t size) noexcept {
	cout<< "Deleting" << size << "bytes of memory ... " <<endl;
	free(memory);
}

void operator delete(void* memory) noexcept {
	cout<< "Deleting memory ... " <<endl;
	free(memory);
}

struct Object 
{
	int x, y, z;
};

int main()
{
   std::string test = string("Test");
   
   Object* obj = new Object();
   
   delete obj;
   
   cout << "Total memory usage is: " << TOTAL_MEMORY <<endl;
   
   return 0;

}