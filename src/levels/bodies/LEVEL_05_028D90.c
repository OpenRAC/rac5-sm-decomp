extern int D_0021D0C0[];

void func_028D90(void)
{
    int *entry = D_0021D0C0;
    int *end = D_0021D0C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
