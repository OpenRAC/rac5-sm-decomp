extern int D_001FD2C0[];

void func_027658(void)
{
    int *entry = D_001FD2C0;
    int *end = D_001FD2C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
