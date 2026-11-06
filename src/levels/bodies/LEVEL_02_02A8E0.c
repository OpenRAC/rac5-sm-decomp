extern int D_002488C0[];

void func_02A8E0(void)
{
    int *entry = D_002488C0;
    int *end = D_002488C0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
