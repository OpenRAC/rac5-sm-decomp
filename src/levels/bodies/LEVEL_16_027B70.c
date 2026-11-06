extern int D_001E00C0[];

void func_027B70(void)
{
    int *entry = D_001E00C0;
    int *end = D_001E00C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
