extern unsigned int D_001F08A4;
extern unsigned int D_001F08A0;
extern int func_123000(int);

void func_018340(void)
{
    unsigned int cursor = D_001F08A4;
    unsigned int end = D_001F08A4 + D_001F08A0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_123000(*field);
        cursor += 0x10;
    }
}
