extern void func_0BDC08(int, unsigned int);
extern void func_0BDAC0(int, int);
extern void func_0BD980(int, int);
extern void func_0BF998(int, unsigned int);

void func_0BD818(int value)
{
    int index = 0;

    do {
        func_0BDC08(index, value);
        func_0BDAC0(index, value);
        func_0BD980(index, value);
        func_0BF998(index, value);
        ++index;
    } while (index == 0);
}
