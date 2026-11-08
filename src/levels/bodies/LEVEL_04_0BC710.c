extern void func_0BCB00(int, unsigned int);
extern void func_0BC9B8(int, int);
extern void func_0BC878(int, int);
extern void func_0BE868(int, unsigned int);

void func_0BC710(int value)
{
    int index = 0;

    do {
        func_0BCB00(index, value);
        func_0BC9B8(index, value);
        func_0BC878(index, value);
        func_0BE868(index, value);
        ++index;
    } while (index == 0);
}
