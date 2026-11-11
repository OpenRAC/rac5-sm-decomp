extern unsigned int D_00206DA4;
extern unsigned int D_00206DA0;
extern int func_12A068(int);

void func_018ED8(void)
{
    unsigned int cursor = D_00206DA4;
    unsigned int end = D_00206DA4 + D_00206DA0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_12A068(*field);
        cursor += 0x10;
    }
}
