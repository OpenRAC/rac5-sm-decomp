extern int D_002313C0[];

void func_02A118(void)
{
    int *entry = D_002313C0;
    int *end = D_002313C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
