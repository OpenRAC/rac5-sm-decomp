extern int D_0023A7C0[];

void func_029EF0(void)
{
    int *entry = D_0023A7C0;
    int *end = D_0023A7C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
