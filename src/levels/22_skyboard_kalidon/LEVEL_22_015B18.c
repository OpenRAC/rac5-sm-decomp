extern unsigned int D_00165D84;
extern unsigned int D_00165D80;
extern int func_100C58(int);

void func_015B18(void)
{
    unsigned int cursor = D_00165D84;
    unsigned int end = D_00165D84 + D_00165D80 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_100C58(*field);
        cursor += 0x10;
    }
}
