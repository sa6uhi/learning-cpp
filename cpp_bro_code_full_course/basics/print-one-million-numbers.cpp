#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false); // Disable sync with C stdio (faster for C++ streams)
    std::cin.tie(nullptr);            // Untie cin from cout (minor optimization)

    constexpr int total_numbers = 1'000'001;
    std::string buffer;
    buffer.reserve(8 * total_numbers); // Pre-allocate ~8MB (enough for 1M numbers)

    for (int i = 1; i <= total_numbers; ++i)
    {
        buffer.append(std::to_string(i)).append("\n");
    }

    std::cout << buffer; // Single I/O operation
    std::cout << "1 million numbers printed!";
    return 0;
}