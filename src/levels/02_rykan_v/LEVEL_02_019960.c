extern unsigned int D_0021BD64;
extern unsigned int D_0021BD60;
extern int func_130418(int);

void func_019960(void)
{
    unsigned int cursor = D_0021BD64;
    unsigned int end = D_0021BD64 + D_0021BD60 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_130418(*field);
        cursor += 0x10;
    }
}
