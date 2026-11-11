extern unsigned int D_0021B0A4;
extern unsigned int D_0021B0A0;
extern int func_12D068(int);

void func_019640(void)
{
    unsigned int cursor = D_0021B0A4;
    unsigned int end = D_0021B0A4 + D_0021B0A0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_12D068(*field);
        cursor += 0x10;
    }
}
