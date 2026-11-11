extern int func_02A1C8(unsigned int);
extern void func_02A118(unsigned int);
extern void func_02A0B0(unsigned int);

void func_02A180(unsigned int bit)
{
    if (func_02A1C8(bit) != 0) {
        func_02A118(bit);
    } else {
        func_02A0B0(bit);
    }
}
