extern unsigned int D_001F59A4;
extern unsigned int D_001F59A0;
extern int func_1206C0(int);

void func_017780(void)
{
    unsigned int cursor = D_001F59A4;
    unsigned int end = D_001F59A4 + D_001F59A0 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_1206C0(*field);
        cursor += 0x10;
    }
}
