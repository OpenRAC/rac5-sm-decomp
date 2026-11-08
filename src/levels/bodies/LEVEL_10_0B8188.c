extern void func_0B85F8(int, unsigned int);
extern void func_0B8450(int, int);
extern void func_0B82F0(int, int);
extern void func_0BA3D0(int, unsigned int);

void func_0B8188(int value)
{
    int index = 0;

    do {
        func_0B85F8(index, value);
        func_0B8450(index, value);
        func_0B82F0(index, value);
        func_0BA3D0(index, value);
        ++index;
    } while (index == 0);
}
