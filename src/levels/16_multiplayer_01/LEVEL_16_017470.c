extern unsigned int D_001B48B4;
extern unsigned int D_001B48B0;
extern int func_106E98(int);

void func_017470(void)
{
    unsigned int cursor = D_001B48B4;
    unsigned int end = D_001B48B4 + D_001B48B0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_106E98(*field);
        cursor += 0x10;
    }
}
