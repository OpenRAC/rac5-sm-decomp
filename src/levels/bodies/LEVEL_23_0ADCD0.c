extern void func_0AE0C0(int, unsigned int);
extern void func_0ADF78(int, int);
extern void func_0ADE38(int, int);
extern void func_0AFE20(int, unsigned int);

void func_0ADCD0(int value)
{
    int index = 0;

    do {
        func_0AE0C0(index, value);
        func_0ADF78(index, value);
        func_0ADE38(index, value);
        func_0AFE20(index, value);
        ++index;
    } while (index == 0);
}
