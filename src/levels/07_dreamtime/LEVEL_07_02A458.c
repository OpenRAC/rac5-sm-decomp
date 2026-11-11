extern int D_00246CC0[];

void func_02A458(void)
{
    int *entry = D_00246CC0;
    int *end = D_00246CC0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
