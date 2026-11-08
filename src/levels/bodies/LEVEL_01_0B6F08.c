extern void func_0B72F8(int, unsigned int);
extern void func_0B71B0(int, int);
extern void func_0B7070(int, int);
extern void func_0B9088(int, unsigned int);

void func_0B6F08(int value)
{
    int index = 0;

    do {
        func_0B72F8(index, value);
        func_0B71B0(index, value);
        func_0B7070(index, value);
        func_0B9088(index, value);
        ++index;
    } while (index == 0);
}
