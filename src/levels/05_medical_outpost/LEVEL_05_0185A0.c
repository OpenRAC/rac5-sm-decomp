extern unsigned int D_001F5E24;
extern unsigned int D_001F5E20;
extern int func_1259E0(int);

void func_0185A0(void)
{
    unsigned int cursor = D_001F5E24;
    unsigned int end = D_001F5E24 + D_001F5E20 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_1259E0(*field);
        cursor += 0x10;
    }
}
