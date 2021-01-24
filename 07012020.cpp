// 07012020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int _Is_Int(char buffer[100]);
int _Is_Float(char buffer[100]);
int _ReversibleNum(int n);
int _sumDigit(int n);
int _PrimesTogetherNum(int n, int m);
int _IsDivisor(int x, int n);
int _IsPrimes(int n);
void _Exercise_1(void);
void _Exercise_2(void);
void _Exercise_3(void);
void _Exercise_4(void);
void _Exercise_5(void);
void _Exercise_6(void);
void _Exercise_7(void);
void _Exercise_8(void);
void _Exercise_9(void);
void _Exercise_10(void);
void _Exercise_11(void);
void _Exercise_12(void);
void _Exercise_13(void);
void _Exercise_14(void);
void _Exercise_15(void);

int main()
{
    int _while = 1;
    std::cout << "Hello World\n";
    while (_while)
    {
        char _input[100];
        std::cout << "\n\nNhap BT muon chuyen den (1,2,3,4...), hoac nhap \"exit\" de thoat\n";
        std::cin >> _input;
        if (strcmp(_input, "1") == 0)
        {
            _Exercise_1();
        }
        else if (strcmp(_input, "2") == 0)
        {
            _Exercise_2();
        }
        else if (strcmp(_input, "3") == 0)
        {
            _Exercise_3();
        }
        else if (strcmp(_input, "4") == 0)
        {
            _Exercise_4();
        }
        else if (strcmp(_input, "5") == 0)
        {
            _Exercise_5();
        }
        else if (strcmp(_input, "6") == 0)
        {
            _Exercise_6();
        }
        else if (strcmp(_input, "7") == 0)
        {
            _Exercise_7();
        }
        else if (strcmp(_input, "8") == 0)
        {
            _Exercise_8();
        }
        else if (strcmp(_input, "9") == 0)
        {
            _Exercise_9();
        }
        else if (strcmp(_input, "10") == 0)
        {
            _Exercise_10();
        }
        else if (strcmp(_input, "11") == 0)
        {
            _Exercise_11();
        }
        else if (strcmp(_input, "12") == 0)
        {
            _Exercise_12();
        }
        else if (strcmp(_input, "13") == 0)
        {
            _Exercise_13();
        }
        else if (strcmp(_input, "14") == 0)
        {
            _Exercise_14();
        }
        else if (strcmp(_input, "15") == 0)
        {
            _Exercise_15();
        }
        else if (strcmp(_input, "exit") == 0)
        {
            _while = 0;
        }
    }
}


int _Is_Int(char buffer[100])
{
    int _return = 1;
    if ((isdigit(buffer[0]) == 0) && (buffer[0] != '-') && (buffer[0] != '+'))
    {
        _return = 0;
    }
    int ilen = strlen(buffer);
    for (int i = 1; i < ilen; i++)
    {
        if (isdigit(buffer[i]) == 0)
        {
            _return = 0;
        }
    }
    return _return;
}

int _Is_Float(char buffer[100])
{
    int _return = 1;
    int _dot_position = 0;
    int i, j;
    int ilen = strlen(buffer);
    for (i = 0; i < ilen; i++)
    {
        if (buffer[i] == '.')
        {
            _dot_position = i;
            break;
        }
    }
    if ((_dot_position == 0) && (_Is_Int(buffer) == 0)) _return = 0;
    else
    {
        if ((isdigit(buffer[0]) == 0) && (buffer[0] != '-') && (buffer[0] != '+'))
        {
            _return = 0;
        }
        for (j = 1; j < _dot_position; j++)
        {
            if (isdigit(buffer[j]) == 0)
            {
                _return = 0;
            }
        }
        for (j = _dot_position + 1; j < ilen; j++)
        {
            if (isdigit(buffer[j]) == 0)
            {
                _return = 0;
            }
        }
    }
    return _return;
}

void _Exercise_1(void)
{
    std::cout << "--------------Bai tap 1---------------------\n";
    // Nhap 2 so nguyen duog x, y
    char _num[50];
    int x,y;
    while (1)
    {
        std::cout << "Nhap so nguyen duong x: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            x = atoi(_num);
            if (x > 0)
                break;
        }
    }
    while (1)
    {
        std::cout << "Nhap so nguyen duong y: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            y = atoi(_num);
            if (y > 0)
                break;
        }
    }
    // In ket qua:
    std::cout << "Ket qua: \n";
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void _Exercise_2(void)
{
    std::cout << "--------------Bai tap 2---------------------\n";
    // Nhap 2 so nguyen duog x, y
    char _num[50];
    int x, y;
    while (1)
    {
        std::cout << "Nhap so nguyen duong x: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            x = atoi(_num);
            if (x > 0)
                break;
        }
    }
    while (1)
    {
        std::cout << "Nhap so nguyen duong y: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            y = atoi(_num);
            if (y > 0)
                break;
        }
    }
    // In ket qua:
    std::cout << "Ket qua: \n";
    for (int i = 0; i < y; i++)
    {
        if ((i == 0) || (i == y - 1))
        {
            for (int j = 0; j < x; j++)
            {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
        else
        {
            for (int j = 0; j < x; j++)
            {
                if ((j == 0) || (j == x - 1))
                {
                    std::cout << "* ";
                }
                else
                {
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    }
}
void _Exercise_3(void)
{
    std::cout << "--------------Bai tap 3---------------------\n";
    // Nhap so nguyen duog h
    char _num[50];
    int h;
    while (1)
    {
        std::cout << "Nhap so nguyen duong h: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            h = atoi(_num);
            if (h > 0)
                break;
        }
    }
    // In ket qua
    std::cout << "Ket qua: \n";
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}
void _Exercise_4(void)
{
    std::cout << "--------------Bai tap 4---------------------\n";
    // Nhap so nguyen duog h
    char _num[50];
    int h;
    while (1)
    {
        std::cout << "Nhap so nguyen duong h: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            h = atoi(_num);
            if (h > 0)
                break;
        }
    }
    // In ket qua
    std::cout << "Ket qua: \n";
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= 2*h-1; j++)
        {
            if ((j >= (h - i + 1)) && (j <= (h + i - 1)))
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}

int _ReversibleNum(int n)
{
    char _n[50];
    int count = 0;
    while (n > 0)
    {
        _n[count] = n % 10;
        count++;
        n = n / 10;
    }
    for (int i = 0; i < count; i++)
    {
        if (_n[i] != _n[count - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int _sumDigit(int n)
{
    int S = 0;
    while (n > 0)
    {
        S = S + n % 10;
        n = n / 10;
    }
    return S;
}

void _Exercise_5(void)
{
    std::cout << "--------------Bai tap 5---------------------\n";
    // Nhap so nguyen duog k
    char _num[50];
    int k;
    while (1)
    {
        std::cout << "Nhap so nguyen duong k (k<73): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            k = atoi(_num);
            if ((k > 0) && (k < 73))
                break;
        }
    }
    // In ket qua
    std::cout << "Cac so thuan nghich co 8 chu so, tong cac chu so chia het cho " << k << " la: \n";
    int count = 0;
    for (int32_t i = 10000000; i < 100000000; i++)
    {
        if ((_ReversibleNum(i)) && (_sumDigit(i) % k == 0))
        {
            std::cout << i << " ";
            count++;
        }
    }
    if (count == 0) std::cout << "Khong co so nao hop le!";

}


int _PrimesTogetherNum(int n, int m)
{
    for (int i = 2; i < n; i++)
    {
        if ((n % i == 0) && (m % i == 0))
        {
            return 0;
        }
    }
    return 1;
}


void _Exercise_6(void)
{
    std::cout << "--------------Bai tap 6---------------------\n";
    // Nhap so nguyen duog a,b
    char _num[50];
    int a,b;
    while (1)
    {
        std::cout << "Nhap so nguyen duong a: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            a = atoi(_num);
            if (a > 0)
                break;
        }
    }
    while (1)
    {
        std::cout << "Nhap so nguyen duong b (b>a): ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            b = atoi(_num);
            if (b > a)
                break;
        }
    }
    // In ket qua
    std::cout << "Cac cap so nguyen to cung nhau trong doan [a,b] la: \n";
    int count = 0;
    for (int i = a; i <= b-1; i++)
    {
        for (int j = i+1; j <= b; j++)
        {
            if (_PrimesTogetherNum(i, j))
            {
                std::cout << i << " va " << j << std::endl;
                count++;
            }
        }
    }
    if (count == 0) std::cout << "Khong co cap so nao!!";
}

void _Exercise_7(void)
{
    std::cout << "--------------Bai tap 7---------------------\n";
    // Nhap so nguyen duog n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap so nguyen duong n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    // In ket qua
    std::cout << "Tong cac chu so cua n la: " << _sumDigit(n) << std::endl;
    // Phan tich n thanh cac thua so nguyen to
    std::cout << n << " = ";
    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        count = 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }
        switch (count)
        {
        case 0: break;
        case 1: 
        {
            std::cout << i;
            break;
        }
        default:
            std::cout << i << "^" << count;
            break;
        }
         
        if ((n > i)&&(count!=0)) std::cout << " * ";
    }
}
void _Exercise_8(void)
{
    std::cout << "--------------Bai tap 8---------------------\n";
    // Nhap so nguyen duog n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap so nguyen duong n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }
    // In ket qua
    // Kiem tra xem co bao nhieu so le, bao nhieu so chan
    
    int _odd_num = 0;
    int _even_num = 0;
    int m = n;
    while (m > 0)
    {
        (m % 2 == 0) ? _even_num++ : _odd_num++;
        m = m / 10;
    }
    std::cout << n << " co " << _odd_num << " so le - " << _even_num << " so chan.\n";

    //Kiem tra xem n co phai la so thuan nghich hay k
    _ReversibleNum(n) ? std::cout << "n la so thuan nghich!" : std::cout << "n KHONG PHAI la so thuan nghich!";
}

int _IsDivisor(int x, int n)
{
    if (n%x==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int _IsPrimes(int n)
{
    if (n < 2) return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void _Exercise_9(void)
{
    std::cout << "--------------Bai tap 9---------------------\n";
    // Nhap so nguyen duog n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap so nguyen duong n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }

    std::cout << "Cac uoc so KHONG nguyen to cua n la: \n";
    for (int i = 1; i <= n; i++)
    {
        if (_IsDivisor(i, n) && (_IsPrimes(i) == 0)) std::cout << i << "   ";
    }
    std::cout << "\nCac uoc so la nguyen to cua n la: \n";
    for (int i = 1; i <= n; i++)
    {
        if (_IsDivisor(i, n) && _IsPrimes(i)) std::cout << i << "   ";
    }
}

int _nthFiboNum(int n)
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;

    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}

void _Exercise_10(void)
{
    std::cout << "--------------Bai tap 10---------------------\n";
    // Nhap so nguyen duog n
    char _num[50];
    int n;
    while (1)
    {
        std::cout << "Nhap so nguyen duong n: ";
        std::cin >> _num;
        if (_Is_Int(_num) == 1)
        {
            n = atoi(_num);
            if (n > 0)
                break;
        }
    }

    std::cout << "n so nguyen to dau tien la: \n";
    int dem = 1;
    int m = n;
    while (m)
    {
        if (_IsPrimes(dem)) {
            std::cout << dem << "   ";
            m--;
        }
        dem++;
    }

    std::cout << "\nn so Fibonaci dau tien la: \n";
    for (int j = 1; j <= n; j++)
    {
        std::cout << _nthFiboNum(j) << "   ";
    }
}

void _Exercise_11(void)
{
    std::cout << "--------------Bai tap 11---------------------\n";
    std::cout << "Cac so nguyen co tu 6 chu so den 9 chu so, thoa man: so nguyen to, so thuan nghich, so le la:\n";
    for (int i = 100000; i < 1000000000; i++)
    {
        if ((i%2==1)&& _ReversibleNum(i)&& _IsPrimes(i))
        {
            std::cout << i << "   ";
        }
    }

}
void _Exercise_12(void)
{
    std::cout << "--------------Bai tap 12---------------------\n";
}
void _Exercise_13(void)
{
    std::cout << "--------------Bai tap 13---------------------\n";
}
void _Exercise_14(void)
{
    std::cout << "--------------Bai tap 14---------------------\n";
}
void _Exercise_15(void)
{
    std::cout << "--------------Bai tap 15---------------------\n";
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
