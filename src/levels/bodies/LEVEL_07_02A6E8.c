extern int func_02A730(unsigned int);
extern void func_02A680(unsigned int);
extern void func_02A618(unsigned int);

void func_02A6E8(unsigned int bit)
{
    if (func_02A730(bit) != 0) {
        func_02A680(bit);
    } else {
        func_02A618(bit);
    }
}
