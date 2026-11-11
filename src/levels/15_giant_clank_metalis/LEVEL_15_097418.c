extern void func_0978B8(int, unsigned int);
extern void func_0976E0(int, int);
extern void func_097580(int, int);
extern void func_0996D0(int, unsigned int);

void func_097418(int value)
{
    int index = 0;

    do {
        func_0978B8(index, value);
        func_0976E0(index, value);
        func_097580(index, value);
        func_0996D0(index, value);
        ++index;
    } while (index == 0);
}
