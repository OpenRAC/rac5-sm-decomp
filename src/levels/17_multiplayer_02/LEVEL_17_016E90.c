extern unsigned int D_001A7EB4;
extern unsigned int D_001A7EB0;
extern int func_106410(int);

void func_016E90(void)
{
    unsigned int cursor = D_001A7EB4;
    unsigned int end = D_001A7EB4 + D_001A7EB0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_106410(*field);
        cursor += 0x10;
    }
}
