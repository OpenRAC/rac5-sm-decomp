extern unsigned int D_00116F94;
extern unsigned int D_00116F90;
extern int func_0DEBE0(int);

void func_015320(void)
{
    unsigned int cursor = D_00116F94;
    unsigned int end = D_00116F94 + D_00116F90 * 0x10;
    while (cursor < end) {
        int *field = (int *)(cursor + 8);
        *field = func_0DEBE0(*field);
        cursor += 0x10;
    }
}
