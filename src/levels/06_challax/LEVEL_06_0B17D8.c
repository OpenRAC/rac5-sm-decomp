extern void func_0B1BC8(int, unsigned int);
extern void func_0B1A80(int, int);
extern void func_0B1940(int, int);
extern void func_0B3988(int, unsigned int);

void func_0B17D8(int value)
{
    int index = 0;

    do {
        func_0B1BC8(index, value);
        func_0B1A80(index, value);
        func_0B1940(index, value);
        func_0B3988(index, value);
        ++index;
    } while (index == 0);
}
