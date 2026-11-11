extern unsigned int D_0024FC64;
extern unsigned int D_0024FC60;
extern int func_13B5A0(int);

void func_0198C0(void)
{
    unsigned int cursor = D_0024FC64;
    unsigned int end = D_0024FC64 + D_0024FC60 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_13B5A0(*field);
        cursor += 0x10;
    }
}
