
struct Complex
{
    int re;
    int im;
};

Complex Add(const Complex& c1, const Complex& c2)
{
    Complex temp;
    temp.re = c1.re + c2.re;
    temp.im = c1.im + c2.im;

    return temp;
}

int main()
{
    Complex c1 = {1, 1};
    Complex c2 = {2, 2};

    Complex t = Add(c1, c2);
}

