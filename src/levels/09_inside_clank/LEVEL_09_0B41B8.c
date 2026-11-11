extern void func_0B45A8(int, unsigned int);
extern void func_0B4460(int, int);
extern void func_0B4320(int, int);
extern void func_0B6338(int, unsigned int);

void func_0B41B8(int value)
{
    int index = 0;

    do {
        func_0B45A8(index, value);
        func_0B4460(index, value);
        func_0B4320(index, value);
        func_0B6338(index, value);
        ++index;
    } while (index == 0);
}
