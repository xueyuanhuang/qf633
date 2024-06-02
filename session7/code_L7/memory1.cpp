#include <iostream>
#include <memory>

static std::size_t TOTAL_MEMORY = 0;

void *operator new(std::size_t size)
{
    std::cout << "Allocating " << size << " bytes ..." << std::endl;
    TOTAL_MEMORY += size;
    return std::malloc(size);
}

void operator delete(void *memory, std::size_t size) noexcept
{
    std::cout << "Deleting " << size << " bytes of memory..." << std::endl;
    std::free(memory);
}

void operator delete(void *memory) noexcept
{
    std::cout << "Deleting memory ..." << std::endl;
    std::free(memory);
}

struct Object
{
    int x, y, z;
};

int main()
{
    std::string test = std::string("Test");

    Object *o = new Object();

    delete o;

    std::cout << "Total memory usage is " << TOTAL_MEMORY << std::endl;

    return 0;
}
