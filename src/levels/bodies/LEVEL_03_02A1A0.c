extern int func_02A1E8(unsigned int);
extern void func_02A138(unsigned int);
extern void func_02A0D0(unsigned int);

void func_02A1A0(unsigned int bit)
{
    if (func_02A1E8(bit) != 0) {
        func_02A138(bit);
    } else {
        func_02A0D0(bit);
    }
}
