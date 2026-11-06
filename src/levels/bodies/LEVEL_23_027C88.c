extern int D_001FE840[];

void func_027C88(void)
{
    int *entry = D_001FE840;
    int *end = D_001FE840 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
