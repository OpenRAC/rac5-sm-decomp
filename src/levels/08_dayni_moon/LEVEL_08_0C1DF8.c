extern void func_0C21E8(int, unsigned int);
extern void func_0C20A0(int, int);
extern void func_0C1F60(int, int);
extern void func_0C3F78(int, unsigned int);

void func_0C1DF8(int value)
{
    int index = 0;

    do {
        func_0C21E8(index, value);
        func_0C20A0(index, value);
        func_0C1F60(index, value);
        func_0C3F78(index, value);
        ++index;
    } while (index == 0);
}
