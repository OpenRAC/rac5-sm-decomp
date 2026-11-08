extern void func_0A5848(int, unsigned int);
extern void func_0A5700(int, int);
extern void func_0A55C0(int, int);
extern void func_0A7530(int, unsigned int);

void func_0A5458(int value)
{
    int index = 0;

    do {
        func_0A5848(index, value);
        func_0A5700(index, value);
        func_0A55C0(index, value);
        func_0A7530(index, value);
        ++index;
    } while (index == 0);
}
