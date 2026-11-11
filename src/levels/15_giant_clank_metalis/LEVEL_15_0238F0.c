extern int D_00179540[];

void func_0238F0(void)
{
    int *entry = D_00179540;
    int *end = D_00179540 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
