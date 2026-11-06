extern int D_001D13C0[];

void func_0274F0(void)
{
    int *entry = D_001D13C0;
    int *end = D_001D13C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
