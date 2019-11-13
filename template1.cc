    #include <string>
    #include <iostream>

    using namespace std;

    template <class T> T add(const T one, const T two) {
        T three;
        three = one + two;

        return three;
    }

    int main(void) {

        auto b = add(string("1"), string("2"));

        cout << b << endl;

    }
