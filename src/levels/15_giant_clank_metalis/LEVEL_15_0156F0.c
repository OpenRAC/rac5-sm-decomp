extern unsigned int D_0015B724;
extern unsigned int D_0015B720;
extern int func_0EDE90(int);

void func_0156F0(void)
{
    unsigned int cursor = D_0015B724;
    unsigned int end = D_0015B724 + D_0015B720 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_0EDE90(*field);
        cursor += 0x10;
    }
}
