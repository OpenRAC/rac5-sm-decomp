extern int D_0024BBC0[];

void func_029BC0(void)
{
    int *entry = D_0024BBC0;
    int *end = D_0024BBC0 + 192;
    for (; entry < end; entry += 3) {
        *entry = 0;
        entry[2] = 15;
    }
}
