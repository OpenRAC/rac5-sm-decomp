extern unsigned int D_002201C4;
extern unsigned int D_002201C0;
extern int func_1364E8(int);

void func_018C38(void)
{
    unsigned int cursor = D_002201C4;
    unsigned int end = D_002201C4 + D_002201C0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_1364E8(*field);
        cursor += 0x10;
    }
}
