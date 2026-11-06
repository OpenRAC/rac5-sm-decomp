extern unsigned int D_0020FA04;
extern unsigned int D_0020FA00;
extern int func_127EC8(int);

void func_018568(void)
{
    unsigned int cursor = D_0020FA04;
    unsigned int end = D_0020FA04 + D_0020FA00 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_127EC8(*field);
        cursor += 0x10;
    }
}
