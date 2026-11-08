extern void func_0B70E0(int, unsigned int);
extern void func_0B6F98(int, int);
extern void func_0B6E58(int, int);
extern void func_0B8E70(int, unsigned int);

void func_0B6CF0(int value)
{
    int index = 0;

    do {
        func_0B70E0(index, value);
        func_0B6F98(index, value);
        func_0B6E58(index, value);
        func_0B8E70(index, value);
        ++index;
    } while (index == 0);
}
