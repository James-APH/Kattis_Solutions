#include <iostream>
#include <string>


int main() {
    std::string N;
    std::string M;
    std::cin >> N >> M;

    int decimalPlace = N.length() - (M.length() - 1);

    if (decimalPlace == 0 || M.length() > N.length())
        N = "0." + M.substr(2, M.length() - N.length() - 1) + N;
    else
        N.insert(decimalPlace, ".");

    for (int i = N.length() - 1; i > 0; --i) {
        if (N[i] != '0') {
            N = N[i] == '.' ? N.substr(0, i)
                            : N.substr(0, i + 1);
            break;
        }
    }

    std::cout << N << std::endl;
}
