extern void func_0B58A0(int, unsigned int);
extern void func_0B5758(int, int);
extern void func_0B5618(int, int);
extern void func_0B7630(int, unsigned int);

void func_0B54B0(int value)
{
    int index = 0;

    do {
        func_0B58A0(index, value);
        func_0B5758(index, value);
        func_0B5618(index, value);
        func_0B7630(index, value);
        ++index;
    } while (index == 0);
}
