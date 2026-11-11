extern void func_0B9358(int, unsigned int);
extern void func_0B9210(int, int);
extern void func_0B90D0(int, int);
extern void func_0BB0E8(int, unsigned int);

void func_0B8F68(int value)
{
    int index = 0;

    do {
        func_0B9358(index, value);
        func_0B9210(index, value);
        func_0B90D0(index, value);
        func_0BB0E8(index, value);
        ++index;
    } while (index == 0);
}
