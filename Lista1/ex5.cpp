#include <iostream>
#include <chrono>
#include <fstream>
#include <string>

bool prime(long long n) {
    int qty_divs = 0;
    for (long long d = 1; d <= n; ++d) {
        if (n % d == 0) {
            qty_divs = qty_divs + 1;
        }
    }
    return qty_divs == 2;
}

bool prime2(long long n) {
    int qty_divs = 0;
    for (long long i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            qty_divs = qty_divs + 1;
        }
    }
    if (qty_divs == 1) {
        return true;
    } else {
        return false;
    }
}

bool prime3(long long n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    int qty_divs = 1;
    for (long long i = 3; i <= n; i = i + 2) {
        if (n % i == 0) {
            qty_divs = qty_divs + 1;
        }
    }
    return qty_divs = 1;
}

bool prime4(long long n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    bool p = true;
    int d = 3;
    while (p and d <= (n / 2)) {
        if ( n % d == 0) {
            p = false;
        }
        d = d + 2;
    }
    return p;
}


int main() {
    std::ifstream file("args.txt");
    std::string line;
    while (std::getline(file, line)) {
        
        long long n = std::stoll(line);
    
        auto beg = std::chrono::high_resolution_clock::now();
        bool p = prime4(n);
        auto end = std::chrono::high_resolution_clock::now();
        
        if (p) {
            std::cout << n << " is prime" << std::endl;
        } else {
            std::cout << n << " is not prime" << std::endl;
        }
    
        auto dur = end - beg;
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
        std::cerr << n << " Processing time: " << duration.count() << " microseconds(s)" << std::endl;
    }
    file.close();
    
    return 0;
}