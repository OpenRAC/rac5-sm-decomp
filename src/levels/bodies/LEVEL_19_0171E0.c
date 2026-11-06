extern unsigned int D_001B5A34;
extern unsigned int D_001B5A30;
extern int func_107538(int);

void func_0171E0(void)
{
    unsigned int cursor = D_001B5A34;
    unsigned int end = D_001B5A34 + D_001B5A30 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_107538(*field);
        cursor += 0x10;
    }
}
