extern unsigned int D_001D7A24;
extern unsigned int D_001D7A20;
extern int func_11FB68(int);

void func_017AE8(void)
{
    unsigned int cursor = D_001D7A24;
    unsigned int end = D_001D7A24 + D_001D7A20 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_11FB68(*field);
        cursor += 0x10;
    }
}
